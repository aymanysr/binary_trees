#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Compute the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Compute the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return the maximum of left & right subtree heights + 1 for current node */
	return (left_height > right_height ? left_height + 1 : right_height + 1);
}
