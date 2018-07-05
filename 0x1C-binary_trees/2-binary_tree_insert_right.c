#include "binary_trees.h"
/**
  * binary_tree_insert_right - Inserts node as the right child of another node
  * @parent: pointer to node to insert right node
  * @value: value to store in new node
  * Return: pointer to node, or NULL on fail
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;
	parent->right = new;
	new->left = NULL;
	return (new);
}
