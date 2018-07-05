#include "binary_trees.h"
/**
  * binary_tree_is_leaf - checks if a node is a leaf
  * @node: pointer to the node to check
  * Return: 1 if node is a leaf, otherwise 0
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree
  * Return: height or 0 if tree is NULL
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lefth;
	int righth;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	lefth = (1 + binary_tree_height(tree->left));
	righth = (1 + binary_tree_height(tree->right));

	if (lefth > righth)
		return (lefth);
	else
		return (righth);
}
