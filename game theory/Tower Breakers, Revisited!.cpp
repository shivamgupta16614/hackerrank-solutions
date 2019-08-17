
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
       long long x, sum = 0;
        for(int i = 0; i < n; i++) {
            cin>>x;

            int np = 0;
            if(x == 1){ np = 0;}
             else if(((x != 0) && !(x & (x - 1)))) {

                np = x/2;
            } else {

                while(x > 1) {
                    bool ff = false;
                    for(long j = 2; j*j <= x; j++) {
                        if(x%j == 0) {
                            np++;
                            x /= j;
                            ff = true;
                            break;
                        }
                    }
                    if(ff==false) {

                        np++;
                        break;
                    }
                }
            }
            sum ^= np;
        }
        if(sum != 0) {
            cout<<1<<endl;
        } else {
            cout<<2<<endl;
        }

    }
}
