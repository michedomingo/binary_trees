#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer to root node of tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);

	if (tree->left)
	{
		tree->parent = tree->left;
		tree->left = (tree->parent)->right;
		if (tree->left)
			(tree->left)->parent = tree;
		(tree->parent)->right = tree;
		(tree->parent)->parent = NULL;
		return (tree->parent);
	}
	return (tree);
}
