#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @nodes: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *nodes)
{
	if (!nodes || !nodes->parent)
		return (NULL);

	if (nodes == nodes->parent->left)
		return (nodes->parent->right);
	return (nodes->parent->left);
}
