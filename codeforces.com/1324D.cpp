#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long total = 0;  // Inicializamos total a 0
    #ifndef ONLINE_JUDGE
        freopen("data.in", "r", stdin);
        freopen("data.out", "w", stdout);
    #endif
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    int *c = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        c[i] = b[i] - a[i];
    }

    sort(c, c + n);

    for (int i = 0; i < n; ++i) {
        int *p = lower_bound(c + i + 1, c + n, -c[i]);
        total += (p - (c + i + 1));
    }

    cout << total << endl;

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}
