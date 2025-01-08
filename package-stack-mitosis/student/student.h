#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    CP::stack <T> temp;
    for (int i = 0;i<a;i++){
        temp.push(top());
        pop();
    }
    for (int i = a;i<=b;i++){
        temp.push(top());
        temp.push(top());
        pop();
    }
    while (!temp.empty()){
        push(temp.top());
        temp.pop();
    }
}

#endif