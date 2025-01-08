#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  if (m <= 0)return false;
  int left,right;
  if (a < b){
    left = a-begin();
    right = b-begin();
  }
  else{
    left = b-begin();
    right = a-begin();
  }
  int r_left = left+m;
  int r_right = right+m;
  if (left <0 || right <0)return false;
  if (r_left >right)return false;
  if (r_right > mSize)return false;
  for (int i = left;i<left+m;i++){
    T temp = mData[i];
    mData[i] = mData[right];
    mData[right] = temp;
    right++;
  }
  return true;
}

#endif
