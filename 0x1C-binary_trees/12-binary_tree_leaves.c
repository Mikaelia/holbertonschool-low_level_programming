#include "binary_trees.h"
/**
  * binary_tree_leaves - counts number of leaves in a binary tree
  * @tree: pointer to node to count the  number of leaves
  * Return: 0 if tree is NULL
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves;

	leaves = 0;

	if (!tree)
		return (0);
	if (tree->left == 0 && tree->right == 0)
		return (1);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	return (leaves);
}
