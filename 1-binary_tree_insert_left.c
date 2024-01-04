#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node to the left of the parent
 * If a left child already exists, it shifts it down a level and adds the new node as the first left child
 * @parent: Parent node to which the left child is added
 * @value: Value of the new node
 * Return: Pointer to the new node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;
	return (new_node);
}
