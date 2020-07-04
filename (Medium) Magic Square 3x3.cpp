// HackerRank 
// Forming a magic square
#include <bits/stdc++.h>
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define for0(i,n)   for(int i=0; i<n; i++)
#define for1(i,n)   for(int i=1; i<=n; i++)
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define w(x) int x; cin >> x; while (x--)

using namespace std;
typedef long long ll;

int main() {

    int a[9];
    for(int i = 0; i < 9; i++) {
        a[i] = i + 1;
    }

    int b[9];
    for(int i = 0; i < 9; i++) {
        cin>>b[i];
    }
    int ans = INT_MAX;
    do {
        if(a[0] + a[1] + a[2] == a[0] + a[1] + a[2] &&
                a[0] + a[1] + a[2] == a[3] + a[4] + a[5] &&
                a[0] + a[1] + a[2] == a[6] + a[7] + a[8] &&
                a[0] + a[1] + a[2] == a[0] + a[3] + a[6] &&
                a[0] + a[1] + a[2] == a[1] + a[4] + a[7] &&
                a[0] + a[1] + a[2] == a[2] + a[5] + a[8] &&
                a[0] + a[1] + a[2] == a[0] + a[4] + a[8] &&
                a[0] + a[1] + a[2] == a[2] + a[4] + a[6]) {
            int cost = 0;
            for(int i = 0; i < 9; i++) {
                cost += abs(a[i] - b[i]);
            }
            ans = min(ans, cost);
        }
    } while(next_permutation(&a[0], &a[9]));

    cout << ans;

    return(0);
}
