#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>> n>>m;
    int a[n][m];
    for (int i = 0;i<n;i++){
        for (int j = 0;j<m;j++){
            int x;
            cin>>x;
            a[i][j] = x;
        }
    }
    int score = a[0][0];
    int index_row = 0;
    int index_col = 0;
    while (index_row != n-1 || index_col != m-1){
        int r,b,r_b;
        if (index_col == m-1){r = 0;}
        else{
            r = a[index_row][index_col+1];
        }
        if (index_row == n-1){b = 0;}
        else{
            b = a[index_row+1][index_col];
        }
        if (index_row == n-1  || index_col == m-1){r_b = 0;}
        else{
            r_b= 2*a[index_row+1][index_col+1];
        }
        if (r_b == max(max(r,b),max(r,r_b))){
            index_col++;
            index_row++;
            score+= r_b;
        }else if(r == max(max(r,b),max(r,r_b))){
            index_col++;
            score+=r;
        }else{
            index_row++;
            score+=b;
        }
    }
    cout << score;
    return 0;
}