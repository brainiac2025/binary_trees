#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @trees: tree to delete
 */
void binary_tree_delete(binary_tree_t *trees)
{
	if (!trees)
		return;
	binary_tree_delete(trees->right);
	binary_tree_delete(trees->left);
	free(trees);
}
