#include "binary_trees.h"

/**
 * binary_tree_preorder - function uses pre-order traversal to go through tree
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer to a function to call for each node, node's value is its arg
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
