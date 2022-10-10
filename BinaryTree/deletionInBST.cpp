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

// print inorder sequence to confirm and check the BST works or not
// inorder sequence is always sorted
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

// finds in Order Successor
node *inOrderSuccessor(node *root)
{
    node *current = root;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

// deletion in BST
node *deleteInBST(node *root, int key)
{

    // first find where the node lies
    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }

    // when node to be deleted is found
    else
    {
        // case 1 & 2
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            // delete root;
            return temp;
        }

        // case 3
        node *temp = inOrderSuccessor(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
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

    // case 1: when node is a leaf
    root = deleteInBST(root, 1);
    inOrder(root);
    cout << endl;

    // case 2: when node has one child
    // root = deleteInBST(root, 5);
    // inOrder(root);
    // cout << endl;

    // case 3: when node has two children
    // root = deleteInBST(root, 2);
    // inOrder(root);
    // cout << endl;
}

