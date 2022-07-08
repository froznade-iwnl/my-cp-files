    #include <bits/stdc++.h>
    using namespace std;

    #define mp make_pair
    #define pb push_back
    #define int long long
    #define pii pair<int, int>
    #define fi first
    #define se second
    #define all(v) v.begin(), v.end()

    void solve(){
        int n, x, max(0), min(0); cin >> n >> x;

        vector<int> v(n), y(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
            y[i] = v[i]%x;
            max += (y[i] == 0) ? v[i]/x : v[i]/x + 1;
            min += v[i];
        }

    
        
        
        
        cout << ((min%x == 0) ? min/x : min/x + 1) << ' ' << max << endl;

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