#include "binary_trees.h"

/**
 * binary_tree_nodes - function counts nodes with at least a child in tree
 * @tree: pointer to root node of tree to count nodes with at least a child
 * Return: nodes count or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (!tree ? 0 : binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right) + Have_Child(tree));
}
