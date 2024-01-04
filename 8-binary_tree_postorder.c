#include "binary_trees.h"

/**
 * binary_tree_postorder - Executes a function for each node in post-order
 * Traverses a tree using post-order traversal and executes a function
 * for each node.
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
