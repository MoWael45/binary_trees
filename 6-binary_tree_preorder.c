#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a tree using pre-order traversal
 * Executes a function for each node starting from the root,
 * then its left subtree,
 * and finally its right subtree.
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
