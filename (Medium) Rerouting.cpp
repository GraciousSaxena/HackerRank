#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  100005

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
//    cin>>TESTS;
    while(TESTS--)
    {
        int n,i,j,k;
        cin>>n;
        int connection[n+1],self_loop=-1;
        for(i=1;i<=n;i++){
            cin>>connection[i];
            if(i==connection[i])self_loop=i; //when a node is connected to itself.
        }

        int vis[n+1];
        memset(vis,0,sizeof vis);
        int loops=0;
        int col=0;
        for(i=1;i<=n;i++){ 
            if(vis[i]==0){ //start dfs from every unvisited node
                j=i,++col;
                while(vis[j]==0){
                    vis[j]=col; //Every dfs assigns a different color to the nodes.
                    j=connection[j];
                }
                if(vis[j]==col)loops++; //If same color is encountered again, then cycle exists.
            }    
        }

        int ct=loops-1+(self_loop==-1);

        cout<<ct<<"\n";


        

    }
    return 0;
}
// O(n)
