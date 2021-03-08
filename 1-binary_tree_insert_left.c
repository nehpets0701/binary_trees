#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node at left brnach of parent
 * @parent: parent to new node created
 * @value: value to put into new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	if (parent->left == NULL)
		parent->left = newnode;
	else
	{
		parent->left->parent = newnode;
		newnode->left = parent->left;
		parent->left = newnode;
	}
	return (newnode);
}
