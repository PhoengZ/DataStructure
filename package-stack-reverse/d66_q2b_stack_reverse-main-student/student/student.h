#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	if (first >= last || first > mSize)return;
	if (last >= mSize)last = mSize-1;
	int left = mSize-last-1;
	int right = mSize-first-1;
	int ind =0;
	for (int i =left;i<=left + (right-left)/2;i++){
		T temp = mData[i];
		mData[i] = mData[right-ind];
		mData[right-ind] = temp;
		ind++;
	}

}

#endif
