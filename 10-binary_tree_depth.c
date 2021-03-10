#include "binary_trees.h"

/**
 * binary_tree_depth-counts tree depth
 * Return:size_t depth
 * @tree:input
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	int depth = 0;

	if (tree == NULL)
		return (0);

	while (current->parent != NULL)
	{
		current = current->parent;
		depth++;
	}
	return (depth);
}
