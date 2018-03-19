#include "ATree.h"


int main(){
	ATree<int> mytree(9);

	//mytree.setroot(pr);

	Node<int>* a= new Node<int>(4);
	Node<int>* b= new Node<int>(10);
	Node<int>* c= new Node<int>(2);
	Node<int>* d= new Node<int>(1);
	Node<int>* e= new Node<int>(3);
	Node<int>* f= new Node<int>(6);
	Node<int>* g= new Node<int>(5);
	Node<int>* h= new Node<int>(7);
	Node<int>* i= new Node<int>(9);
	Node<int>* j= new Node<int>(12);
	Node<int>* k= new Node<int>(11);
	Node<int>* l= new Node<int>(13);

	Node<int>* r= new Node<int>(8);
	r->setright(b);
	r->setleft(a);
	a->setleft(c);
	a->setright(f);
	c->setright(e);
	c->setleft(d);
	f->setleft(g);
	f->setright(h);
	b->setright(j);
	j->setright(l);
	j->setleft(k);
	b->setleft(i);
	mytree.setroot(r);
	
	mytree.inorder();
	return 0;
}