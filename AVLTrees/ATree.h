#ifndef __ATREE__H__
#define __ATREE__H__

#include "Node.h"

template < class T >
class ATree{
protected:
	Node<T>* root;
public:
	ATree();
	ATree(const T& val);
	~ATree();
	bool isempty();
	//Getters, Setters de la raíz.
	Node<T>* getroot();
	void setroot(Node<T>* nroot);
	//Modificadores del árbol.
	bool insertnode(T& father, T& node);
	bool deletenode(T& node);
	//Búsqueda.
	Node<T>* findnode(T val);
	//Información del árbol.
	int height();
	unsigned int size(); 
	int level();
	//Recorridos.
	void preorder();
	void posorder();
	void inorder();
	//Balanceos
	Node<T>* rotr(Node<T>* x);
	Node<T>* rotl(Node<T>* x);
	Node<T>* rotrl(Node<T>* x);
	Node<T>* rotlr(Node<T>* x);
	
};

#include "ATree.hxx"

#endif