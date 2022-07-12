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

    string s; cin >> s;
    int n = s.length();
    bool yes(true);

    if(s[0] != 'a' && s[0] != 'i' && s[0] != 'u' && s[0] != 'e' && s[0] != 'o' && s[0] != 'n' && s.length() == 1) yes =false;


    forp(i, 0, s.length()){
        if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o'){
            if(i == n-1 && s[i] != 'n'){
                yes = false;
            }
            else if(s[i+1] != 'a' && s[i+1] != 'i' && s[i+1] != 'u' && s[i+1] != 'e' && s[i+1] != 'o'){
                if(s[i] != 'n') {
                    yes = false;
                    break;
                }
            }
        }
        // cout << ((yes)?"yes":"no") << "a ";
    }


    (yes == true)?cout << "YES":cout << "NO";

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