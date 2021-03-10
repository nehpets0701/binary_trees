#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the tree has every node filled
 * @tree: input tree to printout
 * Return: 1 if true, else false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
