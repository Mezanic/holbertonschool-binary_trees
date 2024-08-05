#include "binary_trees.h"

/**
 * binary_tree_depth - function measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0 or depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
}
