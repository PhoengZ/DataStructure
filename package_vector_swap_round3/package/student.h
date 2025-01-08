#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
 int temp_siz = mSize;
 int temp_cap = mCap;
 T * mtest = mData;
 mSize = other.mSize;
 mCap = other.mCap;
 mData = other.mData;
 other.mSize = temp_siz;
 other.mCap = temp_cap;
 other.mData = mtest;
}

#endif
