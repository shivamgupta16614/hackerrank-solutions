#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxn = 1e5 + 100, mod = 1e9 + 7;

ll d[maxn][2];

long countArray(int n, int k, int x) {
    d[0][0] = 1;
    d[0][1] = 0;
    for (int i = 1; i < n; i++){
        d[i][0] = (d[i - 1][1] * (k - 1)) % mod;
        d[i][1] = (d[i - 1][1] * (k - 2) + d[i - 1][0]) % mod;
    }
    if (x == 1)
        return d[n - 1][0];
    return d[n - 1][1];
}

int main() {
    int n;
    int k;
    int x;
    cin >> n >> k >> x;
    long answer = countArray(n, k, x);
    cout << answer << endl;
    return 0;
}
