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
  * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
  * @tree: pointer to node to count the  number of leaves
  * Return: 0 if tree is NULL
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
