#include <iostream>
using namespace std;

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

/*
Search In BST:
Whenever an element is to be searched, start searching from the root node.
 Then if the data is less than the key value, search for the element in the left subtree.
 Otherwise, search for the element in the right subtree. Follow the same algorithm for each node.
 */
node *searchInBST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (key == root->data)
    {
        return root;
    }
    if (key < root->data)
    {
        searchInBST(root->left, key);
    }

    searchInBST(root->right, key);
}

main()

{

    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);

    /*
                    4
                  /   \
                2      5
             /   \      \
            1    3       6
    */
    inOrder(root);
    cout << endl;

    if (searchInBST(root, 5) == NULL)
    {
        cout << "key doesn't exist" << endl;
    }
    else
    {
        cout << "key  exists" << endl;
    }
}