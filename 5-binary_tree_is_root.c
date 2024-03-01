#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: A pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If the node is NULL, it cannot be a root */
	if (node == NULL)
		return (0);

	/* If the node has no parent, it is a root */
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
