#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define int long long
#define pii pair<int, int>
#define fi first
#define se second
#define forp(i, x, y) for(int i = x; i < y; i++)
#define forn(i, x, y) for(int i = x; i >= y; i--)
#define all(v) v.begin(), v.end()

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, temp(0); cin >> n >> m;
    vector<int> v(n), r(n, 0);

    forp(i, 0, n){
        cin >> v[i];
        if(i != 0){
            if(v[i]+(m-v[i-1]) >= m) r[i]++;
            v[i] -= m-v[i-1];
            // cout << i << 'A';
        }
        while(v[i] >= m){
            temp = m-v[i];
            v[i] -= (v[i]%m == 0)?m:v[i]%m;
            r[i]++;
            // cout << i << 'b';
        }
    }

    forp(i, 0, n){
        cout << r[i] << ' ';
    }
    cout << endl;
    


    return 0;
}

/* stuff you should look for
    * IF IT WORKS, IT WORKS
    * int overflow, array bounds
    * special cases (n=1?)
    * do smth instead of nothing and stay organized
    * WRITE STUFF DOWN
    * DON'T GET STUCK ON ONE APPROACH
*/