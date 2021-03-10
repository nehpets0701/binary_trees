#include "binary_trees.h"

/**
 * findADepth-find depth
 * Return:depth
 * @tree:input
 */
int findADepth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * isPerfectRec-is perfect?
 * Return:0/1
 * @tree:input
 * @d:input
 * @level:input
 */
int isPerfectRec(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (isPerfectRec(tree->left, d, level + 1) &&
			isPerfectRec(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect-tells if a tree is perfect
 * Return:0/1
 * @tree:input tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = findADepth(tree);

	return (isPerfectRec(tree, d, 0));
}
