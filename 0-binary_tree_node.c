#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a new binary tree node.
 *
 * @parent: Pointer to the parent node of the new node.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*  Allocate memory for the new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/* Check if memory allocation was successful */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Initialize the new node with the given values */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
