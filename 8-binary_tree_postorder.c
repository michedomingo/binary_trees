#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through binary tree using post-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: function call for each node,
 * value in the node must be passed as a parameter to this function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
