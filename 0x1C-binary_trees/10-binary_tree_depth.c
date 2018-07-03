#include "binary_trees.h"
/**
  * binary_tree_depth - measures the depthof a binary tree
  * @node: pointer to node to measure depth of the tree
  * Return: 0 if node is null
  */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth;

	if (!node || !(node->parent))
		return (0);
	depth = (1 + binary_tree_depth(node->parent));
	return (depth);
}
