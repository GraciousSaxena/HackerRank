#include<bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int a, b, ans = 0, i;
        cin >> a >> b;
        for(i=1; ; i++) {
            if (i * i > b) break;
            if (i * i <= b && i * i >= a) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}

// WHAT I DID

int main(){
    IOS;
    vector<ll> arr(10000);
    arr[0] = 0;
    ll k=1;
    for(ll i=1; i<10000; i++){
        arr[i] = k + arr[i-1];
        k += 2;
    }
    w(t){
        ll a,b; cin>>a>>b;
        ll cnt = 0;
        for(ll i=1; i<=10000; i++){
            if(arr[i] >= a && arr[i] <= b)
                cnt++;
            else if(arr[i] > b)
                break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
