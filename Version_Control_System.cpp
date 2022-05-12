// //                                   Life Goes on and you Learn from it !!  -Steve Jobs
// #include<bits/stdc++.h>
// using namespace std;
// #define testLoop int t; cin>>t; while(t--)
// #define ll  long long int
// #define loop(k,b,a) for(ll k=b;k<a;k++)
// #define rloop(k,b,a) for(ll k=b;k>a;k--)
// #define ff first
// #define ss second
// #define pb push_back
// const long long INF = 10e9;
// const long long MOD = 1e9 + 7;
// const int MAXN = 2e5;
// #define beg2end(count) count.begin(),count.end()
// #define vl  vector<ll>
// #define pl pair<ll,ll>
// #define ml map<ll,ll>
// #define NO_OF_CHARS 256


// void CPwithVKD() {
// ll n,m,k;
// cin>>n>>m>>k;
// ll am[m+1],ak[k+1],hash[n+1] = {0};

//  loop(i,1,m+1){
//      cin>>am[i];
//      hash[am[i]]++;
//  }
//  loop(i,1,k+1){
//      cin>>ak[i];
//      hash[ak[i]]++;
//  }
//  ll common=0,inter=0;
//  loop(i,1,n+1){
//   //   cout<<hash[i]<<" ";
//      if(hash[i]==2) common++;
//      else if(hash[i]==0) inter++;
//  }

//  cout<<common<<" "<<inter<<endl;


//  }


// int main() {
// ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif

// testLoop{

// CPwithVKD();

// }
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 ll t;
 cin>>t;
 while(t--){
ll n,m,k;
cin>>n>>m>>k;
ll a[m];
ll b[k];
for (int i = 1; i <= m; i++)
{
  cin>>a[i];
}
for (int i = 1; i <= k; i++)
{
  cin>>b[i];
}
ll arr[n+1]={0};
for (int i = 1; i <= m; i++)
{
  arr[a[i]]++;
}
for (int i = 1; i <= k; i++)
{
  arr[b[i]]++;
}
ll count1=0,count2=0;
for (int i = 1; i <= n; i++)
{
  if(arr[i]==2){
  count1++;
  }
  
  if(arr[i]==0){
  count2++;
  }
}
cout<<count1<<" "<<count2<<endl;
 }

 
  return 0;
}