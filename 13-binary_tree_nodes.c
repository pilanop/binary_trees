#include "binary_trees.h"

/**
 * binary_tree_nodes - function that returns the count of nodes in a
 * binary tree that aren't leaf nodes (that is, they have at least one child).
 * @tree: a pointer to the root node of the binary tree to
 * count the number of nodes in.
 * Return: the count of nodes in the given binary tree that
 * aren't leaf nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return  (1 + binary_tree_nodes(tree->right) +
			 binary_tree_nodes(tree->left));
	return (0);
}
