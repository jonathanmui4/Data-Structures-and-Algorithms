#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

template <class T>
TreeNode<T>::TreeNode(T x)
{
	left = right = NULL;
	item = x;
	height = 0;
}

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	return y;
}

template <class T>
int TreeNode<T>::height()
{
	//height(null) = -1
	int leftHeight = -1;
	int rightHeight = -1;

	if (left != NULL) {
		leftHeight = left->height();
	}
	if (right != NULL) {
		rightHeight = right->height();
	}

	return max(leftHeight, rightHeight) + 1;
}


template <class T>
bool BinarySearchTree<T>::isEmpty()
{
	if (root == NULL) {
		return true;
	}
	return false;
}

template <class T>
T BinarySearchTree<T>::searchMax()
{
	TreeNode<T>* current = root;

	//Since tree is balanced, keep traversing right till no more right child
	//That will be the max value
	while (current->right) {
		current = current->right;
	}
	return current->item;
}

template <class T>
bool BinarySearchTree<T>::exists(T n)
{
	TreeNode<T>* current = root;

	//Traversing through the tree (when current is not null)
	//Start from root. if x is greater than root element, search right subtree
	//else left subtree
	while (current) {
		if (current->item == n) {
			return true;
		}
		else if (n > current->item) {
			current = current->right;
		}
		else {
			current = current->left;
		}
	}
	return false;
}

template <class T>
TreeNode<T>* BinarySearchTree<T>::insert(TreeNode<T>* current, T n)
{
	if (current->item > n) {
		if (current->left) {
			current->left = insert(current->left, n);
		}
		else {
			current->left = new TreeNode<T>(n);
		}
	}
	else if (n > current->item) {
		if (current->right) {
			current->right = insert(current->right, n);
		}
		else {
			current->right = new TreeNode<T>(n);
		}
	}
	return current;
}

template <class T>
void BinarySearchTree<T>::inOrder(TreeNode<T>* node)
{
	//Start by calling inOrder(root)
	//Inorder is left root right
	if (!node) return;
	inOrder(node->left);
	cout << node->item << " ";
	inOrder(node->right);
}

template <class T>
void BinarySearchTree<T>::preOrder(TreeNode<T>* node)
{
	//Start by calling preOrder(root)
	//preorder is root left right
	if (!node) return;
	cout << node->item << " ";
	preOrder(node->left);
	preOrder(node->right);
}

template <class T>
void BinarySearchTree<T>::postOrder(TreeNode<T>* node)
{
	//STart by calling postOrder(root)
	//postorder is left right root
	if (!node) return;
	postOrder(node->left);
	postOrder(node->right);
	cout << node->item << " ";
}