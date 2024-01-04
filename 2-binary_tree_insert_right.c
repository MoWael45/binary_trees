#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to the right of a parent node
 * If the parent's right child exists,
 * the new node moves down one level and becomes the new right child
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 * Return: Pointer to the new node, or NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
