#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    int re_cap = mCap-mSize;
    int other_cap = other.mCap-other.size();
    if (re_cap > other_cap)return 1;
    else if (other_cap > re_cap)return -1;
    return 0;
}

#endif
