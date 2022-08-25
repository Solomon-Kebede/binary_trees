#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* initialize a new node */
	binary_tree_t *root;
	/* allocate memory */
	root = malloc(sizeof(binary_tree_t));
	/* malloc fails */
	if (root == NULL)
		return (NULL);

	/* assign value to the tree */
	root->n = value;
	root->parent = parent;
	/* When created, a node does not have any child (leaf node) */
	root->left = NULL;
	root->right = NULL;

	/* return address of new node */
	return (root);
}
