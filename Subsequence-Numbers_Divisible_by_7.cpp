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
#define print(s) cout<<s<<endl;
#define lineprint(s) cout<<s<<" "
#define nextline cout<<endl;


void CPwithVKD() {
ll n; cin>>n;
vl v(n);
loop(i,0,n){
    cin>>v[i];
}
    vector<vl> vkd(n+1,vl(7));
    vkd[0][0] = 1;
    loop(i,0,n){
        int l = (int)to_string(v[i]).size();
        int p = 1;
        while(l>0) {
         p*=10;
         l--;
        }
            loop(j,0,7){
                int use = (j*p+v[i])%7;
                vkd[i+1][j] = (vkd[i+1][j]  + vkd[i][j]) %MOD;
                vkd[i+1][use] = (vkd[i+1][use]  + vkd[i][j]) %MOD; 
            }
    

}
ll ans = vkd[n][0] + MOD -1;
cout<<ans%MOD<<endl;


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

