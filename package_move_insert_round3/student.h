#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  CP::stack<T> cp;
  if (m>s2.size())m = s2.size();
  while (k!=0){
    cp.push(top());
    pop();
    k--;
  }
  while (m!=0){
    cp.push(s2.top());
    s2.pop();
    m--;
  }
  while(!cp.empty()){
    push(cp.top());
    cp.pop();
  }
}
#endif
