#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full.
 *@tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left && right);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (0);
}
