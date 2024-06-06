#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child of a node
 * @parent: pointer to node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to created node/ NULL if failure or parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_node(parent, value);
	if (new_right == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}

	parent->right = new_right;

	return (new_right);
}
