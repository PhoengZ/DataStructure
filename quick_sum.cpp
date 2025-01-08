#include <iostream>

using namespace  std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n][m];
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            int x;
            cin>>x;
            arr[i][j] = x;
        }
    }
    int p[n][m];
    p[0][0] = arr[0][0];  
    for (int j = 1;j<m;j++){
        p[0][j] = p[0][j-1]+arr[0][j];
    }
    for (int i  =1;i<n;i++){
        p[i][0] = p[i-1][0] + arr[i][0];
        for (int j  = 1;j<m;j++){
            p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + arr[i][j];
        }
    }
    for (int i = 0;i<k;i++){
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        int total = p[r2][c2] - p[r1-1][c2] - p[r2][c1-1]+p[r1-1][c1-1];
        cout << total << endl;
    }
    return 0;
}