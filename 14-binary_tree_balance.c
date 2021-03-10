#include "binary_trees.h"

/**
 * height-height
 * Return:height
 * @tree:input
 */
int height(binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (1 + left);
	else
		return (1 + right);
}

/**
 * binary_tree_balance-balance factor
 * Return:balance factor
 * @tree:input tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = height(tree->left);
	rh = height(tree->right);

	return (lh - rh);
}
