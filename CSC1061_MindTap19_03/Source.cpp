// CSC1061_MindTap19_03
// Write the function swapSubtrees 
// that swaps all of the left and right subtrees of a binary tree.
//Data: 65 55 22 44 61 19 90 10 78 52 -999

#include <iostream>
#include "binarySearchTree.h"

using namespace std;

int main()
{
	bSearchTreeType<int>  treeRoot;

	int numList[] = { 65, 55, 22, 44, 61, 19, 90, 10, 78, 52 };
	int size = 10;
	int num;

	for (int i = 0; i < size; i++) {

		treeRoot.insert(numList[i]);
		cout << numList[i] << " ";
	}

	cout << endl << "Tree nodes in inorder: ";
	treeRoot.inorderTraversal();

	cout << endl << "Tree nodes in preorder: ";
	treeRoot.preorderTraversal();

	cout << endl << "Tree nodes in postorder: ";
	treeRoot.postorderTraversal();
	cout << endl;

	cout << "Tree Height: " << treeRoot.treeHeight()
		<< endl;

	treeRoot.swapSubtrees();
	cout << "********* After swapping subtrees **********" << endl;
	cout << endl << "Tree nodes in inorder: ";
	treeRoot.inorderTraversal();

	cout << endl << "Tree nodes in preorder: ";
	treeRoot.preorderTraversal();

	cout << endl << "Tree nodes in postorder: ";
	treeRoot.postorderTraversal();
	cout << endl;

	cout << "Tree Height: " << treeRoot.treeHeight()
		<< endl;

	return 0;
}