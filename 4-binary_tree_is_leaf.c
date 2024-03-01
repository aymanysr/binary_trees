#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: A pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* If the node is NULL, it cannot be a leaf */
	if (node == NULL)
		return (0);

	/* If both left and right children are NULL, it's a leaf */
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
