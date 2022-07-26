//                                   Life Goes on and you Learn from it !!  -Steve Jobs

//STAY MOTIVATED BY THE FEAR OF BEING AVERAGE !!

/*
Author : Vimal Kumar Dubey   ᗡ⋊Λ
 ! Instead of Copying my Template .....Get INSPIRED and Create a unique one //

**************************************************************************************************
PROFILE IS TEMPORARY, SKILLS ARE PERMANENT !!
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
Remember you were also a novice when you started, 
hence never be rude to anyone who wants to learn something

JUST DISCONNECT. Once in a day sometime, sit silently and from all connections, disconnect yourself.]

-> { / } THOSE WHO DO NOT REMEMBER THE PAST ARE CONDEMNED TO REPEAT IT ---- ?> A dynamic programming expert

*/
//Nothing is More Honorable than a greatful Heart //
#undef _GLIBCXX_DEBUG //a compiler flag used to enable debug mode in gcc's C++ Standard Library implementation

#ifdef LOCAL
#include "algo/debug.h" 
#else
#define debug(...) 42
#endif

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
/*------------------------------------------------------------------------------------------------------------------------------------------------*/


bool isPowerofTwo(ll x) {
return x&&(!(x&(x-1)));
}

ll  MostSignificantBit(ll n){
if (n == 0)
return 0;
ll msb = 0;
n = n / 2;
while (n != 0) {
n /=2;
msb++;
}
return BIN(1,msb);
}

bool isPrime(ll n) {
if (n <= 1) return false;
loop(i,2,sqrt(n))
if (n % i == 0)
return false;
return true;
}

ll gcd(ll a, ll b) {
if (b == 0)
return a;
else
return gcd(b, a % b);
}

static bool comp(const vector<ll>& vec1, const vector<ll>& vec2){
return vec1[1] < vec2[1];
}

ll LCM(ll arr[], ll n){
ll ans = arr[0];
loop(i,1,n)ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
return ans;
}

const int N = 1e5 + 10;
vector<ll> graph[N];
bool visited[N];

void dfs(ll vertex) {
/* Take action on vertex after entering the vertex*/
// lineprint(vertex);
visited[vertex] = true;
//if (visited[vertex]) return;
for (int child : graph[vertex]) {
if (visited[child]) continue;
/*Take action on child before entering the child node*/
// cout << "par" << " " << vertex << " ," << "child" << " " << child << endl;

dfs(child);

/*Take action on child after exiting child node*/
}
/*Take action on vertex before exiting the vertex*/
}

#define FMOD 998244353
ll fac[1000010], inv[1000010], finv[1000010];
ll Cfac(long long x, long long y) {
  if (x < 0 || y > x)
    return 0;
  return fac[x] * finv[y] % FMOD * finv[x - y] % FMOD;
}
void CPwithVKD() {

ll n,x,c0=0,c1=0,t=0;
  cin >> n;
  loop(i,0,n) {
    cin >> x;
    c0+=x==0;
    c1+=x==1;
  }
loop(i,0,c1+1) t=(t+i*Cfac(c1+c0-i,c0))%FMOD;
  cout << (((t*(c0+1)-Cfac(c1+c0-2,c0-1))%FMOD+FMOD)%MOD+Cfac(c1+c0-2,c0-1))*fac[c1]%FMOD*fac[c0]%FMOD << endl;



} 


signed main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

testLoop

CPwithVKD();

return 0;

}