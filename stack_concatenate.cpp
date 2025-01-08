#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void stack_concat(stack<int> &s1, stack<int> &s2) {
    stack <int> st;
    stack <int> f_2;
    stack <int> f_1;
    while (!s2.empty()){
        int top = s2.top();
        s2.pop();
        f_2.push(top);
    }
    while (!f_2.empty()){
        int top = f_2.top();
        f_2.pop();
        st.push(top);
    }
    while (!s1.empty()){
        int top = s1.top();
        s1.pop();
        f_1.push(top);
    }
    while (!f_1.empty()){
        int top = f_1.top();
        f_1.pop();
        st.push(top);
    }
    s1 =st;
}
int main() {
    //read input
    int n,m;
    int c;
    cin >> n >> m;
    stack<int> s1,s2;
    for (int i = 0;i < n;i++) {
        cin >> c;
        s1.push(c);
    }
    for (int i = 0;i < m;i++) {
        cin >> c;
        s2.push(c);
    }
    //call the function
    stack_concat(s1,s2);
    //display content of the stack
    cout << "S1 has " << s1.size() << endl;
    while (!s1.empty()) {
        cout << s1.top() << " ";
        s1.pop();
     }
    cout << endl;
    //display content of the stack
    cout << "S2 has " << s2.size() << endl;
    while (!s2.empty()) {
        cout << s2.top() << " ";
        s2.pop();
    }
}