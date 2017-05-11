//
//  BinarySearchTree.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 4/11/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.hpp"
#include "BinarySearchTreeNode.h"

template <class Type>
class BinarySearchTree : public Tree<Type>
{
private:
    BinarySearchTreeNode<Type> * root;
    calculateSize(BinarySearchTreeNode<Type> * root);
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOrderTraversal(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);
    
    BinarySearchTreeNode<Type> * getRightMostChild(BinarySearchTreeNode<Type> * current);
    BinarySearchTreeNode<Type> * getLeftMostChild(BinarySearchTreeNode<Type> * current);
    
    void removeNode(BinarySearchTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinarySearchTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
    
};

template <class Type>
BinarySearchTree<Type> :: BinarySearchTree() : Tree<Type>()
{
    this->root = nullptr;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTree<Type> :: getRoot()
{
    return this->root;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTree<Type> :: root()
{
    this->root = root;
}

template <class Type>
void BinareSearchTree<Type> :: inOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}
template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getLeftMostChild(BinarySearchTreeNode<Type> * current)
{
    BinarySearchTreeNode<Type> * temp = current;
    whild(temp->getLeftChild() != nullptr)
    {
        temp = temp->getLeftChild();
    }
    
    return temp;
}

template <class Type>
Type BinarySearchTreeNode<Type> :: findMinimum()
{
    assert(root != nullptr);
    BinarySearchTreeNode<Type> * smallest = getLeftMostChild(root);
    return smallest->getNodeData();
}

template <class Type>
Type BinarySearchTreeNode<Type> :: findMaximum()
{
    assert(root != nullptr);
    BinarySearchTreeNode<Type> * largest = getRightMostChild(root);
    return largest->getNodeData();
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getRightMostChild(BinarySearchTreeNode<Type> * current)
{
    BinarySearchTreeNode<Type> * temp = current;
    while(temp->getRightChild() != nullptr)
    {
        temp = temp->getRightChild();
    }
    
    return temp;
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinarySearchTreeNode<Type> * start)
{
    return -99;
}

template <class Type>
int BinarySearchTree<Type> ::inOrderTraversal(BinarySearchTree<Type> * inStart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinarySearchTreeNode<Type> * preStart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinarySearchTreeNode<Type> * postStart)
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinarySearchTreeNode<Type> * start, int index, int size)
{
    if(start == nullptr)
    {
        return true;
    }
    
    if(index >= size)
    {
        return false;
    }
    
    return (isComplete)
}
#endif /* BinarySearchTree_h */
