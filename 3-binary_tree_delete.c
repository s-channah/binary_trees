#include "binary_trees.h"


/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root node of tree to be deleted
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
