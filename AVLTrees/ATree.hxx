#include "ATree.h"
#include <iostream>
#include <list>

template < class T >
ATree<T>::ATree() : root(NULL){
}

template < class T >
ATree<T>::ATree(const T& val){
	Node<T>* nnode = new Node<T>(val);
	this->root = nnode;
}

template < class T >
ATree<T>::~ATree(){
	if(this->root != NULL)
		delete this->root;
}

template < class T >
bool ATree<T>::isempty(){
	if (this->root == NULL)
		return true;
	else
		return false;

	return false;
}

//Getters, Setters de la raíz.
template < class T >
Node<T>* ATree<T>::getroot(){
	return this->root;
}

template < class T >
void ATree<T>::setroot(Node<T>* nroot){
	this->root = nroot;
}

//Modificadores del árbol.
template < class T >
bool ATree<T>::insertnode(T& father, T& node){
	bool wasinserted=0;
	return wasinserted;
}

template < class T >
bool ATree<T>::insertdata(T ndata){
	bool wasinserted=0;
	wasinserted= this->root->insertdata(ndata);
	this->balance();
	return wasinserted;
}

template < class T>
void ATree<T>::balance(){
	Node<T>* problem = this->getroot();
	Node<T>* temp;
	Node<T>* father = NULL;
	bool t=1;
	int n=0;


	int a=0;
	int b=0;
	if(problem->getright() != NULL){
		a=problem->getright()->height();
	}
	if(problem->getleft() != NULL){
		b=problem->getleft()->height();
	}
	if(a-b<=-2 || a-b>=2){
		printf("Balancing...\n");
		while(t){
		n=0;
		if(problem->getright() != NULL){
			if(!problem->getright()->isbalanced()){
				father=problem;
				problem=problem->getright();
			}
			else{
				n++;
			}
		}
		else{
			n++;
		}
		if(problem->getleft() != NULL){
			if(!problem->getleft()->isbalanced()){
				father=problem;
				problem=problem->getleft();
			}else{
				n++;
			}
		}
		else{
			n++;
		}
		if(n==2){
			t=0;
			break;
		}
	}
	int dd1=0, dd2=0;
	int rh=0;
	int lh=0;

	if(problem->getright() != NULL){
		rh=problem->getright()->height();
	}
	if(problem->getleft() != NULL){
		lh=problem->getleft()->height();
	}
	if(lh>rh){
		dd1++;
		temp=problem->getleft();
	}
	else{
		temp=problem->getright();
	}
	rh=0;
	lh=0;	
	if(temp->getright() != NULL){
		rh=temp->getright()->height();
	}
	if(temp->getleft() != NULL){
		lh=temp->getleft()->height();
	}
	if(lh>rh){
		dd2+=2;
	}
	int i=0;
	if(father!=NULL){
		if(father->getright()->getdata() == problem->getdata()){
			i=1;
		}
		if(father->getleft()->getdata() == problem->getdata()){
			i=-1;
		}
		switch(dd2+dd1){
			case 0:{
				problem=this->rotl(problem);
				break;
			}
			case 1:{
				problem=this->rotlr(problem);
				break;
			}
			case 2:{
				problem=this->rotrl(problem);
				break;
			}
			case 3:{
				problem=this->rotr(problem);
				break;
			}
		}
		if(i==-1){
			father->setleft(problem);
		}
		if(i==1){
			father->setright(problem);	
		}
	}

	if(father==NULL){
		switch(dd2+dd1){
			case 0:{
				problem=this->rotl(problem);
				break;
			}
			case 1:{
				problem=this->rotlr(problem);
				break;
			}
			case 2:{
				problem=this->rotrl(problem);
				break;
			}
			case 3:{
				problem=this->rotr(problem);
				break;
			}
		}
		ATree<T>::root=problem;
	}
	}

}

template < class T >
void ATree<T>::deletenode(T* node){
	node=NULL;
}

template < class T>
bool ATree<T>::deletedata(T data){
	T dati;
	Node<T>* notetd;
	Node<T>* temp;
	if(data==this->root->getdata()){
		printf("Eliminando raíz...\n");
		this->setroot(this->rotl(this->root));
		this->root->setleft(NULL);
		this->balance();
	}
	else{
		notetd=findnode(data);
		if(notetd!=NULL){
			printf("Nodo encontrado.\n");
			if(notetd->getright()== NULL && notetd->getleft()==NULL){
				printf("Que no tenga hijos facilita las cosas...\n");
				notetd=NULL;
				return true;
			}
			else{
				if(notetd->getright()== NULL && notetd->getleft()!=NULL){
					printf("Sólo tiene hijos mayores.\n");
					notetd=notetd->getleft();
					return true;
				}
				if(notetd->getleft()== NULL && notetd->getright()!=NULL){
					printf("Sólo tiene hijos menores.\n");
					notetd=notetd->getright();
					return true;
				}
			}
			bool t=true;
			temp=notetd;
			printf("Buscando nodo de reemplazo...\n");
			while(temp->getright()==NULL || temp->getleft()==NULL){
				if(t){
					temp=temp->getleft();
					t=false;
				}
				else{
					temp=temp->getright();
					t=true;
				}
			}
			notetd->setdata(temp->getdata());
			temp=NULL;
			return true;
		}
		else{
			printf("El nodo no se encuentra. \n");
		}
	}
	return false;
}

//Búsqueda.
template < class T >
Node<T>* ATree<T>::findnode(T val){
	Node<T>* founded=NULL;
	if(this->root->getdata()==val){
		return this->root;
	}
	else{
		founded = this->root->findson(val);
	}
	if(founded==NULL){
		return NULL;
	}
	return founded;
}

//Información del árbol.
template < class T >
int ATree<T>::height(){
	int height=0;
	return this->root->height();
}

template < class T >
unsigned int ATree<T>::size(){
	int size=0;
	return size;
}

template < class T >
int ATree<T>::level(){
	int level=0;
	return level;
}


//Recorridos.
template < class T >
void ATree<T>::preorder(){
	printf("%s\n","PREORDER");
	this->root->preorder();

}

template < class T >
void ATree<T>::posorder(){
	printf("%s\n","POSORDER");
	this->root->posorder();
}

template < class T >
void ATree<T>::inorder(){
	printf("%s\n","INORDER");
	this->root->inorder();
}

/*template < class T >
list<T> ATree<T>::listinorder(){
	list<T> datas;
	this->root->listinorder(datas);
	return datas;
}*/

//Rotaciones
template < class T >
Node<T>* ATree<T>::rotr(Node<T>* x){
	Node<T>* z= x->getleft();
	Node<T>* s=NULL;
	
	s=z->getright();
	
	x->setleft(s);
	z->setright(x);
	return z; 
}

template < class T >
Node<T>* ATree<T>::rotl(Node<T>* x){
	Node<T>* z= x->getright();
	Node<T>* s=NULL;
	s=z->getleft();
	
	x->setright(s);
	z->setleft(x);
	return z; 
}

template < class T >
Node<T>* ATree<T>::rotrl(Node<T>* x){
	Node<T>* temp = x->getright();
	x->setright(  rotr(temp) );
	return rotl(x);
}

template < class T >
Node<T>* ATree<T>::rotlr(Node<T>* x){
	Node<T>* temp = x->getleft();
	x->setleft( rotl(temp) );
	return rotr(x);
}