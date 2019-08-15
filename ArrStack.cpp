//
//  ArrStack.cpp
//  Lab5arr
//
//  Created by Giovanni Masella on 11/22/16.
//  Copyright © 2016 Giovanni Masella. All rights reserved.
//


#include <iostream>
#include <stdio.h>
#include "ArrStack.h"

using namespace std;

int AStack::push(int x, bool &success){
    
   //cout << "pushing " << x << endl;
    success = top < MAX - 1;
    if (success){
        top++;
        data[top] = x;
    }
   
}

int AStack::pop(int &x, bool &success){
    
    //cout << "popping : " << top -> data << "\n";
    success = top > -1;
    if (success){
        x = data[top];
        top--;
    }
}

int AStack::getTop(int &x, bool &success){
    
    success = top > -1;
    if (success){
        x = data[top];
    }
}