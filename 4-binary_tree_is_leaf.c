#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function checking if a binary tree node
 * is a leaf node.
 * @node: is a pointer to the node to check.
 *
 * Return: 1 if node is a leaf node, 0 otherwise. Returns 0 if node
 * is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
