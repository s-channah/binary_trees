#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: height or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree == NULL)
		return (0);
	tree_depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (tree_depth);
}
