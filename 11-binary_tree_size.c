#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	/* Recursively compute the size of the left subtree */
	size += binary_tree_size(tree->left);

	/* Recursively compute the size of the right subtree */
	size += binary_tree_size(tree->right);

	/* Count the current node */
	size += 1;

	return (size);
}
