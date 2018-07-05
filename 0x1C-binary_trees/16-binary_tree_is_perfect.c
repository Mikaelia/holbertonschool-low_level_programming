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

	return (lefth == righth);
}
/**
  * binary_tree_is_perfect - checks if a binary tree is perfect
  * @tree: pointer to tree node
  * Return: 0 if tree is NULL
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left && tree->right)
		return (binary_tree_height(tree) &&
				binary_tree_is_perfect(tree->right) &&
				binary_tree_is_perfect(tree->left));
	return (0);

}
