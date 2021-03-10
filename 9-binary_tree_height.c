#include "binary_trees.h"

/**
 * binary_tree_height - prints out the height of the tree
 * @tree: input tree to printout
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	else
		left_height = 0;
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	else
		right_height = 0;
	return (left_height > right_height ? left_height : right_height);
}
