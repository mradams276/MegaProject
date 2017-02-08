//
//  IntNode.cpp
//  MegaProject
//
//  Created by Adams, Kyle on 2/8/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#include "IntNode.hpp"

IntNode :: IntNode()
{
    this->nodeData = -999;
    this->nodePointer = nullptr;
}

IntNode :: IntNode(int data)
{
    this->nodeData = data;
    nodePointer = nullptr;
}

IntNode :: IntNode(int nodeData, IntNode * next)
{
    this->nodeData = nodeData;
    this->nodePointer = next;
}

int IntNode :: getNodeData()
{
    return nodeData;
}

IntNode * IntNode :: getNodePointer()
{
    return nodePointer;
}

void IntNode :: setNodeData(int nodeData)
{
    this->nodeData = nodeData;
}

void IntNode :: setNodePointer(IntNode * next)
{
    this->nodePointer = next;
}
