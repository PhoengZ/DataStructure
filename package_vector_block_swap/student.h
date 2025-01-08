#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  int fis_be,las_be,fis_end,las_end;
  if (a>=b){
    las_be = a-begin();
    fis_be = b-begin();
  }else{
    las_be = b-begin();
    fis_be = a-begin();
  }
  fis_end = (fis_be)+m-1;
  las_end = (las_be)+m-1;
  if (fis_end >=las_be || m<=0 || fis_end >=mSize || las_end >=mSize || a<begin() || b<begin())return false;
  for (int i = fis_be;i<fis_end+1;i++){
    std::swap(mData[i],mData[las_be]);
    las_be++;
  }
  return true;
}

#endif
