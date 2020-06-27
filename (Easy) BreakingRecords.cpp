// Breaking the records
#include <bits/stdc++.h>
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define F first
#define S second
#define forn(i,n) for (int i = 0; i < int(n); ++i)
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define w(x) int x; cin >> x; while (x--)

using namespace std;
typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second<b.second;
}


int main(){
    IOS;
    int n;  cin>>n;
    ll num;
    ll min = LLONG_MAX;
    ll max = LLONG_MIN;
    ll min_cnt = -1;
    ll max_cnt = -1;
    
    forn(i,n){
        cin>>num;
        if(num<min) min = num, min_cnt++;
        if(num>max) max = num, max_cnt++;
    }
    cout<<max_cnt<<" "<<min_cnt;
    return 0;
}
