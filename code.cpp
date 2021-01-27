// In the name of Allah.
// We're nothing and you're everything.
// Ya Ali!

#include <iostream>

using namespace std;

bool check(int n, int m, int k, int a[], int j) {
    int current = 0;
    for (; j < n; j++) {
        if (current < a[j])
            current = k, m--;
        current -= a[j];
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
    int low = -1, high = n;
    while (high - low > 1) {
        int mid = (low + high) / 2;
        if (check(n, m, k, a, mid)) {
            high = mid;
        }
        else {
            low = mid;
        }
    }
    cout << n - high << '\n';
}
