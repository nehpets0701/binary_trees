#include "binary_trees.h"

/**
 * binary_tree_uncle-returns uncle
 * Return:uncle of node
 * @node:input node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = node->parent->parent;
	if (parent == grandparent->left)
		return (grandparent->right);
	return (grandparent->left);	
}
