﻿#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BTDataType;


typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;


}BTNode;


BTNode * BuyNode(BTDataType x)
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


int TreeHeight(BTNode * root)
{
	if (root == NULL)
		return 0;
	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);

	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;


}


int TreeLevel(BTNode* root,int k)//k代表求第k层的节点个数
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	int leftnums = TreeLevel(root->left, k - 1);
	int rightnums = TreeLevel(root->right, k - 1);
	return leftnums + rightnums;
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
	printf("TreeLevel : %d ", TreeLevel(ret, 3));



}


#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

#include "Queue.h"

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
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

void PreOrder(BTNode* root) {
	if (root == NULL) {
		printf("NULL ");
		return;
	}

	printf("%d ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

void InOrder(BTNode* root) {
	if (root == NULL) {
		printf("NULL ");
		return;
	}

	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

//int size = 0;
//void TreeSize(BTNode* root)
//{
//	if (root == NULL)
//		return;
//
//	++size;
//	TreeSize(root->left);
//	TreeSize(root->right);
//}

//void TreeSize(BTNode* root, int* psize)
//{
//	if (root == NULL)
//		return;
//
//	++(*psize);
//	TreeSize(root->left, psize);
//	TreeSize(root->right, psize);
//}

int TreeSize(BTNode* root)
{
	return root == NULL ? 0 :
		TreeSize(root->left)
		+ TreeSize(root->right)
		+ 1;
}

//int TreeHeight(BTNode* root)
//{
//	if (root == NULL)
//		return 0;
//
//	return TreeHeight(root->left) > TreeHeight(root->right)
//		? TreeHeight(root->left) + 1 : TreeHeight(root->right) + 1;
//}

int TreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;

	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);

	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}

int TreeKLevel(BTNode* root, int k)
{
	assert(k > 0);

	if (root == NULL)
		return 0;

	if (k == 1)
		return 1;

	return TreeKLevel(root->left, k - 1)
		+ TreeKLevel(root->right, k - 1);
}

// ֵΪxĽ
BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;

	if (root->data == x)
		return root;

	BTNode* lret = TreeFind(root->left, x);
	if (lret)
		return lret;

	BTNode* rret = TreeFind(root->right, x);
	if (rret)
		return rret;

	return NULL;
}

//BTNode* TreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//		return NULL;
//
//	if (root->data == x)
//		return root;
//
//	BTNode* lret = TreeFind(root->left, x);
//	if (lret)
//		return lret;
//
//	return TreeFind(root->right, x);
//}

void LevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%d ", front->data);

		if (front->left)
			QueuePush(&q, front->left);

		if (front->right)
			QueuePush(&q, front->right);
	}

	QueueDestroy(&q);
}

int main()
{
	BTNode* root = CreatTree();
	PreOrder(root);
	printf("\n");

	InOrder(root);
	printf("\n");

	PostOrder(root);
	printf("\n");

	/*size = 0;
	TreeSize(root);
	printf("TreeSize:%d\n", size);

	size = 0;
	TreeSize(root);
	printf("TreeSize:%d\n", size);*/

	/*int size1 = 0;
	TreeSize(root, &size1);
	printf("TreeSize:%d\n", size1);

	int size2 = 0;
	TreeSize(root, &size2);
	printf("TreeSize:%d\n", size2);*/

	printf("TreeSize:%d\n", TreeSize(root));
	printf("TreeSize:%d\n", TreeSize(root));
	printf("TreeSize:%d\n", TreeSize(root));
	printf("TreeHeight:%d\n", TreeHeight(root));
	printf("TreeKLevel:%d\n", TreeKLevel(root, 3));
	printf("TreeKLevel:%d\n", TreeKLevel(root, 4));

	printf("TreeFind:%p\n", TreeFind(root, 5));
	printf("TreeFind:%p\n", TreeFind(root, 50));

	LevelOrder(root);

	return 0;
}