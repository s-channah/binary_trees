#include "binary_trees.h"

/**
 * *binary_tree_node - function that creates a new node
 * @parent: parent node for the new node created
 * @value: vakue to be placed in the newly created node
 * Return: pointer to new node created or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t);
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
