/*
 * bst.cc
 *
 *  Created on: Mar 3, 2018
 *      Author: nvishwas
 */

#include <iostream>

using namespace std;

template<class T>
class Node {
public:
	T data;
	Node *left;
	Node *right;

	Node(T data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}

	~Node() {

	}
};

template<class T>
class BST {
private:
	Node<T> *root;
	void insert(Node<T>* node, T data) {
		if (data < node->data) {
			if (node->left != NULL) {
				insert(node->left, data);
			} else {
				Node<T>* newNode = new Node<T>(data);
				node->left = newNode;
			}
		} else {
			if (node->right != NULL) {
				insert(node->right, data);
			} else {
				Node<T>* newNode = new Node<T>(data);
				node->right = newNode;
			}
		}
	}

	void preOrder(Node<T> *node) {
		if (node == NULL) {
			return;
		}
		cout << node->data << endl;
		preOrder(node->left);
		preOrder(node->right);
	}

	void postOrder(Node<T> *node) {
		if (node == NULL) {
			return;
		}
		postOrder(node->left);
		postOrder(node->right);
		cout << node->data << endl;
	}
public:
	BST() {
		root = NULL;
	}
	~BST() {

	}
	void insert(T data) {
		if (root == NULL) {
			Node<T>* newNode = new Node<T>(data);
			root = newNode;
			return;
		}
		insert(root, data);
	}

	void preOrder() {
		if (isEmpty()) {
			cout << "No elements in the tree" << endl;
			return;
		}
		preOrder(root);
	}

	void postOrder() {
		if (isEmpty()) {
			cout << "No elements in the tree" << endl;
			return;
		}
		postOrder(root);
	}

	bool isEmpty() {
		return NULL == this->root;
	}

};

int main(int argc, char **argv) {

//	BST<string> bst;
//
//	bst.insert(string("Nikheel"));
//	bst.insert(string("Vishwas"));
//	bst.insert(string("Savant"));
//
//	bst.preOrder();

	BST<int> bst;

	bst.insert(23);
	bst.insert(45);
	bst.insert(56);

//	bst.preOrder();
	bst.postOrder();

	return 0;
}

