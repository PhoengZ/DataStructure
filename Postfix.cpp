#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char c:s){
        if (c != ')'){
            st.push(c);
        }else{
            if (st.empty()){return false;}
            else if (c == ')'){ 
                if (st.top() != '('){
                    return false;
                }
                st.pop();
            }
        }
    }
    if (st.empty()){
        return true;
    }
    return false;
}
//round(result, 2)
int main(){
    string x;
    stack <char> st;
    string par = "";
    cin>>x;
    for (int i =0;i<x.length();i++){
        if (x[i]  == '(' || x[i] == ')')par+=x[i];
        else if (x[i] == '-'){
            i++;
            if (x[i] == '(')
            string c;
            while (i < x.length()&&(x[i] != '-' && x[i]!='+' && x[i]!='*' && x[i] != '/'&&x[i] != '(' && x[i] != ')')){c+=x[i];i++;}
            float e = stof(c);
            i--;
            e*=(-1);
            float a;
            if (st.empty()) a= 0;
            else{
                a = st.top();
                st.pop();
            }
            float result = a+e;
            st.push(result);
        }
    }
    if (isValid(par)){
        
    }
    else cout << "";
    return 0;
}
