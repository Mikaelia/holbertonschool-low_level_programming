#include "binary_trees.h"
/**
  * binary_tree_balance - calculates balance factor of binary tree
  * @tree: pointer to tree node
  * Return: 0 if tree is NULL
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int rightheight = 0;
	int leftheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftheight = (1 + binary_tree_balance(tree->left));

	if (tree->right != NULL)
		rightheight = (1 + binary_tree_balance(tree->right));


	return (leftheight - rightheight);
}
