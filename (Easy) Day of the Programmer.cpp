// Day of the programmer
#include <bits/stdc++.h> 
#define endl      "\n"
#define hell      1000000007 
#define pb        push_back
#define mp        make_pair
#define vi        vector<ll int>
#define all(x)    (x).begin(),(x).end()
#define F         first
#define S         second
#define forn(i,n) for (int i = 0; i < int(n); ++i)
#define IOS       ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define w(x)      int x; cin >> x; while (x--)

using namespace std;
typedef long long ll;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.S < b.S;
}

int main(){
    IOS;
    int y; cin>>y;
    if(y >= 1918){
        if((y%400 == 0) || (y%4 == 0 && y%100 != 0))
            cout<<"12.09."<<y<<endl;
        else{
            if(y == 1918)
                cout<<"26.09.1918"<<endl;
            else
                cout<<"13.09."<<y<<endl;
        }
    } else{
        if(y%4 == 0)
            cout<<"12.09."<<y<<endl;
        else
            cout<<"13.09."<<y<<endl;
    }
    
    return 0;
}
