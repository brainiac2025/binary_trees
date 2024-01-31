#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order traverse
 * @trees: tree to traverse
 * @funcs: pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *trees, void (*funcs)(int))
{
	if (!trees || !funcs)
		return;

	binary_tree_postorder(trees->left, funcs);
	binary_tree_postorder(trees->right, funcs);
	funcs(trees->n);
}
