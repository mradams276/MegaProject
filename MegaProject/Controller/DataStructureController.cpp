//
//  DataStructureController.cpp
//  MegaProject
//
//  Created by Adams, Kyle on 5/30/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#include "DataStructureController.hpp"

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/Timer.hpp"
#include "IntNodeArray.hpp"
#include "List.h"
#include "Array.hpp"
#include "../Model/Tree.h"
#include "../Model/BTree.h"
#include "../Model/BinarySearchTree.h"
using namespace std;
DataStructureController :: DataStructureController()
{
}
void DataStructureController :: start()
{
    testGraph();
}
void DataStructureController :: testGraph()
{
    Graph<string> KyleGraph;
    KyleGraph.addVertex("String1");
    KyleGraph.addVertex("String2");
    KyleGraph.addVertex("String3");
    KyleGraph.addVertex("String4");
    KyleGraph.addVertex("String5");
    KyleGraph.addVertex("String6");
    KyleGraph.addVertex("String7");
    //first
    KyleGraph.addEdge(0,1);
    KyleGraph.addEdge(1,4);
    //second
    KyleGraph.addEdge(1,2);
    KyleGraph.addEdge(2,1);
    //third
    KyleGraph.addEdge(0,3);
    KyleGraph.addEdge(3,0);
    //fourth
    KyleGraph.addEdge(5,0);
    KyleGraph.addEdge(5,1);
    KyleGraph.addEdge(5,2);
    //fifth
    KyleGraph.addEdge(6,1);
    KyleGraph.addEdge(6,4);
    KyleGraph.breadthFirstTraversal(KyleGraph, 0);
    KyleGraph.depthFirstTraversal(KyleGraph, 0);
}

