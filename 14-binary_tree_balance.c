#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);

	return (right_h + 1);
}

/**
 * binary_tree_balance - Measurer the balance factor of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: return 0 or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int  left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (left_h - right_h);
}
