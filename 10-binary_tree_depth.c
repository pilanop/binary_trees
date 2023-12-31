#include "binary_trees.h"

/**
 * binary_tree_depth - function that calculates the depth of a node
 * in a binary tree.
 * @tree: is a pointer to the node to compute the depth.
 * Return: Depth of the node or 0 if tree is NULL or the node does
 * not have a parent.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
