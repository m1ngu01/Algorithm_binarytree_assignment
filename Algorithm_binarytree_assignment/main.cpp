#include <Stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"


void main() {

	//1. 2. 3. etc
	node* root = NULL;

	root = maketree();

	printf("초기 이진트리 결과\n");
	printtree(root);

	//4. 특정 값을 찾는 노드의 포인터 변환하는 함수 
	node* result = NULL;
	result = findNode(root,200);
	if (result == NULL)
	{
		printf("error\n");
	}
	else
	{
		printf("findNode = %d\n", result->data);
	}

	//5. insert 함수
	node* new_left_node = createnode(800);
	node* new_right_node = createnode(900);

	insertLeftNode(root, new_left_node);
	insertRightNode(root, new_right_node);

	printf("새로운 노드 삽입 후\n");
	printtree(root);

}