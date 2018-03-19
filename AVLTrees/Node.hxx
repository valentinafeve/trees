#include <queue>
#include <iostream>

template< class T >
Node<T>::Node(){
	
}

template< class T >
Node<T>::Node(const T& val){
	this->data = val;
	this->left=NULL;
	this->right=NULL;
}
	
template< class T >
Node<T>::~Node(){
	
}

template< class T >
T Node<T>::getdata(){
	return Node<T>::data;
}

template< class T >
void Node<T>::setdata(T& val){
	Node<T>::data= val;
}

template< class T >
Node<T>* Node<T>::getleft(){
	return Node<T>::left;
}

template< class T >
void Node<T>::setleft(Node<T>* nleft){
	Node<T>::left= nleft;
}

template< class T >
Node<T>* Node<T>::getright(){
	return Node<T>::right;
}

template< class T >
void Node<T>::setright(Node<T>* nright){
	Node<T>::right= nright;
}

template< class T >
int Node<T>::height(){
	int n=0;
	return n;
}	

template< class T >
unsigned int Node<T>::size(){
	unsigned int t=0;
	return t;
}

template< class T >
void Node<T>::preorder(){
	if(Node<T>::left != NULL){
		printf("%d\n",this->data);
		Node<T>::left->preorder();
		Node<T>::right->preorder();
	}
	else{
		if(Node<T>::right != NULL ){
			Node<T>::right->preorder();
		}
		else{
			printf("%d\n",this->data);
		}
	}
}

template< class T >
void Node<T>::posorder(){
	if(Node<T>::left != NULL){
		Node<T>::left->posorder();
		Node<T>::right->posorder();
		printf("%d\n",this->data);
	}
	else{
		if(Node<T>::right != NULL ){
			Node<T>::right->posorder();
		}
		else{
			printf("%d\n",this->data);
		}
	}
}

template< class T >
void Node<T>::inorder(){
	if(Node<T>::left != NULL){
		Node<T>::left->inorder();
		printf("%d\n",this->data);
		Node<T>::right->inorder();
	}
	else{
		if(Node<T>::right != NULL ){
			Node<T>::right->inorder();
		}
		else{
			printf("%d\n",this->data);
		}
	}
}