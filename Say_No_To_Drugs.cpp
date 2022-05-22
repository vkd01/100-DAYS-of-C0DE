//                                   Life Goes on and you Learn from it !!  -Steve Jobs

#undef _GLIBCXX_DEBUG

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

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

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

double qmod;

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
    long long q = static_cast<long long>(static_cast<double>(value) * rhs.value * qmod);
    value = normalize(value * rhs.value - q * mod());
//    value = (long long) ((__int128) value * rhs.value % mod());
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

using ModType = long long;

struct VarMod { static ModType value; };
ModType VarMod::value;
ModType& md = VarMod::value;
using Mint = Modular<VarMod>;

/*vector<Mint> fact(1, 1);
vector<Mint> inv_fact(1, 1);

Mint C(int n, int k) {
  if (k < 0 || k > n) {
    return 0;
  }
  while ((int) fact.size() < n + 1) {
    fact.push_back(fact.back() * (int) fact.size());
    inv_fact.push_back(1 / fact.back());
  }
  return fact[n] * inv_fact[k] * inv_fact[n - k];
}*/

namespace factorizer {

template <typename T>
struct FactorizerVarMod { static T value; };
template <typename T>
T FactorizerVarMod<T>::value;

template <typename T>
bool IsPrime(T n, const vector<T>& bases) {
  if (n < 2) {
    return false;
  }
  vector<T> small_primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  for (const T& x : small_primes) {
    if (n % x == 0) {
      return n == x;
    }
  }
  if (n < 31 * 31) {
    return true;
  }
  int s = 0;
  T d = n - 1;
  while ((d & 1) == 0) {
    d >>= 1;
    s++;
  }
  FactorizerVarMod<T>::value = n;
  for (const T& a : bases) {
    if (a % n == 0) {
      continue;
    }
    Modular<FactorizerVarMod<T>> cur = a;
    cur = power(cur, d);
    if (cur == 1) {
      continue;
    }
    bool witness = true;
    for (int r = 0; r < s; r++) {
      if (cur == n - 1) {
        witness = false;
        break;
      }
      cur *= cur;
    }
    if (witness) {
      return false;
    }
  }
  return true;
}

bool IsPrime(long long n) {
  return IsPrime(n, {2, 325, 9375, 28178, 450775, 9780504, 1795265022});
}

bool IsPrime(int32_t n) {
  return IsPrime(n, {2, 7, 61});
}



vector<int> least = {0, 1};
vector<int> primes;
int precalculated = 1;

void RunLinearSieve(int n) {
  n = max(n, 1);
  least.assign(n + 1, 0);
  primes.clear();
  for (int i = 2; i <= n; i++) {
    if (least[i] == 0) {
      least[i] = i;
      primes.push_back(i);
    }
    for (int x : primes) {
      if (x > least[i] || i * x > n) {
        break;
      }
      least[i * x] = x;
    }
  }
  precalculated = n;
}

void RunSlowSieve(int n) {
  n = max(n, 1);
  least.assign(n + 1, 0);
  for (int i = 2; i * i <= n; i++) {
    if (least[i] == 0) {
      for (int j = i * i; j <= n; j += i) {
        if (least[j] == 0) {
          least[j] = i;
        }
      }
    }
  }
  primes.clear();
  for (int i = 2; i <= n; i++) {
    if (least[i] == 0) {
      least[i] = i;
      primes.push_back(i);
    }
  }
  precalculated = n;
}

void RunSieve(int n) {
  RunLinearSieve(n);
}

template <typename T>
vector<pair<T, int>> MergeFactors(const vector<pair<T, int>>& a, const vector<pair<T, int>>& b) {
  vector<pair<T, int>> c;
  int i = 0;
  int j = 0;
  while (i < (int) a.size() || j < (int) b.size()) {
    if (i < (int) a.size() && j < (int) b.size() && a[i].first == b[j].first) {
      c.emplace_back(a[i].first, a[i].second + b[j].second);
      ++i;
      ++j;
      continue;
    }
    if (j == (int) b.size() || (i < (int) a.size() && a[i].first < b[j].first)) {
      c.push_back(a[i++]);
    } else {
      c.push_back(b[j++]);
    }
  }
  return c;
}

template <typename T>
vector<pair<T, int>> RhoC(const T& n, const T& c) {
  if (n <= 1) {
    return {};
  }
  if ((n & 1) == 0) {
    return MergeFactors({{2, 1}}, RhoC(n / 2, c));
  }
  if (IsPrime(n)) {
    return {{n, 1}};
  }
  FactorizerVarMod<T>::value = n;
  Modular<FactorizerVarMod<T>> x = 2;
  Modular<FactorizerVarMod<T>> saved = 2;
  T power = 1;
  T lam = 1;
  while (true) {
    x = x * x + c;
    T g = __gcd((x - saved)(), n);
    if (g != 1) {
      return MergeFactors(RhoC(g, c + 1), RhoC(n / g, c + 1));
    }
    if (power == lam) {
      saved = x;
      power <<= 1;
      lam = 0;
    }
    lam++;
  }
  return {};
}

template <typename T>
vector<pair<T, int>> Rho(const T& n) {
  return RhoC(n, static_cast<T>(1));
}

template <typename T>
vector<pair<T, int>> Factorize(T x) {
  if (x <= 1) {
    return {};
  }
  if (x <= precalculated) {
    vector<pair<T, int>> ret;
    while (x > 1) {
      if (!ret.empty() && ret.back().first == least[x]) {
        ret.back().second++;
      } else {
        ret.emplace_back(least[x], 1);
      }
      x /= least[x];
    }
    return ret;
  }
  if (x <= static_cast<long long>(precalculated) * precalculated) {
    vector<pair<T, int>> ret;
    if (!IsPrime(x)) {
      for (T i : primes) {
        T t = x / i;
        if (i > t) {
          break;
        }
        if (x == t * i) {
          int cnt = 0;
          while (x % i == 0) {
            x /= i;
            cnt++;
          }
          ret.emplace_back(i, cnt);
          if (IsPrime(x)) {
            break;
          }
        }
      }
    }
    if (x > 1) {
      ret.emplace_back(x, 1);
    }
    return ret;
  }
  return Rho(x);
}

template <typename T>
vector<T> BuildDivisorsFromFactors(const vector<pair<T, int>>& factors) {
  vector<T> divisors = {1};
  for (auto& p : factors) {
    int sz = (int) divisors.size();
    for (int i = 0; i < sz; i++) {
      T cur = divisors[i];
      for (int j = 0; j < p.second; j++) {
        cur *= p.first;
        divisors.push_back(cur);
      }
    }
  }
  sort(divisors.begin(), divisors.end());
  return divisors;
}

}  // namespace factorizer

