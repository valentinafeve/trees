#include "Tree.h"
#include "list"

template< class T >
Tree<T>::Tree() : root(NULL){

}

template< class T >
Tree<T>::Tree(const T& val){
	Node<T> *nnode = new Node<T>(val);
	this->root = nnode;
}

template< class T >
Tree<T>::~Tree(){
	if(this->root != NULL)
		delete this->root;
}

template< class T >
bool Tree<T>::isempty(){
	if (this->root == NULL)
		return true;
	else
		return false;
}

template< class T >
Node<T>* Tree<T>::getroot(){
	return this->root;
}

template< class T >
void Tree<T>::setroot(Node<T>* nroot){
	this->root = nroot;
}

template< class T >
bool Tree<T>::insertnode(T& father, T& node){
	Node<T>* ntemp = findnode(father);
	if(ntemp != NULL){
		ntemp->insertdec(node);
	}
	else{
		return false;
	}
	return true;
}

template<class T>
bool Tree<T>::deletenode(T& node){
	if(node->getndec() == 0){
		delete(node);
		return true;
	}
	else{
		//Por cada hijo hacer deletenode();
	}
}

template<class T>
Node<T>* Tree<T>::findnode(T val){
	if(this->root->getdata() ==val){
		return this->root;
	}
	else{
		//Por cada hijo findec();
	}
}

template<class T>
int Tree<T>::height(){
int numi=0;
if(this->root->getndec() == 0){
	return 1;
}
else{
	TList* sons=this->root->getdec();
	for(Node<T>* node: sons){
		if(node->height() >numi ){
			numi=node->height();
		}
	}
}

}

template<class T>
unsigned int Tree<T>::size(){

}

template<class T>
void Tree<T>::preorder(){

}

template<class T>
void posorder(){

}

template<class T>
void inorder(){

}

template<class T>
int level(){

}
