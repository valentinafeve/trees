#ifndef __NODE__H__
#define __NODE__H__
#include <list>

template <class T>
class Node{
public:
	Node();
	Node(const T& val);
	~Node();

	T getdata();
	void setdata(T& val);

	Node<T>* getleft();
	Node<T>* getright();
	void setleft(Node<T>* nleft);
	void setright(Node<T>* nleft);

	int height();
	unsigned int size();

	void preorder();
	void posorder();
	void inorder();
	
protected:
	T data;
	Node<T>* left;
	Node<T>* right;
};

#include "Node.hxx"

#endif