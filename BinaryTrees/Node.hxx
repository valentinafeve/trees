#include "Node.h"
#include <queue>

template< class T >
Node<T>::Node(){
	this->dec.clear();
}

template< class T >
Node<T>::Node(const T& val){
	this->data = val;
	this->dec.clear();
}
	
template< class T >
Node<T>::~Node(){
	typename TList::iterator it;
  	for (it = this->dec.begin(); it != this->dec.end(); it++)
    	delete *it;
  	
  	this->dec.clear();
}

template< class T >
T Node<T>::getData(){

}

template< class T >
void Node<T>::setData(T& val){

}

template< class T >
void Node<T>::insertdec(T& nval){

}

template< class T >
bool Node<T>::deletedec(T& val){

}

template< class T >
Node<T>* Node<T>::findec(T& val){

}
template< class T >
void Node<T>::clearlist(){

}

template< class T >
unsigned int Node<T>::getndec(){

}

template< class T >
bool Node<T>::insertnode(T& father, T& n){
}

template< class T >
bool Node<T>::deletenode(T& n){

}

template< class T >
Node<T>* Node<T>::findnode(T& val){

}

template< class T >
int Node<T>::height(){

}	

template< class T >
unsigned int Node<T>::size(){

}

template< class T >
void Node<T>::preorder(){

}

template< class T >
void Node<T>::posorder(){

}

template< class T >
void Node<T>::inorder(){

}

template< class T >
void Node<T>::level(){

}