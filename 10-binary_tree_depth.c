#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node in a
 * binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL - 0.
 * Otherwise - The depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}
