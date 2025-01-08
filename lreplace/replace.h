void replace(const T& x, list<T>& y) {
  iterator start = begin();
  while (start!= end()){
    if (*start == x){
      iterator tmp = iterator(start.ptr);
      start++;
      start.ptr->prev = tmp.ptr->prev;
      tmp.ptr->prev->next = start.ptr;
      delete tmp.ptr;
      mSize--;
      iterator start_y = y.begin();
      while (start_y != y.end()){
        node * t = new node (*start_y,start.ptr->prev,start.ptr);
        start.ptr->prev->next = t;
        start.ptr->prev = t;
        mSize++;
        start_y++;
      } 
    }else start++;
  }
}
