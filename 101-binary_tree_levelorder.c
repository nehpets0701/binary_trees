#include "binary_trees.h"

/**
 * height-height function
 * Return:height
 * @node:input
 */
int height(const binary_tree_t *node)
{
	int lheight = height(node->left);
	int rheight = height(node->right);

	if (node == NULL)
		return (0);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}

/**
 * printLevel-print level
 * @tree:input
 * @level:level
 */
void printLevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		printLevel(tree->left, level - 1, func);
		printLevel(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder-level order transversal
 * @tree:input
 * @func:function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, h = height(tree);

	if (tree == NULL || func == NULL)
		return;

	for (i = 0; i < h; i++)
		printLevel(tree, i, func);
}
