#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: Parent node of the node to be inserted
 * @value: Value of node to be inserted
 * Return: Pointer to new node or NULL if failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);
	if (parent->left)
	{
		tmp = parent->left;
		new = binary_tree_node(parent, value);
		if (!new)
			return (NULL);
		tmp->parent = new;
		parent->left = new;
		new->left = tmp;
	}
	else
	{
		new = binary_tree_node(parent, value);
		parent->left = new;
	}
	return (new);
}
