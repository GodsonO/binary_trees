#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: If no common ancestors return NULL,
 * else return a pointer to the lowest common ancestor node of
 * the two given nodes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *father, *mother;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mother = first->parent, father = second->parent;
	if (first == father || !mother || (!mother->parent && father))
		return (binary_trees_ancestor(first, father));
	else if (mother == second || !father || (!father->parent && mother))
		return (binary_trees_ancestor(mother, second));
	return (binary_trees_ancestor(mother, father));
}
