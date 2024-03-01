#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Compute the height of the left subtree */
	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);

	/* Compute the height of the right subtree */
	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
