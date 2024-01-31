#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @trees: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *trees)
{
	size_t height_ls = 0;
	size_t height_rs = 0;

	if (!trees)
		return (0);

	height_ls = trees->left ? 1 + binary_tree_height(trees->left) : 0;
	height_rs = trees->right ? 1 + binary_tree_height(trees->right) : 0;
	return (height_ls > height_rs ? height_ls : height_rs);
}
