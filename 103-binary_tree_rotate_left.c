#include "binary_trees.h"
/**
 * binary_tree_rotate_left -  performs a left-rotation on a binary tree
 * @tree: pointer to binare_tree_t
 * Return: pointer to the new root node of the tree once rotated;
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *pivot, *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->right)
	{
		temp = tree->right->left;
		pivot = tree->right;
		pivot->parent = tree->parent;
		pivot->left = tree;
		tree->parent = pivot;
		tree->right = temp;
		if (temp)
		{
			temp->parent = tree;
		}
		return (pivot);
	}
	return (NULL);
}
