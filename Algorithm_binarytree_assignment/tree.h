#pragma once

typedef struct _node {

	int data;
	struct _node* left;
	struct _node* right;

}node;

extern node* maketree();
extern node* findNode(node* root, int value);
extern node* insertLeftNode(node* where, node* new_node);
extern node* insertRightNode(node* where, node* new_node);
extern node* createnode(int value);
extern void printtree(node* root);