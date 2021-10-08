#pragma once

template <class T>
class TreeNode {
private:
	T item;
	TreeNode<T>* left;
	TreeNode<T>* right;
	int height;

public:
	TreeNode(T x);

	int height();
	friend BinarySearchTree<T>;
};

template <class T>
class BinarySearchTree {
private:
	TreeNode<T>* root;

public:
	//constructor
	BinarySearchTree() { root = NULL };

	//methods:
	bool isEmpty();
	T searchMax();
	bool exists(T n);
	TreeNode<T>* insert(TreeNode<T>* current, T n);
	//Traversal
	void inOrder(TreeNode<T>* node);
	void preOrder(TreeNode<T>* node);
	void postOrder(TreeNode<T>* node);
};

#include "BinarySearchTree.cpp"