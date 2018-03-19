#include "ATree.h"


int main(){
	ATree<int> mytree(21);

	mytree.insertdata(10);
	mytree.insertdata(40);
	mytree.insertdata(8);
	mytree.insertdata(12);
	mytree.insertdata(38);
	mytree.insertdata(60);
	mytree.insertdata(55);
	mytree.insertdata(63);
	printf("%s\n");
	mytree.insertdata(50);
	
	mytree.preorder();
	mytree.posorder();
	mytree.inorder();
	
	return 0;
}