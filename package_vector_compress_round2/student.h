#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    if (mSize == mCap)return;
    T * mtest = new T[mSize]();
    for (int i = 0;i<mSize;i++){
        mtest[i] = mData[i];
    }
    delete [] mData;
    mData = mtest;
    mCap = mSize;
}

#endif
