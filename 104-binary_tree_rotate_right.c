#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a node from parent to child
 * @tree: input
 * Return: pointer to new root of tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->left->right == NULL)
	{
		tree->left->right = tree;
		tree->parent = tree->left;
		tree->left->parent = NULL;
		tree->left = NULL;
	}
	else
	{
		temp = tree->left->right;
		temp->parent = tree;
		tree->left->right = tree;
		tree->parent = tree->left;
		tree->left->parent = NULL;
		tree->left = temp;
	}
	return (tree->parent);
}
