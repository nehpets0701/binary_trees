#include "binary_trees.h"
#include <limits.h>

/**
 * maxValue-finds max value in tree
 * Return:max
 * @tree:input
 */
int maxValue(const binary_tree_t *tree)
{
	int res = tree->n;
	int lres = maxValue(tree->left);
	int rres = maxValue(tree->right);

	if (tree == NULL)
		return (INT_MIN);

	if (lres > res)
		res = lres;
	if (rres > res)
		res = rres;
	return res;
}

/**
 * minValue-finds min value in tree
 * Return:min
 * @tree:input
 */
int minValue(const binary_tree_t *tree)
{
	int res = tree->n;
	int lres = minValue(tree->left);
	int rres = minValue(tree->right);

	if (tree == NULL)
		return (INT_MAX);

	if (lres < res)
		res = lres;
	if (rres < res)
		res = rres;
	return res;
}

/**
 * binary_tree_is_bst-checks if search tree
 * Return:0/1
 * @tree:input
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && maxValue(tree->left) > tree->n)
		return (0);

	if (tree->right != NULL && minValue(tree->right) < tree->n)
		return (0);

	if (!binary_tree_is_bst(tree->left) || !binary_tree_is_bst(tree->right))
		return (0);

	return (1);
}
