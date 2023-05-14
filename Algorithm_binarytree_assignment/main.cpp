#include <Stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"


void main() {

	//1. 2. 3. etc
	node* root = NULL;

	root = maketree();

	printf("�ʱ� ����Ʈ�� ���\n");
	printtree(root);

	//4. Ư�� ���� ã�� ����� ������ ��ȯ�ϴ� �Լ� 
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

	//5. insert �Լ�
	node* new_left_node = createnode(800);
	node* new_right_node = createnode(900);

	insertLeftNode(root, new_left_node);
	insertRightNode(root, new_right_node);

	printf("���ο� ��� ���� ��\n");
	printtree(root);

}