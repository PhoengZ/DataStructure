#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  while (!empty() && K!= 0){
    pop();
    K--;
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::stack <T> s;
  while (!empty() && K!= 0){
    s.push(top());
    pop();
    K--;
  }
  std::stack <T> st;
  while (!s.empty()){
    st.push(s.top());
    s.pop();
  }
  return st;
}

#endif
