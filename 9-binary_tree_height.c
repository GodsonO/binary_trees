#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int height_left = 0, height_right = 0;

		if (tree->right)
			height_right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			height_left = 1 + binary_tree_height(tree->left);
		if (height_left > height_right)
			return (height_left);
		else
			return (height_right);
	}
	else
		return (0);
}
