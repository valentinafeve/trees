#ifndef __TREE__H__
#define __TREE__H__

#include "Node.h"

template < class T >
class BTree{
protected:
	Node<T>* root;

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
	void rotr(T& node);
	void rotl(T& node);
	void rotrl(T& node);
	void rotlr(T& node);

	
};