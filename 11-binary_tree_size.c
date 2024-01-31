#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @trees: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *trees)
{
	if (!trees)
		return (0);

	return (binary_tree_size(trees->left) + binary_tree_size(trees->right) + 1);
}
