#include "binary_trees.h"

/**
 * binary_tree_postorder - through a binary tree using post-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function call for each node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;


	/* left part of tree */
	binary_tree_postorder(tree->left, func);

	/* right part of tree */
	binary_tree_postorder(tree->right, func);

	/* give to func the value */
	func(tree->n);
}
