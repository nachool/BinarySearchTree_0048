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
        
};


