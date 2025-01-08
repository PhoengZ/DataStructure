#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  CP::stack <T> cp;
  while (pos!=0){
    cp.push(top());
    pop();
    pos--;
  }
  push(value);
  while(!cp.empty()){
    push(cp.top());
    cp.pop();
  }
}

#endif
