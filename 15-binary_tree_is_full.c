#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: is a pointer to the root node of the tree to check.
 *
 * Return: If the tree is full, return 1. Otherwise, it returns 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
