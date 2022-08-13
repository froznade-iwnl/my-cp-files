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

    string s; cin >> s;

    vector<int> v(26, 0);

    forp(i, 0, n){
        if(v[s[i]-'A'] == 0) v[s[i]-'A'] += 2;
        else v[s[i]-'A']++;
    }

    int sum(0);
    forp(i, 0, 26){
        sum += v[i];
    }
    
    cout << sum << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    while(n--) solve();
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