#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <vector<int>> bound;
    int row,col,line;
    cin >> row;
    cin >> col;
    cin >> line;
    for (int i = 0;i<row;i++){
        vector <int> vec;
        for(int j = 0;j<col;j++){
            int x;
            cin >> x;
            vec.push_back(x);
        }
        bound.push_back(vec);
    }
    for (int i =0; i < line ; i++){
        int row_1,col_1,row_2,col_2;
        cin >> row_1;
        cin >> col_1;
        cin >> row_2;
        cin >> col_2;
        if (row_1 > row_2 || col_1 > col_2){
            cout << "INVALID" << endl;
        }else if (row_1 > row || col_1 > col){
            cout << "OUTSIDE" << endl;
        }
        else{
            if(row_1 < 1){row_1 = 1;}
            if (col_1 < 1){col_1 = 1;}
            if (row_2 > row){row_2 = row;}
            if (col_2 > col){col_2 = col;}
            int MAX = bound[row_1-1][col_1-1];
            for (int j = row_1-1;j<row_2;j++){
                for (int p = col_1-1;p < col_2;p++)
                {
                    if (bound[j][p] > MAX){MAX = bound[j][p];}
                }
            }
            cout <<MAX<< endl;
        }
    }
    return 0;
}
