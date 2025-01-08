#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> // Needed for lower_bound

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    vector<int> vout;
    queue<int> q_1;
    queue<int> q_2;
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        int task;
        cin >> task;
        if (task == 1){
            int store, money;
            cin >> store >> money;
            if (store == 1) q_1.push(money);
            else q_2.push(money);
        }else{
            if (q_2.empty()) {
                total += q_1.front();
                q_1.pop();
            } else if (q_1.empty()) {
                total += q_2.front();
                q_2.pop();
            } else {
                if (q_1.front() <= q_2.front()) {
                    total += q_1.front();
                    q_1.pop();
                } else {
                    total += q_2.front();
                    q_2.pop();
                }
            }
            vout.push_back(total);
        }
    }
    for (int i = 0; i < m; i++) {
        auto low = lower_bound(vout.begin(), vout.end(), v[i]);
        if (low == vout.end()) {
            cout << "-1 ";
        } else {
            int index = low - vout.begin()+1;
            cout << index << " ";
        }
    }

    return 0;
}
