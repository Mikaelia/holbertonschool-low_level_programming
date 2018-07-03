#include "binary_trees.h"
/**
  * binary_tree_balance - calculats balance factor of binary tree
  * @tree: pointer to tree node
  * Return: 0 if tree is NULL
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	left_h = 0;
	right_h = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL)
		left_h += (binary_tree_balance(tree->left) + 1);
	if (tree->right != NULL)
		right_h += (binary_tree_balance(tree->right) + 1);
	return(left_h - right_h);
}
