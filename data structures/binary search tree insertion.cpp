#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:

  	void preOrder(Node *root) {

      	if( root == NULL )
          	return;

      	std::cout << root->data << " ";

      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
Node is defined as

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int data) {

        Node *temp =(Node*)malloc(1 *sizeof(Node));
        temp->data=data;
        temp->left=NULL;
        temp->right=NULL;
         if(root==NULL){return temp;}
        addNode(root, temp);
        return root;
    }
  void   addNode(Node *root, Node *temp) {
    if (temp->data < root->data) {
        if (root->left == NULL) {
            root->left = temp;
        } else {
            addNode(root->left, temp);
        }
    } else {
        if (root->right == NULL) {
            root->right = temp;
        } else {
            addNode(root->right, temp);
        }
    }
}

};
