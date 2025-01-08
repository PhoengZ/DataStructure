#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  for (int i = pos.size()-1 ;i>=0;i--){
    erase(begin()+pos[i]);
  }
}

#endif
