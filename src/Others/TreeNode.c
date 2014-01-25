#include "stdio.h"
#include "stdlib.h"

typedef struct Node TreeNode;

struct Node{
	int val;
	TreeNode* left;
	TreeNode* right;
};

int getTreeHeight(TreeNode* );

int main(void) {
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* l1 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* l2 = (TreeNode*)malloc(sizeof(TreeNode));
	TreeNode* r1 = (TreeNode*)malloc(sizeof(TreeNode));
	
	root->val = 0;
	root->left = l1;
	root->right = r1;
	
	l1->val = 1;
	l1->left = l2;
	l1->right = 0;
	
	l2->val = 2;
	l2->left = 0;
	l2->right = 0;
	
	r1->val = 4;
	r1->left = 0;
	r1->right = 0;
	
	int heigth = getTreeHeight(root);
	
	printf("Tree Heigth :%d\n", heigth);
	free(root);
	return 0;
}

int getTreeHeight(TreeNode* treeNode) {
	if (treeNode == 0) {
		return 0;
	} else {
		printf("NodeValue :%d\n", treeNode->val);
		
		int leftHeigth = getTreeHeight(treeNode->left);
		int rightHeight = getTreeHeight(treeNode->right);
		
		return 1 + (leftHeigth >= rightHeight ? leftHeigth : rightHeight);
	}
}
