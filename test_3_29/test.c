#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
#include"Queue.h"

typedef int BTDataType;


typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;


}BTNode;

BTNode* BuyNode(BTDataType x);


BTNode* BuyNode(BTDataType x)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->data = x;

	return newnode;
}

BTNode* CreatTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	BTNode* node7 = BuyNode(7);


	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	node3->right = node7;

	return node1;
}


void PreOder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->data);
	PreOder(root->left);
	PreOder(root->right);
}

void InOder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOder(root->left);
	printf("%d ", root->data);
	InOder(root->right);
}


void PostOder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOder(root->left);
	PostOder(root->right);
	printf("%d ", root->data);
}

int  TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}


int TreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;
	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);

	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;


}


int TreeLevel(BTNode* root, int k)//k代表求第k层的节点个数
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	int leftnums = TreeLevel(root->left, k - 1);
	int rightnums = TreeLevel(root->right, k - 1);
	return leftnums + rightnums;
}

BTNode* BTFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	BTNode* lret = BTFind(root->left, x);
	if (lret)
		return lret;
	BTNode* rret = BTFind(root->right, x);
	if (rret)
		return rret;
	return NULL;
}

void LevelOrder(BTNode* root)//层序遍历，使用队列完成
{
	Queue q;
	QInit(&q);
	if (root)
		QPush(&q, root);
	while (!QEmpty(&q))
	{
		BTNode* front = QFront(&q);
		QPop(&q);
		printf("%d ", front->data);
		if (front->left)
			QPush(&q, front->left);
		if (front->right)
			QPush(&q, front->right);
	}
	QDestroy(&q);
}

int main()
{
	BTNode* ret = CreatTree();
	PreOder(ret);
	printf("\n");
	InOder(ret);
	printf("\n");
	PostOder(ret);
	printf("\n");
	printf("TreeSize: %d ", TreeSize(ret));
	printf("\n");
	printf("TreeHeight: %d ", TreeHeight(ret));
	printf("\n");
	printf("TreeLevel : %d\n", TreeLevel(ret, 3));
	printf("%p", BTFind(ret, 3));
	printf("\n");
	LevelOrder(ret);






}
