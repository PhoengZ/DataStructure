#include <iostream>
#include <vector>
using namespace std;
int relation(long long k, long long a, long long b) {
    long long MAX = a<b ? a:b;
    long long MIN = a<b ? b:a;
    if (MAX == (MIN-1)/k)return 1;
    int h_MAX = 0;
    int h_MIN = 0;
    long long start = MIN;
    
    while (start > MAX){
        start = (start-1)/k;
    }
    if (start != MIN &&start == MAX)return 2;
    start = 1;
    long long of = 1;
    while (start < MIN){
        of*=k;
        start+=of;
        long long left = start - of;
        if (MAX >= left && MAX < start )h_MAX++;
        else if (MAX < start)h_MAX++;
        if (MIN >= left && MIN < start )h_MIN++;
        else if (MIN < start)h_MIN++;
    }
    if (h_MAX!= h_MIN)return 3;
    return 4;
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    long long S,a,b;
    cin >> n;
    while (n--) {
        cin >> S >> a >> b;
        cout << relation(S,a,b) << " ";
    }
    cout << endl;
}