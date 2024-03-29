#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @trees: node to calculate the depth of
 *
 * Return: depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *trees)
{
	size_t depths = 0;

	if (!trees)
		return (0);

	while (trees->parent)
	{
		depths++;
		trees = trees->parent;
	}

	return (depths);
}
