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

    string n; cin >> n;
    int uppers(0), low(0);
    forp(i, 0, n.length()){
        if(n[i] >= 'A' && n[i] <= 'Z') uppers++;
        else low++;
    }

    if(low >= uppers){
        forp(i, 0, n.length()) n[i] = tolower(n[i]);
        cout << n;
    }else{
        forp(i, 0, n.length()) n[i] = toupper(n[i]);
        cout << n;
    }
    
    // cout << endl << uppers << ' ' << low;

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