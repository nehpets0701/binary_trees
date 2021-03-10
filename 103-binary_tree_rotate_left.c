#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a node from parent to child
 * @tree: input
 * Return: pointer to new root of tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->right->left == NULL)
	{
		tree->right->left = tree;
		tree->parent = tree->right;
		tree->right->parent = NULL;
		tree->right = NULL;
	}
	else
	{
		temp = tree->right->left;
		temp->parent = tree;
		tree->right->left = tree;
		tree->parent = tree->right;
		tree->right->parent = NULL;
		tree->right = temp;
	}
	return (tree->parent);
}
