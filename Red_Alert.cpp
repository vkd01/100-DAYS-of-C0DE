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
 ll n,d,h; cin>>n>>d>>h;
 ll arr[n];
 loop(i,0,n){
     cin>>arr[i];

 }
ll sum=0;
bool flag =false;
loop(i,0,n) {
  
    sum+=arr[i];
   if(arr[i]==0)  {
       if(sum>d) sum-=d;
       else sum=0;
       
   }

   if(sum>h) {
       flag = true;
       break;
   }
}
if(flag == true ) cout<<"YES"<<endl;
else cout<<"NO"<<endl;


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

