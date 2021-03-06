#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root node of tree to measure balance factor
 * Return: difference in height of left/right subtree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t countLeft = 0, countRight = 0;

	if (!tree)
		return (0);

	countLeft = binary_tree_height(tree->left);
	countRight = binary_tree_height(tree->right);

	if (tree->left)
		countLeft++;
	if (tree->right)
		countRight++;

	return (countLeft - countRight);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure the height
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft = 0, heightRight = 0;

	if (!tree)
		return (0);

	if (tree->left)
		heightLeft = 1 + binary_tree_height(tree->left);
	if (tree->right)
		heightRight = 1 + binary_tree_height(tree->right);

	if (heightLeft > heightRight)
		return (heightLeft);

	return (heightRight);
}
