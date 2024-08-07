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
 * binary_tree_is_perfect - function that checks a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 0 or 1 if binary tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_left = 0, tree_right = 0;

	if (tree == NULL)
		return (0);

	tree_left = binary_tree_height(tree->left);
	tree_right = binary_tree_height(tree->right);

	if (tree_left != tree_right)
		return (0);

	if (tree_left == 0 && tree_right == 0)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));

	return (0);

}
