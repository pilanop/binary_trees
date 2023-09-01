#include "binary_trees.h"

/**
 * binary_tree_postorder - function that performs post-order
 * traversal of a binary tree.
 * @tree: is a pointer to the root of the binary tree to traverse.
 * @func: is a pointer to a function to call for each node.
 * Return: None.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
