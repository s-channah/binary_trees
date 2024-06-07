#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: tree size or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	return (!tree ? 0 : binary_tree_size(tree->left) +
		 binary_tree_size(tree->right) + 1);
}
