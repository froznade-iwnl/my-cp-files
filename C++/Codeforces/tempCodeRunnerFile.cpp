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

int toggle(int n){
    if(n == 1) return 0;
    else return 1;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> v(3), a(3);

    forp(i, 0, 3){
        v[i].resize(3, 1);
        a[i].resize(3);
    }

    forp(i, 0, 3){
        forp(j ,0, 3){
            int z; cin >> z;
            if(z%2 == 1){
                v[i][j] = toggle(v[i][j]);
                if(j+1 < 3) v[i][j+1] = toggle(v[i][j+1]);
                if(j-1 > 0) v[i][j-1] = toggle(v[i][j-1]);
                if(i+1 < 3) v[i+1][j] = toggle(v[i+1][j]);
                if(i-1 > 0) v[i-1][j] = toggle(v[i-1][j]);
                if(j+1 < 3 && i + 1 < 3)v[i+1][j+1]=toggle(v[i+1][j+1]);
                if(j+1 < 3 && i - 1 > 0)v[i-1][j+1]=toggle(v[i-1][j+1]);
                if(j-1 > 0 && i-1 > 0)v[i-1][j-1]= toggle(v[i-1][j-1]);
                if(j-1 > 0 && i+1 > 0)v[i+1][j-1]= toggle(v[i+1][j-1]);
            }
        }
    }

    forp(i, 0, 3){
        forp(j, 0, 3){
            cout << v[i][j];
        }
        cout << endl;
    }



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