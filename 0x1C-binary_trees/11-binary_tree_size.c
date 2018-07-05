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
  * binary_tree_size - measures the size of a binary tree
  * @tree: pointer to node to measure size of the tree
  * Return: 0 if tree is NULL
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;


	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	size = 0;
	size += binary_tree_size(tree->left);
	size += (1 + binary_tree_size(tree->right));
	return (size);
}
