#include "binary_trees.h"

/**
 * binary_tree_inorder - function goes thourgh a binary tree
 * using pre-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function call for each node
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* give to func the value */
	func(tree->n);

	/* left part of tree */
	binary_tree_preorder(tree->left, func);

	/* right part of tree */
	binary_tree_preorder(tree->right, func);

}
