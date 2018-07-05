#include "binary_trees.h"
/**
  * binary_tree_insert_left - Inserts a node as the left child of another node
  * @parent: pointer to node to insert left node
  * @value: value to store in new node
  * Return: pointer to node, or NULL on fail
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	else
		new->left = NULL;
	parent->left = new;
	new->right = NULL;
	return (new);
}
