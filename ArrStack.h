//
//  ArrStack.h
//  Lab5arr
//
//  Created by Giovanni Masella on 11/22/16.
//  Copyright © 2016 Giovanni Masella. All rights reserved.
//

#ifndef ArrStack_h
#define ArrStack_h
const int MAX = 100;


class AStack{
public:
    int push(int x, bool &success);
    int pop(int &x, bool &success);
    int getTop(int &x, bool &success);
    int op1,op2;
    
private:
    int data[MAX];
    int top;
};

#endif /* ArrStack_h */
