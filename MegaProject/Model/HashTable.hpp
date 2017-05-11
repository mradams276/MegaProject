//
//  HashTable.hpp
//  MegaProject
//
//  Created by Adams, Kyle on 5/3/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

//123//
template <class Type>
bool HashTable<Type :: remove(Type data)
{
    bool removed = false;
    //for (long index = 0; index < capacity; index++)
    // {
    //  if(hashTableStorage[index] != nullptr && hashTableStorage[index]->getData() == data)
    // {
    //     hashTableStorage[index] = nullptr;
    //      removed = true;
    //    }
    // }
    HashNode<Type> * find = new HashNode<Type>(data);
    long hashIndex = findPosition(find);
    if (hashTableStorage[hashIndex] != nullptr)
    {
        hashTableStorage[hashIndex] == nullptr;
        removed = true;
    }
    
    return removed;
}

template <class Type>
void HashTable<Type> :: resize()
{
    long updatedCapacity = nextPrime();
    HashNode<Type> * * tempStorage = new HashNode<Type> * [updatedCapacity];
    long oldCapacity = this->capacity;
    this->capacity = updatedSize;
    
    for (long index = 0; index < oldCapacity; index++ )
    {
        if(hashTableStorage[index] != nullptr)
        {
            HashNode<Type> * temp = hashTableStorage[index];
            
            long position = finsPosition(temp);
            if(tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollision(temp, position);
                while (tempStorage[updatedPosition]
                       {
                           updatedPosition = handleCollision(temp, updatedPosition);
                       }
                       tempStorage[updatedPosition] = temp;
                       }
                       }
                       }
                       hashTableStorage = tempStorage;
                       }
                       
                       template <class Type>
                       void HashTable<Type> :: add(Type data)
                       {
                           this->size++;
                           if(((this->size * 1.000) / this-> capacity) > this->efficiencyPercentage)
                           {
                               resize();
                           }
                       }
                    
#endif /* HashTable_h */
