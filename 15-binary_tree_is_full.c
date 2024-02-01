#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @trees: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full
 *         0 if the tree is not full
 *         0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *trees)
{
	if (!trees)
		return (0);

	if (!trees->right && !trees->left)
		return (1);

	if (trees->right && trees->left)
		return (binary_tree_is_full(trees->left) &&
			binary_tree_is_full(trees->right));

	return (0);
}
