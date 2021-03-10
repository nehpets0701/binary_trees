#include "binary_trees.h"

/**
 * binary_tree_size - prints out the total number of nodes from tree root
 * @tree: input tree to printout
 * Return: tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
