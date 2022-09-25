#include <iostream>
using namespace std;

/*
Binary Search Tree:
A Binary Search Tree (BST) is a tree in which all the nodes follow the below-mentioned properties −

 The left sub-tree of a node has a key less than or equal to its parent node's key.
 The right sub-tree of a node has a key greater than or equal to its parent node's
key.

Thus, BST divides all its sub-trees into two segments; the left sub-tree and the right subtree and can be defined as −

left_subtree (keys) ≤ node (key) ≤ right_subtree (keys)


Representation
BST is a collection of nodes arranged in a way where they maintain BST properties. Each
node has a key and an associated value. While searching, the desired key is compared to
the keys in BST and if found, the associated value is retrieved.

Following is a pictorial representation of BST −

                         27
                       /   \
                    14      35
                  /  \     /   \
                10   19   31    42

We observe that the root node key (27) has all less-valued keys on the left sub-tree and
the higher valued keys on the right sub-tree.
32. Binary Search Tree

*/

// Define a node having some data, references to its left and right child nodes.
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

/*
Insert Operation:
Whenever an element is to be inserted, first locate its proper location.
 Start searching from the root node, then if the data is less than the key value, search for the empty
location in the left subtree and insert the data.
 Otherwise, search for the empty location
in the right subtree and insert the data.
*/
node *insertInBST(node *root, int value)
{
    if (root == NULL)
    {
        return new node(value);
    }

    if (value < root->data)
    {
        root->left = insertInBST(root->left, value);
    }
    else
    {
        root->right = insertInBST(root->right, value);
    }

    return root;
}

void inOrder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

main()

{

    node *root = NULL;
    root = insertInBST(root, 5);
    insertInBST(root, 1);
    insertInBST(root, 3);
    insertInBST(root, 4);
    insertInBST(root, 2);
    insertInBST(root, 7);

    // print inorder sequence to confirm and check the BST works or not
    inOrder(root); // inorder sequence is always sorted
    cout << endl;
}