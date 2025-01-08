#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
    int left = a-v.begin();
    int right = b-v.begin()-1;
    if (right < 0){right = 0;}
    int ind = 0;
    /*cout << "right = "<< right<<endl;
    cout << "left = "<< left<<endl;*/
    for (int i = left;i<= left +(right - left)/2 ; i++){
        int temp = v[right-ind];
        v[right - ind] = v[i];
        v[i] = temp;
        ind++;
    }
}
int main() {
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
    reverse(v,v.begin()+a,v.begin()+b+1);
    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}