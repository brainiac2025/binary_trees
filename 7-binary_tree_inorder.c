#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @trees: tree to traverse
 * @funcs: pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *trees, void (*funcs)(int))
{
	if (!trees || !funcs)
		return;

	binary_tree_inorder(trees->left, funcs);
	func(trees->n);
	binary_tree_inorder(trees->right, funcs);
}
