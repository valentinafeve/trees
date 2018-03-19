ifndef __NODE__H__
#define __NODE__H__

#include <iostream>
#include <list>

template <class T>
class Node{
public:
	typedef std::list< Node<T>* > TList;
public:
	Node();
	Node(const T& val);
	~Node();

	T getData();
	void setData(T& val);

	void insertdec(T& nval);
	bool deletedec(T& val);
	Node<T>* findec(T& val);
	void clearlist();
	unsigned int getndec();

	bool insertnode(T& father, T& n);
	bool deletenode(T& n);
	Node<T>* findnode(T& val);
	int height();
	unsigned int size();
	void preorder();
	void posorder();
	void inorder();
	void level();
protected:
	T data;
	Node<T>* nleft;
	Node<T>* nright;
};

#include "Node.hxx"

#endif