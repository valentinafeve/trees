#ifndef __TREE__H__
#define __TREE__H__

#include "Node.h"

template <class T>
class Tree{
protected:
	Node<T>* root;
public:
	typedef std::list< Node<T>* > TList;

public:
	Tree();
	Tree(const T& val);
	~Tree();
	bool isempty();
	//Getters, Setters de la raíz.
	Node<T>* getroot();
	void setroot(Node<T>* nroot);
	//Modificadores del árbol.
	bool insertnode(T& father, T& node);
	bool deletenode(T& node);
	Node<T>* findnode(T val);
	int height();
	unsigned int size(); 
	void preorder();
	void posorder();
	void inorder();
	int level();

};

#include "Tree.hxx"

#endif