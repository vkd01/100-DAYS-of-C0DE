//                                   Life Goes on and you Learn from it !!  -Steve Jobs
/*
Author : Vimal Kumar Dubey   ᗡ⋊Λ
 ! Instead of Copying my Template .....Get INSPIRED and Create a unique one //

**************************************************************************************************
Remember you were also a novice when you started, 
hence never be rude to anyone who wants to learn something

   You love to watch Doraemon ?? Oh high five .... !! 
JUST DISCONNECT. Once in a day sometime, sit silently and from all connections, disconnect yourself.]

-> { / } The Two important days in your life are The day yoy are born and The day you find  out why

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

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
vector<int>res;
int visited[100001] = {0};
queue<int>q;
q.push(0);
visited[0] = 1;
while(!q.empty()){
int parent = q.front();
q.pop();
res.push_back(parent);
for(int child: adj[parent]){
if(visited[child])continue;
q.push(child);
visited[child] = 1;
}}
return res;
}

template <typename T>
T inverse(T a, T m) {
  T u = 0, v = 1;
  while (a != 0) {
    T t = m / a;
    m -= t * a; swap(a, m);
    u -= t * v; swap(u, v);
  }
  assert(m == 1);
  return u;
}
template <typename T>
class Modular {
 public:
  using Type = typename decay<decltype(T::value)>::type;

  constexpr Modular() : value() {}
  template <typename U>
  Modular(const U& x) {
    value = normalize(x);
  }

  template <typename U>
  static Type normalize(const U& x) {
    Type v;
    if (-mod() <= x && x < mod()) v = static_cast<Type>(x);
    else v = static_cast<Type>(x % mod());
    if (v < 0) v += mod();
    return v;
  }

  const Type& operator()() const { return value; }
  template <typename U>
  explicit operator U() const { return static_cast<U>(value); }
  constexpr static Type mod() { return T::value; }

  Modular& operator+=(const Modular& other) { if ((value += other.value) >= mod()) value -= mod(); return *this; }
  Modular& operator-=(const Modular& other) { if ((value -= other.value) < 0) value += mod(); return *this; }
  template <typename U> Modular& operator+=(const U& other) { return *this += Modular(other); }
  template <typename U> Modular& operator-=(const U& other) { return *this -= Modular(other); }
  Modular& operator++() { return *this += 1; }
  Modular& operator--() { return *this -= 1; }
  Modular operator++(int) { Modular result(*this); *this += 1; return result; }
  Modular operator--(int) { Modular result(*this); *this -= 1; return result; }
  Modular operator-() const { return Modular(-value); }

  template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, int>::value, Modular>::type& operator*=(const Modular& rhs) {
#ifdef _WIN32
    uint64_t x = static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value);
    uint32_t xh = static_cast<uint32_t>(x >> 32), xl = static_cast<uint32_t>(x), d, m;
    asm(
      "divl %4; \n\t"
      : "=a" (d), "=d" (m)
      : "d" (xh), "a" (xl), "r" (mod())
    );
    value = m;
#else
    value = normalize(static_cast<int64_t>(value) * static_cast<int64_t>(rhs.value));
#endif
    return *this;
  }
  template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) {
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  }
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) {
    value = normalize(value * rhs.value);
    return *this;
  }

  Modular& operator/=(const Modular& other) { return *this *= Modular(inverse(other.value, mod())); }

  friend const Type& abs(const Modular& x) { return x.value; }

  template <typename U>
  friend bool operator==(const Modular<U>& lhs, const Modular<U>& rhs);

  template <typename U>
  friend bool operator<(const Modular<U>& lhs, const Modular<U>& rhs);

  template <typename V, typename U>
  friend V& operator>>(V& stream, Modular<U>& number);

 private:
  Type value;
};



template <typename T> bool operator==(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value == rhs.value; }
template <typename T, typename U> bool operator==(const Modular<T>& lhs, U rhs) { return lhs == Modular<T>(rhs); }
template <typename T, typename U> bool operator==(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) == rhs; }

template <typename T> bool operator!=(const Modular<T>& lhs, const Modular<T>& rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(const Modular<T>& lhs, U rhs) { return !(lhs == rhs); }
template <typename T, typename U> bool operator!=(U lhs, const Modular<T>& rhs) { return !(lhs == rhs); }

template <typename T> bool operator<(const Modular<T>& lhs, const Modular<T>& rhs) { return lhs.value < rhs.value; }

template <typename T> Modular<T> operator+(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) += rhs; }
template <typename T, typename U> Modular<T> operator+(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) += rhs; }

template <typename T> Modular<T> operator-(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) -= rhs; }
template <typename T, typename U> Modular<T> operator-(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) -= rhs; }

template <typename T> Modular<T> operator*(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) *= rhs; }
template <typename T, typename U> Modular<T> operator*(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) *= rhs; }

template <typename T> Modular<T> operator/(const Modular<T>& lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(const Modular<T>& lhs, U rhs) { return Modular<T>(lhs) /= rhs; }
template <typename T, typename U> Modular<T> operator/(U lhs, const Modular<T>& rhs) { return Modular<T>(lhs) /= rhs; }

template<typename T, typename U>
Modular<T> power(const Modular<T>& a, const U& b) {
  assert(b >= 0);
  Modular<T> x = a, res = 1;
  U p = b;
  while (p > 0) {
    if (p & 1) res *= x;
    x *= x;
    p >>= 1;
  }
  return res;
}

template <typename T>
bool IsZero(const Modular<T>& number) {
  return number() == 0;
}

template <typename T>
string to_string(const Modular<T>& number) {
  return to_string(number());
}

// U == std::ostream? but done this way because of fastoutput
template <typename U, typename T>
U& operator<<(U& stream, const Modular<T>& number) {
  return stream << number();
}

// U == std::istream? but done this way because of fastinput
template <typename U, typename T>
U& operator>>(U& stream, Modular<T>& number) {
  typename common_type<typename Modular<T>::Type, long long>::type x;
  stream >> x;
  number.value = Modular<T>::normalize(x);
  return stream;
}





using Mint = Modular<integral_constant<decay<decltype(MOD)>::type, MOD>>;
const int TOXIC = 42;

Mint dp[TOXIC][2 * TOXIC * TOXIC + 1][TOXIC + 1][TOXIC];

void CPwithVKD() {


int n, m;
    cin >> n >> m;
    int phi = 0;
    for (int i = 1; i <= m; i++) {
      if (__gcd(i, m) == 1) {
        phi += 1;
      }
    }
    for (int p = 0; p < m; p++) {
      Mint res = 0;
      for (int s = 0; s <= 2 * phi * m; s++) {
        for (int k = 0; k <= m; k++) {
          Mint ft = dp[m][s][m - k][p];
          if (ft == 0) {
            continue;
          }
          if (n >= s && (n - s) % phi == 0) {
            int cnt = (n - s) / phi;
            if (cnt == 0) {
              res += ft;
            } else {
              if (k > 0) {
                int num = cnt + k - 1;
                for (int i = 1; i <= k - 1; i++) {
                  ft = ft * (num - i + 1) / i;
                }
                res += ft;
              }
            }
          }
        }
      }
      cout << res << " \n"[p == m - 1];
    }

} 


int32_t main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
for (int m = 2; m <= 40; m++) {
    int phi = 0;
    for (int i = 1; i <= m; i++) {
      if (__gcd(i, m) == 1) {
        phi += 1;
      }
    }
    dp[m][0][0][1] = 1;
    int limit = 0;
    int sum = 0;
    for (int i = 0; i < m; i++) {
      bool flag = (__gcd(m, i) != 1);
      int pre = 0;
      if (flag) {
        vector<int> vals(1, 1);
        map<int, int> used;
        used[1] = 0;
        while (true) {
          vals.push_back(vals.back() * i % m);
          if (used.find(vals.back()) != used.end()) {
            pre = used[vals.back()];
            break;
          }
          used[vals.back()] = (int) vals.size() - 1;
        }
      }
      vector<int> to(m);
      for (int j = 0; j < m; j++) {
        to[j] = j * i % m;
      }
      for (int s = sum; s >= 0; s--) {
        for (int k = limit; k >= 0; k--) {
          for (int p = 0; p < m; p++) {
            Mint ft = dp[m][s][k][p];
            if (ft != 0) {
              dp[m][s][k][p] = 0;
              int np = p;
              for (int j = 0; j < phi + pre; j++) {
                dp[m][s + j][k + (j < pre)][np] += ft;
                np = to[np];
              }
            }
          }
        }
      }
      if (flag) {
        limit += 1;
      }
      sum += phi + pre - 1;
    }
    debug(m, phi, clock());
  }
testLoop

CPwithVKD();

return 0;

}