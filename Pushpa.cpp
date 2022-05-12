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

      ll n;   cin>>n;

   
      ll arr[n];
      loop(i,0,n){
          cin>>arr[i];
      }
      sort(arr,arr+n,greater<int>());

      ll max=0,c=0;
      if(n==1) {
          max = arr[n-1];

      } 
     else {
         loop(i,0,n-1){
             if(arr[i]==arr[i+1]) c++;
             else if(max<arr[i]+c) {
                 max = arr[i]+c;
                 c=0;
             }
         }
           
     }
     cout<<max<<endl;
    

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

