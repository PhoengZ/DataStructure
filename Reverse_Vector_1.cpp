#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
    int bet = b-a;
    if (bet %2 == 1){
        bet++;
    }
    bet/=2;
    int ind = 0;
    for (int i =a;i<(a+bet);i++){
        int temp = v[i];
        v[i] = v[b-ind];
        v[b-ind] = temp;
        ind++;
    }
}
int main() {
    //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    //call function
    reverse(v,a,b);
    //display content of the vector
    for (auto &x : v)
        cout << x << " ";
    cout << endl;
}