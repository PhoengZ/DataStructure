#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "list.h"

template <typename T>
void CP::list<T>::block_swap(iterator a1, iterator a2, iterator b1, iterator b2) {
	// write your code here
	if ((a1 == a2 && a1 == b1) || (a1 ==a2 && b1 == b2))return;
	iterator bef_lef = iterator(a1.ptr->prev);
	iterator bef_right = iterator(b1.ptr->prev);
	iterator end_lef = iterator(a2.ptr->prev);
	iterator end_right = iterator(b2.ptr->prev);
	if (a1 == b2){
		bef_right.ptr->next = a1.ptr;
		a1.ptr->prev = bef_right.ptr;
		end_lef.ptr->next = b1.ptr;
		b1.ptr->prev = end_lef.ptr;
		
		end_right.ptr->next = a2.ptr;
		a2.ptr->prev = end_right.ptr;
	}else if (a2 == b1){
		bef_lef.ptr->next = b1.ptr;
		b1.ptr->prev = bef_lef.ptr;
		end_right.ptr->next = a1.ptr;
		a1.ptr->prev = end_right.ptr;
		
		end_lef.ptr->next = b2.ptr;
		b2.ptr->prev = end_lef.ptr;
	}else if (a1 == a2 && b1 != b2){
		bef_lef.ptr->next = b1.ptr;
		b1.ptr->prev = bef_lef.ptr;
		end_right.ptr->next = a2.ptr;
		a2.ptr->prev = end_right.ptr;

		bef_right.ptr->next = b2.ptr;
		b2.ptr->prev = bef_right.ptr;
	}else if (b1 == b2 && a1 != a2){
		bef_right.ptr->next = a1.ptr;
		a1.ptr->prev = bef_right.ptr;
		end_lef.ptr->next = b2.ptr;
		b2.ptr->prev = end_lef.ptr;

		bef_lef.ptr->next = a2.ptr;
		a2.ptr->prev = bef_lef.ptr;
	}else{
		bef_lef.ptr->next = b1.ptr;
		b1.ptr->prev = bef_lef.ptr;
		end_right.ptr->next = a2.ptr;
		a2.ptr->prev = end_right.ptr;

		bef_right.ptr->next = a1.ptr;
		a1.ptr->prev = bef_right.ptr;
		end_lef.ptr->next = b2.ptr;
		b2.ptr->prev = end_lef.ptr;

	}
}

#endif
