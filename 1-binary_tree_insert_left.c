#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent:  pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: NULL on failure or parent is NULL esle pointer to node
 * If parent already has a left-child, the new node must take its place
 * and the old left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf;

	if (parent == NULL)
		return (NULL);

	leaf = malloc(sizeof(binary_tree_t));

	if (leaf == NULL)
		return (NULL);

	leaf->parent = parent;
	leaf->n = value;
	leaf->right = NULL;

	if (parent->left)
	{
		leaf->left = parent->left;
		parent->left->parent = leaf;
	}
	else
	{
		leaf->left = NULL;
	}
	parent->left = leaf;
	return (leaf);
}
