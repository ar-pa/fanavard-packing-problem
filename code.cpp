// In the name of Allah.
// We're nothing and you're everything.
// Ya Ali!

#include <iostream>

using namespace std;

bool check(int n, int m, int k, int a[], int j) {
    int cur = 0;
    for (; j < n; j++) {
        if (cur < a[j])
            cur = k, m--;
        cur -= a[j];
    }
    return m >= 0;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int lo = -1, hi = n;
    while (hi - lo > 1) {
        int mid = (lo + hi) / 2;
        if (check(n, m, k, a, mid)) {
            hi = mid;
        }
        else {
            lo = mid;
        }
    }
    cout << n - hi << '\n';
}
