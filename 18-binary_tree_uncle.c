#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: pointer to the node to find uncle
 *
 * Return: Null or Uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	else if (node->parent == NULL)
		return (NULL);

	else if (node->parent->parent == NULL)
		return (NULL);


	else if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	else
		return (NULL);
}
