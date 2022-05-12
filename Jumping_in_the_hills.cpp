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

ll n,u,d; cin>>n>>u>>d;
  ll arr[n];
  loop(i,0,n){
      cin>>arr[i];
  }
      ll parachute = 0,count=0;
        bool flag = true;
  loop(i,0,n-1){
  

      if(arr[i+1] >arr[i]){
          if(arr[i+1]-arr[i] >u){
                 count = i;
                 flag = false;
                    break;
          }
      }
          else if(arr[i+1] < arr[i]){
              if(arr[i] - arr[i+1] >d) {
                     parachute++;
                     if(parachute >1){
                        count = i;
                        flag = false;
                         break;
                     }
              }
              
          }

          else if(arr[i]==arr[i+1]) {

              if(i==n-2){
                  count = i+1;
              }
              else {
              count = i;
              }
          }
      
  }
  if(flag == true) {
      cout<<n<<endl;
  }
  else {
  cout<<count+1<<endl;
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

