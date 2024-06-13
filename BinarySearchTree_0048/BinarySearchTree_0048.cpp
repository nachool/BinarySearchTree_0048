#include <iostream>
#include <string>
using namespace std;

class Node 
{
public: 
    string info;
    Node* leftchild;
    Node* rightchild;

    // Constructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
    Node* ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initializing ROOT to null
    }

    void insert(string element) // Insert a node in the binary search tree
    {
        Node* newNode = new Node(element, nullptr, nullptr); // Allocate memory for the new node
        newNode->info = element; //assign value to the data field of the new node 
        newNode->leftchild = nullptr; // Make the left child of the new node point to the NULL
        newNode->rightchild = nullptr;  // Make the right child of the new node point to the NULL

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode); // Locate the node which will be the parent of the node to be insert

        if (parent == nullptr) // If the parent is NULL (Tree is empty)
        {
            ROOT = newNode; // Mark the new node as ROOT
            return; // Exit
        }

        if (element < parent->info) // If the value in the data field of the new node is less than that 
        {
            parent->leftchild = newNode; // Make the left child of the parent point to the new node
        } 
        else if (element > parent->info) // If the value in the data field of the new node is greater than that of the
        {

    }
};


