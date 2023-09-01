#include "binary_trees.h"

/**
 * binary_tree_size - function that calculates the size of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the size.
 * Return: size of the tree. If tree is NULL, the function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t n_left, n_right;

		n_left = binary_tree_size(tree->left);
		n_right = binary_tree_size(tree->right);
		return (1 + n_left + n_right);
	}
}
