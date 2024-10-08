#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function check if node is a leaf
 * @node: pointer to the node need to be check
 *
 * Return: 1 if node is a leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);
}
