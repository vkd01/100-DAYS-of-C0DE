//                                   Life Goes on and you Learn from it !!  -Steve Jobs
/*
Author : Vimal Kumar Dubey
 ! Instead of Copying my Template .....Get INSPIRED and Create a unique one //

**************************************************************************************************
   You love to watch Doraemon ?? Oh high five .... !! 
JUST DISCONNECT. Once in a day sometime, sit silently and from all connections, disconnect yourself.]

-> { / } The Two important days in your life are The day yoy are born and The day you find  out why

*/
//Nothing is More Honorable than a greatful Heart //
#undef _GLIBCXX_DEBUG

#include<bits/stdc++.h>
using namespace std;
#define testLoop                                                   int t; cin>>t; while(t--)
#define ll                                                               long long int
#define loop(k,b,a)                                                for(ll k=b;k<a;k++)
#define rloop(k,b,a)                                               for(ll k=b-1;k>=a;k--)
#define ff                                                               first
#define ss                                                             second
#define pb                                                             push_back
#define beg2end(count)                                        count.begin(),count.end()
#define vl                                                              vector<ll>
#define pl                                                              pair<ll,ll>
#define ml                                                             map<ll,ll>
#define NO_OF_CHARS                                      256
#define print(s)                                                      cout<<s<<endl;
// #define lineprint(s)                                                cout<<s<<" "
// #define nextline                                                     cout<<endl;
// #define BIN(a,b)                                                    (a<<b)
// const long long INF = 10e9;
// const long long MOD = 1e9 + 7;
// const int MAXN = 2e5;


ll CPwithVKD(ll n) {

ll shivam = (ll) n*(n+1)/2;
vector<vl> vkd(n+1,vl(1,-1));
for(int i=0;i<n;i++){
    ll x; cin>>x;
    vkd[x].pb(i);
}
loop(i,1,n+1){
     vkd[i].pb(n);
     loop(j,1,(ll)vkd[i].size()) {
         ll l = vkd[i][j] - vkd[i][j-1] -1;
         ll fucked = 0LL;
         shivam = shivam - max(fucked,l-i+1);
     }
}
return shivam;

} 


int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

testLoop{
int n; cin>>n;
cout<<CPwithVKD(n);
cout<<endl;

}

return 0;

}