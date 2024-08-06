#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL, otherwise the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t leftHeight, rightHeight;

    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (0);

    leftHeight = binary_tree_height(tree->left);
    rightHeight = binary_tree_height(tree->right);

    return ((leftHeight > rightHeight ? leftHeight : rightHeight) + 1);
}

