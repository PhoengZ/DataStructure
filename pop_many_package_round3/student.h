#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  if (K > mSize)K = mSize;
  while (K!= 0){
    pop();
    K--;
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  if (K > mSize) K = mSize;
  std::stack <T> st;
  std::stack <T> s;
  while (K!=0){
    st.push(top());
    pop();
    K--;
  }
  while (!st.empty()){
    s.push(st.top());
    st.pop();
  }
  return s;
}

#endif
