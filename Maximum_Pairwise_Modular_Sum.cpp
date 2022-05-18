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

ll n,m; cin>>n>>m;
ll arr[n];
loop(i,0,n){
    cin>>arr[i];
}
ll pmax =0,vmax ;

pmax = arr[0];
for(ll i=1;i<n;i++){
    if(arr[i] >pmax){
        pmax = arr[i];
    }
}
sort(arr,arr+n);
for(ll i = n-1;i>=0;i--){
    if(arr[i]<pmax){
        vmax = arr[i];
        break;
    }
}
cout<<max(2*pmax, vmax+pmax + m + (vmax - pmax)%m) <<endl;


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

