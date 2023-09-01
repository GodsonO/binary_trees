#include "binary_trees.h"
/**
 * binary_tree_rotate_right -  performs a rigth-rotation on a binary tree
 * @tree: pointer to binare_tree_t
 * Return: pointer to the new root node of the tree once rotated;
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot, *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->left)
	{
		temp = tree->left->right;
		pivot = tree->left;
		pivot->parent = tree->parent;
		pivot->right = tree;
		tree->parent = pivot;
		tree->left = temp;
		if (temp)
			temp->parent = tree;
		return (pivot);
	}
	return (NULL);
}
