#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  if (m>s2.size()) m = s2.size();
  CP::stack <T> st;
  for (int i = 0;i<k;i++){
    st.push(top());
    pop();
  }
  while (m!=0){
    st.push(s2.top());
    s2.pop();
    m--;
  }
  while (!st.empty()){
    push(st.top());
    st.pop();
  }
}
#endif
