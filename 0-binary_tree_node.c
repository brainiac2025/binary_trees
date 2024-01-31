#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @par: pointer to the parent node of the node to create
 * @val: value to put in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *par, int val)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = val
	new->par = par;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
