#include <iostream>
#include <vector>
using namespace std;

vector <int> push(vector <int> &v,int first,int second);
void v_to_v(vector <int> & v1,vector <int> & v2,int index);

void vector_swap(vector<int> &v1,vector<int> &v2,
    int start1, int end1,
    int start2, int end2) {
        vector <int> temp_1;
        vector <int> temp_2;
        int first = start1;
        int second = end1;
        temp_1 = push(v1,first,second);
        first = start2;
        second = end2;
        temp_2 = push(v2,first,second);
        v_to_v(v1,temp_2,start1);
        v_to_v(v2,temp_1,start2);
}
vector <int> push(vector <int> &v,int first,int second){
    vector <int> temp_1;
    while (first < second){
        temp_1.push_back(v[first]);
        v.erase(v.begin()+first);
        second--;
    }
    return temp_1;
}
void v_to_v(vector <int> & v1,vector <int> & v2,int index){
    for (int i = 0;i<v2.size();i++){
        v1.insert(v1.begin()+index+i,v2[i]);
    }
}
int main() {
    //read input
    int n,c;
    vector<int>v1,v2;
    cin >> n; //number of v1
    for (int i = 0;i < n;i++) {
        cin >> c;
        v1.push_back(c);
    }
    cin >> n; //number of v2
    for (int i = 0;i < n;i++) {
        cin >> c;
        v2.push_back(c);
    }
    int s1,e1,s2,e2; //position
    cin >> s1 >> e1 >> s2 >> e2;
    //call the function
    vector_swap(v1,v2,s1,e1,s2,e2);
    //display content of the stack
    cout << "v1 has " << v1.size() << endl;
    for (auto &x : v1) { cout << x << " "; }
    cout << endl;
    //display content of the stack
    cout << "v2 has " << v2.size() << endl;
    for (auto &x : v2) { cout << x << " "; }
    cout << endl;
}