#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
  //write your code here
  return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
    return v[v.size()-1];
  //write your code here
}

template <typename T>
void CP::stack<T>::push(const T& element) {

    v.push_back(element);
  //write your code here
}

template <typename T>
void CP::stack<T>::pop() {
  v.pop_back();
  //write your code here
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
    if (depth == 0){v.push_back(element);}
    else{
        if (depth > v.size()){depth = v.size();}
        v.insert(v.end()-depth,element);
    }
  //write your code here

}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
    for (T e:w){
        v.push(e);
    }
  //write your code here
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
    while (v.size() != 0 &&v.back()!=e){
        v.pop_back();
    }
  //write your code here
}

#endif

