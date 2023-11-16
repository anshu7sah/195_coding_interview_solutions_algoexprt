#include <bits/stdc++.h>
using namespace std;



// time=O(n) and space=O(n)

int fibonaci(int n, vector<int>& v) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        if (v[n]) {
            return v[n];
        } else {
            v[n] = fibonaci(n - 1, v) + fibonaci(n - 2, v);
            return v[n];
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    vector<int> v(100, 0); // Adjust the size accordingly
    cout << fibonaci(10, v) << endl;

    return 0;
}
