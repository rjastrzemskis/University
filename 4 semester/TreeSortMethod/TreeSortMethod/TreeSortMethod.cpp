#include <iostream>

using namespace std;

struct Node
{
    int key;
    struct Node* left, * right;
};

struct Node* newNode(int item)
{
    struct Node* temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

Node* insert(Node* node, int key)
{

    if (node == NULL) return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

void storeSorted(Node* root, int arr[], int& i)
{
    if (root != NULL)
    {
        storeSorted(root->left, arr, i);
        arr[i++] = root->key;
        storeSorted(root->right, arr, i);
    }
}

void treeSort(int arr[], int n)
{
    struct Node* root = NULL;

    root = insert(root, arr[0]);
    for (int i = 1; i < n; i++)
        root = insert(root, arr[i]);

    int i = 0;
    storeSorted(root, arr, i);
}

int main()
{
    //Tree sort method
    int numberArray[] = { -2, 22, 2, 0, 44 };
    int arrayLength = sizeof(numberArray) / sizeof(*numberArray);

    cout << endl << "Before tree sort method: ";
    for (int i = 0; i < arrayLength; i++)
    {
        cout << numberArray[i] << " ";
    }

    treeSort(numberArray, arrayLength);

    cout << endl << "After tree sort method: ";
    for (int i = 0; i < arrayLength; i++)
    {
        cout << numberArray[i] << " ";
    }
}