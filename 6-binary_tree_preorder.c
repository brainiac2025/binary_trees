#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @trees: tree to traverse
 * @funcs: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *trees, void (*funcs)(int))
{
	if (!trees || !funcs)
		return;

	funcs(trees->n);
	binary_tree_preorder(trees->left, funcs);
	binary_tree_preorder(trees->right, funcs);
}
