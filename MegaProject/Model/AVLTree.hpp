//
//  AVLTree.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 4/19/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTreeNode.hpp"
#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinarySearchTreeNode<Type * leftRotation (BinarySearchTreeNode<Type * parent);
    BinarySearchTreeNode<Type * rightRotation(BinarySearchTreeNode<Type * parent);
    BinarySearchTreeNode<Type * leftRightRotation(BinarySearchTreeNode<Type> * parent);
    BinarySearchTreeNode<Type * rightLeftRotation(BinarySearchTreeNode<Type> * parent);
    
    BinarySearchTreeNode<Type * balanceSubTree (BinarySearchTreeNode<Type * parent);
    
    BinarySearchTreeNode<Type * insertNode(BinarySearchTreeNode<Type * parent);
    BinarySearchTreeNode<Type * removeNode(BinarySearchTreeNode<Type * parent);
    
    
    int heightDifference(BinarySearchTreeNode<Type * parent);
    
public:
    AVLTree();
    ~AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};
    
template <class Type>
int AVLTree<Type> :: heightDifference(BinarySearchTreeNode<Type> * node)
    {
        int balance;
        int leftHeight= calculateHeight(node->getLeftChild());
        int rightHeight = calculateHeight(node->getRightChild());
        balance= leftHeight - rightHeight;
        return balance;
    }
    
    template <class Type>
    BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRotation (BinarySearchTreeNode<Type> * parent)
    {
        BinarySearchTreeNode<Type> * changedNode;
        changedNode = parent->getLeftChild();
        parent->setLeftChild(changedNode->getRightChild());
        changedNode->setRightChild(parent);
        return changedNode;
    }
    
    template <class Type>
    BinarySearchTreeNode<Type> * AVLTree<Type> :: rightRotation (BinarySearchTreeNode<Type> * parent)
    {
        BinarySearchTreeNode<Type> * changedNode;
        changedNode = parent->getRightChild();
        parent->setLeftChild(changedNode->getLeftChild());
        changedNode->setLeftChild(parent);
        return changedNode;
    }
    
    template <class Type>
    BinarySearchTreeNode<Type> * AVLTree<Type> :: rightLeftRotation (BinarySearchTreeNode<Type> * parent)
    {
        BinarySearchTreeNode<Type> * changedNode;
        changedNode = parent->getRightChild();
        parent->setRightChild(leftRotation(changedNode));
        return rightRotation(parent);
    }
    
    template <class Type>
    BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRightRotation (BinarySearchTreeNode<Type> * parent)
    {
        BinarySearchTreeNode<Type> * changedNode;
        changedNode = parent->getLeftChild();
        parent->setLeftChild(rightRotation(changedNode));
        return leftRotation(parent);
    }
    
    template <class Type>
    BinarySearchTreeNode<Type> * balanceSubTree (BinarySearchTreeNode<Type> * parent)
    {
        int balanceFactor = heightDifference(parent);
        
        if(balanceFactor > 1)
        {
            if(heightDifference(parent->getLeftChild()) > 0)
            {
                parent = leftRotation(parent);
            }
            else
            {
                parent = leftRightRoataion(parent);
            }
            else if(balanceFactor < -1)
            {
                if(heightDifference(parent->getRightChild()) > 0)
                {
                    parent = rightLeftRotation(parent);
                }
                else
                {
                    parent = rightRotation(parent);
                }
            }
            return parent;
        }
    }
    
    template <class Type>
    BinarySearchTreeNode<Type> * AVLTree<Type> :: insertNode(BinarySearchTreeNode<Type> * parent, Type inserted)
    {
        if(parent == nullprt)
        {
            parent = new BinarySearchTreeNode<Type>(inserted);
            return parent;
        }
        else if(inserted < parent->getNodeData())
        {
            parent->setLeftChild(insertNode(parent->getLeftChild(), inserted));
            parent = balanceSubTree(parent);
        }
        else if(inserted > parent->getNodeData())
        {
            parent->setRightChild(insertedNode(parent->getRightChild(), inserted));
            parent = balanceSubTree(parent);
        }
        return parent;
    }
    
    template <class Type>
    void AVLTree<Type> :: insert(Type item)
    {
        insertNode(this->getRoot(), item);
    }
    
    template <class Type>
    void AVLTree<Type> :: remove(Type item)
    
#endif /* AVLTree_h */