template <typename T>
struct PrimitiveVarMod { static T value; };
template <typename T>
T PrimitiveVarMod<T>::value;

template <typename T, class F>
T GetPrimitiveRoot(const T& modulo, const F& factorize) {
  if (modulo <= 0) {
    return -1;
  }
  if (modulo == 1 || modulo == 2 || modulo == 4) {
    return modulo - 1;
  }
  vector<pair<T, int>> modulo_factors = factorize(modulo);
  if (modulo_factors[0].first == 2 && (modulo_factors[0].second != 1 || modulo_factors.size() != 2)) {
    return -1;
  }
  if (modulo_factors[0].first != 2 && modulo_factors.size() != 1) {
    return -1;
  }
  set<T> phi_factors;
  T phi = modulo;
  for (auto& d : modulo_factors) {
    phi = phi / d.first * (d.first - 1);
    if (d.second > 1) {
      phi_factors.insert(d.first);
    }
    for (auto& e : factorize(d.first - 1)) {
      phi_factors.insert(e.first);
    }
  }
  PrimitiveVarMod<T>::value = modulo;
  Modular<PrimitiveVarMod<T>> gen = 2;
  while (gen != 0) {
    if (power(gen, phi) != 1) {
      continue;
    }
    bool ok = true;
    for (auto& p : phi_factors) {
       if (power(gen, phi / p) == 1) {
         ok = false;
         break;
       }
     }
    if (ok) {
      return gen();
    }
    gen++;
  }
  assert(false);
  return -1;
}

template <typename T>
T GetPrimitiveRoot(const T& modulo) {
  return GetPrimitiveRoot(modulo, factorizer::Factorize<T>);
}

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;




void CPwithVKD() {










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
