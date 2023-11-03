#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * @node: pointer to node to check
 * Return: 0 if node is NULL or not root, otherwise 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
