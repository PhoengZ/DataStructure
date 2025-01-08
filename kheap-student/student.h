#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T temp = mData[idx];
    while (idx > 0){
        size_t p = (idx-1)/4;
        if (mLess(temp,mData[p]))break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = temp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T temp = mData[idx];
    while (idx < mSize){
        if (4*idx + 1 > mSize)break;
        int ind = 4*idx+1;
        if (4*idx+2 < mSize&&mLess(mData[ind],mData[4*idx+2]))ind = 4*idx+2;
        if (4*idx+3 < mSize&&mLess(mData[ind],mData[4*idx+3]))ind = 4*idx+3;
        if (4*idx+4 < mSize&&mLess(mData[ind],mData[4*idx+4]))ind = 4*idx+4;
        if (mLess(mData[ind],temp))break;
        mData[idx] = mData[ind];
        idx = ind;
    }
    mData[idx] = temp;
}

#endif

