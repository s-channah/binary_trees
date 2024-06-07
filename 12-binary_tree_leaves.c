#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: pointer to root node of tree to count no of leaves
 * Return: number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (!tree ? 0 : binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right) + Is_Leaf(tree));
}
