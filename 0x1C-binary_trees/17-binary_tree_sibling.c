#include "binary_trees.h"
/**
  * binary_tree_sibling - finds the sibling of a node
  * @node: pointer to tree node to find the sibling
  * Return:  NULL if parent, node is NULL or no sibling
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else if (node->parent->right == node)
			return (node->parent->left);
		else
			return (node);
	}
	else
		return (NULL);

}
