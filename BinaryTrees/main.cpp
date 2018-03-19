#include "ATree.h"


int main(){
	ATree<int> mytree(21);

	Node<int>* a= new Node<int>(10);
	Node<int>* b= new Node<int>(3);
	Node<int>* c= new Node<int>(2);
	Node<int>* e= new Node<int>(1);
	Node<int>* f= new Node<int>(19);
	Node<int>* g= new Node<int>(26);
	Node<int>* h= new Node<int>(23);
	Node<int>* i= new Node<int>(22);
	Node<int>* j= new Node<int>(28);

	mytree.getroot()->setright(g);
	mytree.getroot()->setleft(a);
	a->setleft(b);
	a->setright(f);
	b->setleft(c);
	c->setleft(e);
	g->setright(j);
	g->setleft(h);
	h->setleft(i);

	//mytree.preorder();
	//mytree.posorder();
	//mytree.inorder();
	return 0;
}