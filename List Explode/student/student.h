
#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "list.h"
#include "vector.h"

template <typename T>
CP::vector<CP::list<T>> CP::list<T>::explode(){
    /*
        “Great results, can be achieved with small forces.”
        ― Sun Tzu, The Art of War 

    */
    size_t size = mSize;
    auto it = begin();
    CP::vector<CP::list<T>> vp(size);
    for (int i =0;i<size;i++){
        auto temp = iterator(it.ptr);
        it++;
        vp[i].mHeader->next = temp.ptr;
        vp[i].mHeader->prev = temp.ptr;
        temp.ptr->next = vp[i].mHeader;
        temp.ptr->prev = vp[i].mHeader; 
        vp[i].mSize++;
        mSize--;
    }
    mSize = 0;
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    return vp;
}

#endif
