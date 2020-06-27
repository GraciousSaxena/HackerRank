// XOR Problem
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


int main(){
    IOS;
    w(t){
        string s;   cin>>s;
        int n;      cin>>n;
        forn(i,s.size()){
            if(s[i] == '0' && n>0){
                s[i] = '1';
                n--;
                // cout<<"n="<<n<<endl;
            }
            else            s[i] = '0';
        }
        cout<<s<<endl;
    }
    return 0;
}
