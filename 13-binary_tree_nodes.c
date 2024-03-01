#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of nodes with at least 1 child in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the current node has at least one child, increment the count */
	if (tree->left != NULL || tree->right != NULL)
		nodes += 1;

	/* Recursively count the nodes with at least one child in the left subtree */
	nodes += binary_tree_nodes(tree->left);
	/* Recursively count the nodes with at least one child in the right subtree */
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
