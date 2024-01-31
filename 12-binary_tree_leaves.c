#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @trees: tree to count the leaves from
 *
 * Return: number of leaves
 *         0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *trees)
{
	if (!trees)
		return (0);

	if (!trees->left && !trees->right)
		return (1);

	return (binary_tree_leaves(trees->left) + binary_tree_leaves(trees->right));
}
