//
//  IntNode.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 2/8/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//


#ifndef IntNode_hpp
#define IntNode_hpp
#include <String>
using namespace std;
class IntNode
{
private:
    int nodeData;
    IntNode * nextPointer;
public:
    void start();
    //constructors
    IntNode();
    IntNode(int value);

    IntNode(int value, IntNode * nextNode);
    //methods
    int getNodeData();
    IntNode * getNextPointer();
    void setNodeData(int value);
    void setNextPointer(IntNode * nextNode);
};
#endif /* IntNode_hpp */
