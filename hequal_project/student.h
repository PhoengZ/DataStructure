#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  if (mSize != other.size())return false;
  CP::priority_queue<T,Comp> p_1 = *this;
  CP::priority_queue<T,Comp> p_2 = other;
  while (!p_1.empty()){
    if (p_1.top()!= p_2.top())return false;
    p_1.pop();
    p_2.pop();
  }return true; // you can change this line
}

#endif
