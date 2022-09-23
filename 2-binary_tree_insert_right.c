#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf;

	if (parent == NULL)
		return (NULL);

	leaf = malloc(sizeof(binary_tree_t));

	if (leaf == NULL)
		return (NULL);

	leaf->parent = parent;
	leaf->n = value;
	leaf->left = NULL;

	if (parent->right)
	{
		leaf->right = parent->right;
		parent->right->parent = leaf;
	}
	else
	{
		leaf->right = NULL;
	}
	parent->right = leaf;
	return (leaf);
}
