#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0);

    int m;
    cin >> m; 

    for (int i = 0; i < m; i++) {
        int n, k;
        cin >> n >> k;  

        vector<int> v(n);
        cin >> v[0];  
        bool check = true; 
        for (int j = 1; j < n; j++) {
            int t;
            cin >> t; 
            v[j] = t;

            int parent = v[(j - 1) / k]; 

            if (t > parent) { 
                check = false;
                break;  
            }
        }


        if (check && v.size() == n) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }

    return 0;
}
