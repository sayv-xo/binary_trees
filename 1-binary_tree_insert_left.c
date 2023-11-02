#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left child of another node
 * @parent: pointer to node to insert left-child
 * @value: value to store in node
 * Return: pointer to new node or NULL if parent is NULL or failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);

	if (new == NULL || parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
