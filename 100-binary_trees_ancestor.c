#include "binary_trees.h"


binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    binary_tree_t *ancestor;

    if (first == NULL || second == NULL)
        return (NULL);

    if (first == second)
        return ((binary_tree_t *)first);

    ancestor = binary_trees_ancestor(first->parent, second->parent);

    if (ancestor != NULL)
        return ancestor;

    if (first == ancestor || second == ancestor)
        return ancestor;

    
    return (NULL);

}