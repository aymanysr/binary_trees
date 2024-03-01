#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the current node is a leaf, increment the count */
	if (tree->left == NULL && tree->right == NULL)
		leaves += 1;

	/* Recursively count the leaves in the left subtree */
	leaves += binary_tree_leaves(tree->left);
	/* Recursively count the leaves in the right subtree */
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
