#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node
 * is a root node.
 * @node: is a pointer to the node to check.
 *
 * Return: The function returns 1 if the node is a root,
 * and 0 otherwise or if the node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
