#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,d;
    cin >> n >> d;

    vector<int> da(n);
    for (auto& e : da)
        cin >> e;

    vector<size_t> freq(201);
    size_t i = 0;
    for (; i < d; ++i)
        ++freq[da[i]];
    for (size_t j = 1; j < freq.size(); ++j)
        freq[j] += freq[j-1];

    size_t cnt = 0;
    double tmp;

    size_t j;
    while(i < n) {
        for (j = 0; j <freq.size() && freq[j] < d/2; ++j);


        if (freq[j] == d/2) {
            tmp = j+1;
            if (d % 2 == 0) {
                tmp += j;
                tmp /= 2;
            }
        } else {
            tmp = j;
            if (d % 2 == 0) {
                tmp += freq[j-1] + 1 == freq[j] ? j-1 : j;
                tmp /= 2;
            }
        }
        tmp *= 2;

        if( da[i] >= tmp)cnt++;

        for (j = da[i-d]; j < freq.size(); ++j)
            --freq[j];
        for (j = da[i]; j < freq.size(); ++j)
            ++freq[j];

        ++i;
    }

    cout << cnt <<endl;
}
