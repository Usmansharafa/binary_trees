#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the left child of another node
 * @parent: Parent node of the node to be inserted
 * @value: Value of node to be inserted
 * Return: Pointer to new node or NULL if failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);
	if (parent->right)
	{
		tmp = parent->right;
		new = binary_tree_node(parent, value);
		if (!new)
			return (NULL);
		tmp->parent = new;
		parent->right = new;
		new->right = tmp;
	}
	else
	{
		new = binary_tree_node(parent, value);
		parent->right = new;
	}
	return (new);
}
