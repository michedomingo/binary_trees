#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure the height
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height = 1 + binary_tree_height(tree->right);

	return (height);
}
