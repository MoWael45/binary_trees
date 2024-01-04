#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root in a binary tree
 * A root node has no parent.
 * @node: Pointer to the node to check
 * Return: 1 if it's a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
