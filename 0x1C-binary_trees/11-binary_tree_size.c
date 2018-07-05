#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of tree;
 * @node: the node to check size
 * Return: returns the size of the node
 */
size_t binary_tree_size(const binary_tree_t *node)
{
	int size;

	if (!node)
		return (0);
	size = 1;
	size += binary_tree_size(node->left);
	size += binary_tree_size(node->right);
	return (size);
}
