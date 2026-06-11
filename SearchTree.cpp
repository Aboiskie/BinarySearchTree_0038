#include<iostream>
#include <string>
using namespace std;

class Node

public:
    string info;
    Node *leftchild;
    Node *rightchild;

    //Constructor for the node class
    Node(string 1, Node *1, Node *r)
    {
        info = 1;
        leftchild = 1;
        rightchild = r;
    }
};

class BinaryTree

public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = NULL; //Initializes ROOT to NULL
    }

    //insert a node in the binary search tree
    void insert(string element)
    {
        Node *newNode = new Node(element, NULL, NULL); //Creates a new node

        newNode->info = element;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;

        Node *parent = NULL;
        Node *currentNode = NULL;

        search(element, parent, currentNode); //Searches for the element in the tree