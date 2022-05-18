//                                   Life Goes on and you Learn from it !!  -Steve Jobs
#include<bits/stdc++.h>
using namespace std;
#define testLoop int t; cin>>t; while(t--)
#define ll  long long int
#define loop(k,b,a) for(ll k=b;k<a;k++)
#define rloop(k,b,a) for(ll k=b;k>a;k--)
#define ff first
#define ss second
#define pb push_back
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 2e5;
#define beg2end(count) count.begin(),count.end()
#define vl  vector<ll>
#define pl pair<ll,ll>
#define ml map<ll,ll>
#define NO_OF_CHARS 256


void CPwithVKD() {

int n,k; cin>>n>>k;
k = n-k;
vector<vector<int>> g(n);
set<pair<int,int>> ludo;
loop(i,0,n-1){
    int u,v,x; 
    cin>>u>>v>>x;
    u--,v--;
    if(x)
              ludo.insert({min(u,v),max(u,v)}) ;
        g[u].push_back(v);
        g[v].push_back(u);

}
    vl size(n);
    auto dfs1= [&] (int u,int par,const auto &dfs1) -> void
    {
        size[u]=1; for(int v : g[u]){
            if(v != par) {
                dfs1(v,u,dfs1);
                size[u]+=size[v];
            }
        }

    };
    dfs1(0,-1,dfs1);
    multiset<int, greater<int>>removekrna;

    auto lelo = [&](int u, int par, const auto &lelo) ->void
    {
        for(int v : g[u] ){
            if(v!=par) {
                if(ludo.find({min(u,v),max(u,v)}) != ludo.end() )
                      removekrna.insert(size[v]);
                else 
                      lelo(v,u,lelo);
       
            }
        }
    };
    lelo(0,-1,lelo); int ans = 0;
    for(int x : removekrna) {
        if(k<=0) 
            break;
            k-=x;
            ans++;
    }

     if(k>0) cout<<"-1"<<endl;
     else cout<<ans<<endl;

}

 


int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

testLoop{

CPwithVKD();

}
return 0;
}

