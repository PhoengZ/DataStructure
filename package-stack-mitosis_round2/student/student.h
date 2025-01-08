#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
   /*int size = ((b-a)+1);
   T * mtest = new T[mSize+size]();
   for (int i =0;i<mSize-b-1;i++){
    mtest[i] = mData[i];
   }
   int ind = mSize-b-1;
   for (int i = mSize-b-1;i<mSize-a;i++){
    mtest[ind] = mData[i];
    mtest[ind+1] = mtest[ind];
    ind+=2;
   }
   for (int i =mSize-a;i<mSize;i++){
    mtest[ind] = mData[i];
    ind++;
   }
   delete [] mData;
   mData = mtest;
   mCap = mSize+size;
   mSize = mCap;*/
   CP::stack <T> st;
    int cout = 0;
    while (cout <=b){
        if (cout >=a && cout<=b)st.push(top());
        cout++;
        st.push(top());
        pop();
    }
    while (!st.empty()){
        push(st.top());
        st.pop();
    }
   
}

#endif