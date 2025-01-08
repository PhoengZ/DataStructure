#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
  int be = a-v.begin();
  int end = b-v.begin()-1;
  int ind = 0;
  for (int i = be;i<= be + (end-be)/2;i++){
    int temp = v[i];
    v[i] = v[end-ind];
    v[end-ind] = temp;
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
  reverse(v,v.begin()+a,v.begin()+b+1);

  //display content of the vector
  for (auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}
