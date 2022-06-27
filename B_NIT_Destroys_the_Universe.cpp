
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
#define map(a,b)                                                      map<a,b>
#define umap(a,b)                                                    unordered_map<a,b>
#define NO_OF_CHARS                                      256
#define print(s)                                                      cout<<s<<endl;
#define lineprint(s)                                                cout<<s<<" "
#define nextline                                                     cout<<endl;
#define BIN(a,b)                                                    (a<<b)
#define convert_tolower(s)                                    transform(beg2end(s), s.begin(), ::tolower);
#define convert_toupper(s)                                   transform(beg2end(s), s.begin(), ::toupper);
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 2e5;


static bool comp(const vector<ll>& vec1, const vector<ll>& vec2){
return vec1[1] < vec2[1];
}

void CPwithVKD() {
// ll n; cin>>n;
// ll arr[n];

// map(ll,ll)m;
// ll ans = -1;
// loop(i,0,n) {
//     cin>>arr[i];
//     m[arr[i]]++;
// }

// for(auto i : m)  {
//     if(i.first==0 and m.size()==1) {
//         print("0") return;
//     }
// }
// if(n==1){
//     print("1") return;
// }
// ll c = 0;
// for(auto i : m){
//     if(i.first == 0) c = i.second;
// }
// if(arr[0]==0 && arr[n-1]==0) c--;

// else if(arr[0]!=0 and arr[n-1]!=0) c++;

// ll temp = 2;
// ans = min(c,temp);


// print(ans)

    ll n;
      cin>>n;
      ll arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
          
      }ll i=0,cnt=0;
      if(arr[0]!=0){
          cnt++;
      }
      while(i<n-1){
          if(arr[i]==0 && arr[i+1]!=0){
              cnt++;
              i++;
              
         
              
          }else{
              i++;
          }
          
      }if(cnt>=2){
          cout<<2<<endl;
      }else{
          cout<<cnt<<endl;
      }
      

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