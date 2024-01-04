#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively frees an entire binary tree
 * Frees each node when both its left and right children are NULL
 * @tree: Pointer to the root of the tree to be freed
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);

	if (tree->right)
		binary_tree_delete(tree->right);

	free(tree);
}
