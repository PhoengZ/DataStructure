#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    int space_other = other.mCap-other.size();
    int space_me = mCap-mSize;
    if (space_me<space_other)return -1;
    if (space_me == space_other)return 0;
    return 1;
}

#endif
