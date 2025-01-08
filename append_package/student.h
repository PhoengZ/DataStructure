#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        /*stack <T>st;
        while (!empty()){
            st.push(top());
            pop();
        }
        while (!s.empty()){
            st.push(s.top());
            s.pop();
        }
        while(!st.empty()){
            push(st.top());
            st.pop();
        }*/
       for (int i =0;i<mSize;i++){
        s.push(mData[i]);
       }
       *this  = s;
    }
    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        /*stack <T>st;
        while (!empty()){
            st.push(top());
            pop();
        }
        while (!q.empty()){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            push(st.top());
            st.pop();
        }*/
       CP::stack <T> st;
       CP::stack <T> sp;
       while (!q.empty()){
        st.push(q.front());
        q.pop();
       }
       while (!st.empty()){
        sp.push(st.top());
        st.pop();
       }
       for (int i =0;i<mSize;i++){
        sp.push(mData[i]);
       }
       *this = sp;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while (!s.empty()){
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while (!q.empty()){
            push(q.front());
            q.pop();
        }
    }
}
