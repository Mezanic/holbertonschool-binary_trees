#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: is a pointer to the root node
 *
 * Return: NULL or number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
