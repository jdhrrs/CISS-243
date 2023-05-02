#ifndef BINARYTREE_H

#define BINARYTREE_H

#include <iostream>

using namespace std;

// BinaryTree template

template <class T>

class BinaryTree

{

private:

	struct TreeNode

	{

		T value; ?? // The value in the node

		TreeNode* left; // Pointer to left child node

		TreeNode* right; // Pointer to right child node

	};

	TreeNode* root; // Pointer to the root node

	// Private member functions

	void insert(TreeNode*&, TreeNode*&);

	void destroySubTree(TreeNode*);

	void deleteNode(T, TreeNode*&);

	void makeDeletion(TreeNode*&);

	void displayInOrder(TreeNode*) const;

	void displayPreOrder(TreeNode*) const;

	void displayPostOrder(TreeNode*) const;

public:

	// Constructor

	BinaryTree()

	{
		root = nullptr;
	}

	// Destructor

	~BinaryTree()

	{
		destroySubTree(root);
	}

	// Binary tree operations

	void insertNode(T);

	bool searchNode(T);

	void remove(T);

	void displayInOrder() const

	{
		displayInOrder(root);
	}

	void displayPreOrder() const

	{
		displayPreOrder(root);
	}

	void displayPostOrder() const

	{
		displayPostOrder(root);
	}

};
