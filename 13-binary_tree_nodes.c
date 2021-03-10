#include "binary_trees.h"

/**
 * binary_tree_nodes - prints the number of nodes that have at least 1 child
 * @tree: input tree to printout
 * Return: node number
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (!(tree->left) && !(tree->right)))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
