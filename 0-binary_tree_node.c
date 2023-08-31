#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: This is a pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 * Return: NULL on errer
 * Otherwise return a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	new_n = malloc(sizeof(binary_tree_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = value;
	new_n->parent = parent;
	new_n->left = NULL;
	new_n->right = NULL;
	return (new_n);
}
