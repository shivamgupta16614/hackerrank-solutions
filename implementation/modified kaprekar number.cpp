#include "stdafx.h"
#include <iostream>
using namespace std;

typedef long long ll;

bool isKarprekar(ll n) {
	ll sq = pow(n, 2), temp = sq, d = 0;
	while (temp) {
		temp /= 10;
		d++;
	}
	d = ceil((float)d / 2);
	ll left = sq / pow(10, d);

	ll right = sq - left * pow(10, d);
	return left + right == n;

}

int main()
{
	ll p, q, count = 0;
	cin >> p >> q;
	for (ll n = p; n <= q; n++) {
		if (isKarprekar(n)) {
			count++;
			cout << n << " ";
		}
	}
	if (!count) cout << "INVALID RANGE";

    return 0;
}
