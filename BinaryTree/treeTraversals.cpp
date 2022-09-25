#include <iostream>
using namespace std;

/*
Tree Traversal:
Traversal is a process to visit all the nodes of a tree and may print their values too.
Because, all nodes are connected via edges (links) we always start from the root (head) node.
That is, we cannot random access a node in a tree.
There are three ways which we use to traverse a tree −
 In-order Traversal
 Pre-order Traversal
 Post-order Traversal

Generally, we traverse a tree to search or locate a given item or key in the tree or to print all the values it contains.

In-orderTraversal:
In this traversal method, the left subtree is visited first, then the root and later the right
sub-tree. We should always remember that every node may represent a subtree itself.
If a binary tree is traversed in-order, the output will produce sorted key values in an
ascending order.

Pre-orderTraversal:
In this traversal method, the root node is visited first, then the left subtree and finally the
right subtree.

Post-orderTraversal
In this traversal method, the root node is visited last, hence the name. First we traverse
the left subtree, then the right subtree and finally the root node.



*/

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(node *root)
{

    // base condition
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);  // traverse left
    preOrder(root->right); // traverse right
}

void postOrder(node *root)
{

    // base condition
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
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
    node *root = new node(1); // root node for whole binary tree
    root->left = new node(2);
    root->right = new node(3);
    /*
                1
              /  \
            2    3
    */

    root->left->left = new node(4);
    root->left->right = new node(5);
    /*
                 1
               /  \
             2    3
            / \
          4    5
     */

    root->right->right = new node(7);
    root->right->left = new node(6);
    /*
                 1
               /  \
            2       3
         / \       / \
       4    5    6    7
     */

    cout << "pre order sequence: ";
    preOrder(root);
    cout << endl;

    cout << "post order sequence: ";
    postOrder(root);
    cout << endl;

    cout << "in order sequence: ";
    inOrder(root);
    cout << endl;
}