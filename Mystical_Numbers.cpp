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


int msb_pos(ll k){
    ll cnt=0;
    while(k){
        k = k>>1;
        cnt++;
    }
    return cnt;
}
void CPwithVKD() {

ll n; cin>>n;
ll arr[n];
ll temp;
loop(i,0,n){
    cin>>temp;
    arr[i] = msb_pos(temp);
}
ll vkd[33][n];
loop(i,0,33){
    ll c=0;
    loop(j,0,n){
         if(arr[j]==i) {
             vkd[i][j] = (++c);
             }
         else {
         vkd[i][j] = c;
         }
    }
}
ll fuck;
cin>>fuck;
loop(i,0,fuck){
    ll l,r,x;
    cin>>l>>r>>x;
    x = msb_pos(x);
    l--;
    r--;
    if(arr[l] == x){
        cout<<r-l - (vkd[x][r]   - vkd[x][l]);
    }
    else {
        cout<<r-l+1-(vkd[x][r] - vkd[x][l]  );
    }
    cout<<endl;
}





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

