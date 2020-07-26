#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to parent node to insert the left-child in
 * @value: input value of new node
 * Return: pointer to created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	parent->left = newNode;

	return (newNode);
}
