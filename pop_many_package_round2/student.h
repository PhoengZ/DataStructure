#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <stack>

template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  if (K > mSize) K=mSize;
  for (int i =0;i<K;i++){
    pop();
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  if (K > mSize) K = mSize;
  std::stack <T> st;
  std::stack <T> s;
  for (int i = 0;i<K;i++){
    st.push(top());
    pop();
  }
  for( int i = 0;i<K;i++){
    s.push(st.top());
    st.pop();
  }
  return s;
}

#endif
