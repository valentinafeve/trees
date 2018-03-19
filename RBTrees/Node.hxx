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
void Node<T>::setdata(T val){
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
	int lh=0;
	int rh=0;
	if(this->getleft() != NULL){
		lh=1+this->getleft()->height();
	}
	else{
		if(this->getright() != NULL){
			lh=1+this->getright()->height();
		}
		else{
			return 1;
		}
	}
	if(lh>rh){
		n=lh;
	}
	else{
		n=rh;
	}
	return n;
}	

template< class T >
unsigned int Node<T>::size(){
	unsigned int t=0;
	return t;
}

template< class T >
bool Node<T>::insertdata(T ndata){
	if( ndata < this->getdata() ){
		if(this->getleft() == NULL ){
			Node<T>* nnode = new Node<T>(ndata);
			this->setleft(nnode);
		}
		else{
			this->getleft()->insertdata(ndata);
		}
	}
	if( ndata > this->getdata() ){
		if(this->getright() == NULL ){
			Node<T>* nnode = new Node<T>(ndata);
			this->setright(nnode);
		}
		else{
			this->getright()->insertdata(ndata);
		}
	}
	if( ndata == this->getdata() ){
		return 0;
	}
	printf("%d\n", );
	return 1;
}

template< class T >
void Node<T>::preorder(){
	printf("%d\n",this->data);
	if(Node<T>::left != NULL){
		Node<T>::left->preorder();
	}
	if(Node<T>::right != NULL ){
		Node<T>::right->preorder();
	}
}

template< class T >
void Node<T>::posorder(){
	if(Node<T>::left != NULL){
		Node<T>::left->posorder();
	}
	if(Node<T>::right != NULL ){
		Node<T>::right->posorder();
	}
	printf("%d\n",this->data);
}

template< class T >
void Node<T>::inorder(){
	if(Node<T>::left != NULL){
		Node<T>::left->inorder();
	}
	printf("%d\n",this->data);
	if(Node<T>::right != NULL ){
		Node<T>::right->inorder();
	}
}