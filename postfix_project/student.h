#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
    stack <int> st;
    if (v.size() == 0) return 0;
    for (int i = 0;i<v.size();i++){
        if (v[i].first == 0){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int total;
            if (v[i].second == 0){total = b+a;}
            else if(v[i].second == 1){total = b-a;}
            else if (v[i].second == 2){total = a*b;}
            else{total = b/a;}
            st.push(total);
        }else{
            st.push(v[i].second);
        }
    }
    return st.top();
}



#endif
