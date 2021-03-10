#include "binary_trees.h"

/**
 * binary_tree_depth - counts tree depth
 * Return: depth from node
 * @tree: input
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}

/**
 * binary_trees_ancestor - check the most recent ancestor of 2 nodes
 * @first: first input node
 * @second: second input node
 * Return: ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t fdepth, sdepth;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	fdepth = binary_tree_depth(first);
	sdepth = binary_tree_depth(second);
	if (fdepth > sdepth)
		return (binary_trees_ancestor(first->parent, second));
	if (fdepth < sdepth)
		return (binary_trees_ancestor(first, second->parent));
	return (binary_trees_ancestor(first->parent, second->parent));
}
