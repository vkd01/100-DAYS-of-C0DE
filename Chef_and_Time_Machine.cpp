
/*                                   Life Goes on and you Learn from it !!  -Steve Jobs

Author : Vimal Kumar Dubey   ᗡ⋊Λ
 ! Instead of Copying my Template .....Get INSPIRED and Create a unique one //

**************************************************************************************************
PROFILE IS TEMPORARY, SKILLS ARE PERMANENT !!
//------------------------------------------------------------------------------------------------------------------------------------------
Remember you were also a novice when you started,
hence never be rude to anyone who wants to learn something

JUST DISCONNECT. Once in a day sometime, sit silently and from all connections, disconnect yourself.]

*/
/*------------------------------------------------------------------------------------------------------*/

#undef _GLIBCXX_DEBUG //a compiler flag used to enable debug mode in gcc's C++ Standard Library implementation

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

/*|----------------------------------------------------------------------------------------------------|*/
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
const int NN = 1e5 + 10;
/*-----------------------------------------------------------------------------------------------------*/

bool isPowerofTwo(ll x) {
   return x && (!(x & (x - 1)));
}

/*-----------------------------------------------------------------------------------------------------*/
// Compute a to the power n in log(n) time!!
ll binpow(ll a, ll n) {
   ll res = 1LL;
   if (n == 0) return 1LL;
   while (n > 0) {
      if (n & 1) res *= a;
      n >>= 1;
      a *= a;
   }
   return res;
}

/*-----------------------------------------------------------------------------------------------------*/
ll lower_bound(vector<ll> &v, ll element) {
   ll low = 0, high = v.size() - 1;
   while (high - low > 1) {
      ll mid = low + (high - low) / 2;
      if (v[mid] < element) low = mid + 1;
      else high = mid;
   }
   if (v[low] >= element) return low;
   else if (v[high] >= element) return high;
   return -1;
}

/*-----------------------------------------------------------------------------------------------------*/
ll upper_bound(vector<ll> &v, ll element) {
   ll low = 0, high = v.size() - 1;
   while (high - low > 1) {
      ll mid = low + (high - low) / 2;
      if (v[mid] <= element) low = mid + 1;
      else high = mid;
   }
   if (v[low] > element) return low;
   else if (v[high] > element) return high;
   return -1;
}

/*-----------------------------------------------------------------------------------------------------*/
bool comp(pair<ll, ll> &a, pair<ll, ll> &b) {
   if (a.first != b.first) return a.first > b.first;
   return a.first > b.first;
}

/*------------------------------------------------------------------------------------------------------*/
ll  MostSignificantBit(ll n) {
   if (n == 0)
      return 0;
   ll msb = 0;
   n = n / 2;
   while (n != 0) {
      n /= 2;
      msb++;
   }
   return BIN(1, msb);
}

/*------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {
   if (b == 0)
      return a;
   else
      return gcd(b, a % b);
}

/*------------------------------------------------------------------------------------------------------*/
vector<ll> sieve;
void SieveOf() {
   bool prime[NN];
   memset(prime, true, sizeof(prime));
   for (int p = 2; p * p <= NN; p++) {
      if (prime[p] == true) {
         for (int i = p * p; i < NN; i += p)
            prime[i] = false;
      }
   }
   for (int p = 2; p < NN; p++)
      if (prime[p]) sieve.pb(p);
}


/*------------------------------------------------------------------------------------------------------*/
static bool comp(const vector<ll>& vec1, const vector<ll>& vec2) {
   return vec1[1] < vec2[1];
}

/*------------------------------------------------------------------------------------------------------*/
ll LCM(ll arr[], ll n) {
   ll ans = arr[0];
   loop(i, 1, n)ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
   return ans;
}

/*------------------------------------------------------------------------------------------------------*/
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

/*

                   SUFFER NOW AND LIVE REST OF LIFE AS A CHAMP !!

                              Get ready to face perplexing test cases !!!
*/
/*------------------------------------------------------------------------------------------------------*/

void f(ll pos, vector<string> &arr, bool &ok) {
   if (pos == 0) {
      ok = true;
      return;
   }

   string i1 = arr[pos - 1], curr = arr[pos];

   if (curr[0] == i1[0] or curr[1] == i1[1]) {
      string store = arr[pos-1];
      arr[pos - 1] = i1;

      f(pos - 1, arr, ok);

      arr[pos - 1] = store;       // BACKTRACK !!

   }
   if (ok) return;
   if (pos < 3) return;
   string i3 = arr[pos - 3];
   if (curr[0] == i3[0] or curr[1] == i3[1]) {
      string storeB = arr[pos-3];
      arr[pos - 3] = i3;

      f(pos - 1, arr, ok);

      arr[pos - 3] = storeB;       // BACKTRACK !!

   }
   return;

}

void CPwithVKD() {


   ll n; cin >> n;
   vector<string> arr(n);

   loop(i, 0, n) cin >> arr[i];

   bool ans = false;

   f(n - 1, arr, ans);

   (ans) ? cout << "YES" << endl : print("NO")

}


/*------------------------------------------------------------------------------------------------------*/

int32_t main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif

   // testLoop

   CPwithVKD();

   return 0;

}