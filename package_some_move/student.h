#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  /*std::vector <T> col(value.size());
  for (int i = 0;i<value.size();i++){
    col[i] = this->operator[](index); 
    this->operator[](index) = value[i];
    index++;
  }
  int ind = 0;
  while (index !=  mSize){
    ind = ind%col.size();
    T temp = this->operator[](index);
    this->operator[](index) = col[ind];
    col[ind] = temp;
    index++;
    ind++;
  }
  int old = ind;
  while (ind != (col.size()+old)){
    int x = ind%col.size();
    this->push_back(col[x]);
    ind++;
  }*/
  if (value.empty())return;
  int i = std::upper_bound(aux.begin(),aux.end(),index) - aux.begin(); //หาตำแหน่งที่จะในmdata ที่ต้องใช้insert 
  int left = index;
  std::stack <T> st; //ใช้เก็บค่าใน mdata ในindexที่ i หลังตำแหน่งinsert เพื่อนำไปใส่ ใน value
  if (i>0)left-= aux[i-1];
  int siz = value.size();
  for (int ind = mData[i].size()-1;ind>=left;ind--){
    st.push(mData[i][ind]);//เอาค่าหลังindex insertในmdata ที่ i ใส่ใน stack
    mData[i].pop_back();//ลบตัวหลังใน mdata ที่ i
  }
  while(!st.empty()){
    value.push_back(st.top());// คืนค่าใส่ value 
    st.pop();
  }
  if (i == mData.size())mData.insert(mData.begin()+i,value);
  else mData.insert(mData.begin()+i+1,value);
  //นำvalue ที่เรียงค่า insertหลัง i ของ mdata
  aux.resize(mData.size());
  for (int ind = 0;ind<aux.size();ind++){//แก้ไข aux
    aux[ind] = mData[ind].size();
    if (ind != 0){
      aux[ind] +=aux[ind-1];
    }
  }
  //aux.push_back(mData.back().size()+aux.back());//push_backขนาดสุดท้ายของ aux สุดท้าย
  mCap = mSize = aux.back();
}

#endif