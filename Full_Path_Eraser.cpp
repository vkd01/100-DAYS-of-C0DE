//                                   Life Goes on and you Learn from it !!  -Steve Jobs
/*
Author : Vimal Kumar Dubey
 ! Instead of Copying my Template .....Get INSPIRED and Create a unique one //

**********************
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
#define lineprint(s)                                                cout<<s<<" "
#define nextline                                                     cout<<endl;
#define BIN(a,b)                                                    (a<<b)
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 2e5;


bool isPowerofTwo(ll x) {
return x&&(!(x&(x-1)));
}

ll GCD(ll a, ll b) {
if (b == 0)
return a;
else
return __gcd(b, a % b);
}
ll DFS(ll ind, ll par,map<ll,vl> &dics, vl &arr, vl &v2, vl &final);
// ll DFS(ll ind, ll par,map<ll,vl> &dics, vl &arr, vl &v2, vl &final){

// ll counts = arr[ind];
//     ll sum= 0;
// for(auto& i : dics[ind]){
//     if(i != par){
//         ll depth_first_search = DFS(i,ind,dics,arr,v2,final);
//             sum=sum+depth_first_search;
//             counts = GCD (counts,depth_first_search);
//     }
// }
// v2[ind] = counts;
// final[ind] = sum;

// return counts;
// }

void VIMAL(ll ind, ll par, ll su, map<ll,vl> &vec, vl &arr, vl &inter, vl &final, ll &count){

     count =max(count,su);
    
    for(auto &itr : vec[ind]){
    if(itr != par) VIMAL(itr,ind,su-inter[itr]+final[itr], vec,arr,inter,final,count);
}

    }


void CPwithVKD() {
    ll n; cin>>n;
    vl arr(n),ent(n),end(n);

    ll res=0;
    map<ll,vl> dics;
loop(i,0,n) cin>>arr[i];
loop(i,0,sqrt(n)) {
    /*I AM FUCKING GENIUS */
}
loop(i,0,n-1){
    ll a,b; cin>>a>>b;
  ll u = a-1,v=b-1;
dics[u].pb(v);
dics[v].pb(u);
}
ll fuck = DFS(0,-1,dics,arr,ent,end);
    VIMAL(0,-1,end[0],dics,arr,ent,end,res);
    
    print(res);
    



} 


int32_t main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

testLoop

CPwithVKD();

return 0;

}
ll DFS(ll ind, ll par,map<ll,vl> &dics, vl &arr, vl &v2, vl &final){

ll counts = arr[ind];
    ll sum= 0;
for(auto& i : dics[ind]){
    if(i != par){
        ll depth_first_search = DFS(i,ind,dics,arr,v2,final);
            sum=sum+depth_first_search;
            counts = GCD (counts,depth_first_search);
    }
}
v2[ind] = counts;
final[ind] = sum;

return counts;
}