//
//  StructureController.cpp
//  MegaProject
//
//  Created by Adams, Kyle on 2/8/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#include "IntNodeArray.hpp"
#include "StructureController.hpp"
#include "../Model/Timer.hpp"
#include "List.h"
#include <iostream>

using namespace std;

StructureController :: StructureController()
{
    wordNode = Node<string>();
    numberNode = Node<int>();
    this->numberArray = Array<int>(9);
}

void StructureController :: testArrayTemplate()
{
    cout << "Array Template" << endl;
    Timer arrayTimer;
    arrayTimer.startTimer();
    int test [9];
    arrayTimer.stopTimer();
    arrayTimer.displayTimerInformation();
    arrayTimer.resetTimer();
    arrayTimer.startTimer();
    numberArray = Array<int>(9);
    arrayTimer.stopTimer();
    arrayTimer.displayTimerInformation();
    
}

void StructureController :: testNodeTypes()
{
    cout << "Here is a string node" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is an uninitialized int node" << endl;
    cout << numberNode.getNodeData() << endl;
}

void StructureController :: testIntArray()
{
    cout << "Creating an IntNodeArray lol" << endl;
    IntNodeArray temp = IntNodeArray(3);
    for(int spot = 0; spot < 3; spot++)
    {
        cout << temp.getFromIndex(spot) << " is at " << spot << endl;
    }
    
    for(int spot = 0; spot < 3; spot++)
    {
        temp.setAtIndex(spot, spot);
    }
    
    for(int spot = 0; spot < temp.getSize(); spot++)
        {
            cout << temp.getFromIndex(spot) << " is at " << spot << endl;
        }
}

void StructureController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    
    if(showDestructor < 1)
    {
        Array<string> words + Array<string>(5);
        cout << "There should be messages about destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "in the last spot");
    Array<string> copiedWords = Array<string>(words);
    
    cout << "These should match:" << endl;
    cout << words.getFromIndex(0) << " should be the same as "
    << copiedWords.getFromIndex(0) << endl;
    
    copiedWords.setAtIndex(3, "Changed the contents of the copied array");
}

void StructureController :: testListIntro()
{
    List<int> sample;
    sample.addFront(2);
    sample.addEnd(3);
    sample.addFront(1);
    cout << "This should, but probably won't go 1, 2, 3" << endl;
    
    for(int index = 0 )
}

void StructureController :: start()
{
    cout << "Going to test in the IntNodeArray" << endl;
    testIntArray();
    cout << "Finished IntArrayNodeTesting" << endl;
}
