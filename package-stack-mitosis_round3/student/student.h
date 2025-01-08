#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    int ind = 0;
    CP::stack <T> cp;
    while (ind<=b){
        cp.push(top());
        pop();
        ind++;
    }
    while (!cp.empty()){
        if(a<=b){
            push(cp.top());
            a++;
        }
        push(cp.top());
        cp.pop();
    }
}

#endif