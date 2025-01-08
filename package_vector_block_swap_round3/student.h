#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  if (m<=0)return false;
  int l_begin,r_begin;
  if (a>b){
    l_begin = b-begin();
    r_begin = a-begin();
  }else{
    l_begin = a-begin();
    r_begin = b-begin();
  }
  if (l_begin < 0||r_begin < 0)return false;
  int l_end = l_begin+m;
  int r_end = r_begin+m;
  if(l_end > r_begin)return false;
  if (r_end > mSize)return false;
  for (int i =0;i<m;i++){
    T temp = mData[l_begin+i];
    mData[l_begin+i] = mData[r_begin+i];
    mData[r_begin+i] = temp;
  }
  return true;

}

#endif
