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

void solve(){
    int n; cin >> n;

    vector<int> v(n);

    forp(i, 0, n){
        cin >> v[i];
    }

    forp(i, 0, n){
        int a; cin >> a;
        forp(j, 0, a){
            char z; cin >> z;

            if(z == 'D') v[i]++;
            else v[i]--;
        }
    }

    forp(i,0 , n){
        cout << ((v[i]%10 >= 0)?v[i]%10:10+(v[i]%10)) << ' ';
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

   int n; cin >> n; while(n--) solve();

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