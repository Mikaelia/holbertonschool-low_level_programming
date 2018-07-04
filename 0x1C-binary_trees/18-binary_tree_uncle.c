#include "binary_trees.h"
/**
  * binary_tree_uncle - finds the uncle of a node
  * @node: pointer to tree node to find the uncle
  * Return:  NULL if node is NULL or no uncle
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		else if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
		else
			return (node->parent);
	}
	else
		return (NULL);

}
