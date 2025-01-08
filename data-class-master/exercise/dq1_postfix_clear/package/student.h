#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>
using namespace std;

int eval_postfix(vector<pair<int,int> > v){
    stack <int> st;
    for (pair <int,int> x:v){
        if (x.first == 0){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int total;
            if (x.second == 0){
                total = (a+b);
            }else if (x.second == 1){
                total = (a-b);
            }else if (x.second == 2){
                total = (a*b);
            }else{
                total = (a%b);
            }
            st.push(total);
        }else{
            st.push(x.second);
        }
    }return st.top();
}

#endif
