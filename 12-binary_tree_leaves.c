#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf node.
 * @node: is a pointer to the node to check.
 * Return: Returns 1 if a node is a leaf node, 0 otherwise.
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

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: is a pointer to the tree to check.
 * Return: Returns the number of leaves in a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));

}
