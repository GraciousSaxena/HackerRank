// Divisible Sum Pairs
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
    vector<int> arr(n);
    forn(i,n)
        cin>>arr[i];
    int d,m;    cin>>d>>m;
    int cnt=0;
    for(int i=0; i<=n-m; i++){
        int sum=0;
        for(int j=i; j<i+m; j++){
            sum += arr[j];
            // cout<<"arr="<<arr[j]<<" ";
        }
        // cout<<endl;
        if(sum == d)    cnt++;
    }
    cout<<cnt;  
    return 0;
}
