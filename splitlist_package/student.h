void splitList(list<T>& list1, list<T>& list2) {
    size_t first = mSize%2 == 0 ? mSize/2:(mSize/2)+1;
    size_t second = mSize-first;
    auto start  = begin();
    for (int i =0 ;i<first;i++){
        auto it = iterator(start.ptr);
        start++;
        it.ptr->prev->next = it.ptr->next;
        it.ptr->next->prev = it.ptr->prev;
        mSize--;
        list1.mHeader->prev->next = it.ptr;
        it.ptr->prev = list1.mHeader->prev;
        list1.mHeader->prev = it.ptr;
        it.ptr->next = list1.mHeader;
        list1.mSize++;
    }
    for (int i =0 ;i<second;i++){
        auto it = iterator(start.ptr);
        start++;
        it.ptr->prev->next = it.ptr->next;
        it.ptr->next->prev = it.ptr->prev;
        mSize--;
        list2.mHeader->prev->next = it.ptr;
        it.ptr->prev = list2.mHeader->prev;
        list2.mHeader->prev = it.ptr;
        it.ptr->next = list2.mHeader;
        list2.mSize++;
    }
    mSize = 0;
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
}
