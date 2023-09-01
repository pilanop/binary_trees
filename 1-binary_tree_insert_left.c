#include "binary_trees.h"


/**
 * binary_tree_insert_left -  Inserts a new left child node with the given
 * value to the specified parent node.
 *
 * @parent: The parent node to which the new left child node will be inserted.
 * @value: The value to assign to the new left child node.
 *
 * Return: The newly created left child node, or NULL if insertion failed.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	return (node);
}
