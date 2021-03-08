#include "binary_trees.h"

/**
 * binary_tree_is_leaf-isleaf
 * Return:0/1
 * @node:input node to check
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
