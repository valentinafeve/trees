#include "ATree.h"
#include <iostream>

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

	return wasinserted;
}

template < class T >
bool ATree<T>::deletenode(T& node){
	bool wasdeleted=0;
	return wasdeleted;
}

//Búsqueda.
template < class T >
Node<T>* ATree<T>::findnode(T val){
	Node<T>* founded=NULL;
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