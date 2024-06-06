#include "binary_trees.h"

/**
 * binary_tree_postorder - function traverse a tree using post-order traversal
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer to function that call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
