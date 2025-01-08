void shift(int k) {
	// TODO: Add your code here
	if (k == 0 || mSize == 0 || mSize == 1)return;
	node * start = mHeader;
	if (k>0){
		k = k%mSize;
		if (k == 0)return;
		while (k!=-1){
			start = start->next;
			k--;
		}
	}else{
		k = abs(k)%mSize;
		if (k == 0)return;
		while (k!=0){
			start = start->prev;
			k--;
		}
	}
	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;
	start->prev->next = mHeader;
	mHeader->prev = start->prev;
	mHeader->next = start;
	start->prev = mHeader;
}
