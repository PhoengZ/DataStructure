#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::pop() {
	if (!stack_a.empty())stack_a.pop();
	else{
		while (!stack_b.empty()){
			stack_a.push(stack_b.top());
			stack_b.pop();
		}
		stack_a.pop();
	}
	
}

template <typename T>
const T& CP::stack<T>::top() {
	
	if (!stack_a.empty())return stack_a.top();
	while (!stack_b.empty()){
		stack_a.push(stack_b.top());
		stack_b.pop();
	}
	
	return stack_a.top();
}

template <typename T>
const T& CP::stack<T>::bottom() {
	if (!stack_b.empty())return stack_b.top();
	while (!stack_a.empty()){
		stack_b.push(stack_a.top());
		stack_a.pop();
	}
	return stack_b.top();
}

template <typename T>
void CP::stack<T>::push_bottom(const T& element) {
	stack_b.push(element);
}

template <typename T>
void CP::stack<T>::pop_bottom() {
	if(!stack_b.empty())stack_b.pop();
	else{
		while (!stack_a.empty()){
			stack_b.push(stack_a.top());
			stack_a.pop();
		}
		stack_b.pop();
	}
	
	
}
#endif