#include "binary_trees.h"
/**
 * binary_tree_insert_left -inserts a node to the left child
 *
 * parent: its a pointer to the node to insert the left child
 * @value: data well store in th new node 
 *
 * return: if parent is NULL erreur ,return pointer to a new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
}
	binary_tree_t *new;

	if (parent == NULL)
	       return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
	        return (NULL);

	if (parent->left != NULL)
	{
	        new->left = parent->left;
		parent->left->parent = new;

	}
	parent->left = new;
	return (new);

}


