#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pr;

ll mridul = LLONG_MAX;
ll mod = 1e9 + 7;
vector<ll> adj[101][101];
// vector<bool> visited(100001,false);
vector<ll> prime;
vector<ll> no(10000);
vector<ll> gdb(1001, INT_MAX);

bool comp(const pr &v1, const pr &v2)
{

    return v1.first < v2.first;
}

bool comp1(const pair<string, int> &v1, const pair<string, int> &v2)
{
    return v1.second > v2.second;
}

struct comp1
{
    bool operator()(pair<ll, ll> a, pair<ll, ll> b)
    {
        if (a.first == b.first)
            return (a.second > b.second);
        return a.first < b.first;
    }
};

ll abs(ll a, ll b)
{
    if (a > b)
        return a - b;
    else
        return b - a;
}

// int using_dfs(int current,int m)
// { rn m;

// }

int mem(int n, int t, vector<int> &a, vector<int> &dp, vector<bool> &vis)
{
    if (t == 0)
        return 1;
    if (vis[t])
        return dp[t];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (t - a[i] >= 0)
            ans = (ans + mem(n, t - a[i], a, dp, vis)) % mod;
    }
    vis[t] = true;
    dp[t] = ans;
    return ans;
}

void sieve()
{

    bool vis[10001];

    memset(vis, true, sizeof(vis));

    for (ll p = 2; p * p <= 10000; p++)
    {

        if (vis[p] == true)
        {

            for (ll i = p * p; i <= 10000; i += p)
                vis[i] = false;
        }
    }

    for (ll p = 2; p <= 10000; p++)
        if (vis[p])
            prime.push_back(p);
}

bool check_prime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll cd(ll n)
{
    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}

void dfs(vector<vector<pair<char, char>>> &a, vector<vector<ll>> &vis, ll i, ll j, ll &count, ll n, ll m)
{
    //  cout<<"\n"<<n<<"\n";
    vis[i][j] = 1;
    count++;
    if (a[i][j].second == 'U' && i != 0 && vis[i - 1][j] == 0)
    {
        dfs(a, vis, i - 1, j, count, n, m);
    }
    if (a[i][j].second == 'D' && i != n - 1 && vis[i + 1][j] == 0)
    {
        dfs(a, vis, i + 1, j, count, n, m);
    }
    if (a[i][j].first == 'L' && j != 0 && vis[i][j - 1] == 0)
    {
        dfs(a, vis, i, j - 1, count, n, m);
    }
    if (a[i][j].first == 'R' && j != m - 1 && vis[i][j + 1] == 0)
    {
        dfs(a, vis, i, j + 1, count, n, m);
    }
}

ll binpow1(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b = b >> 1;
    }
    return res;
}
void solve()
{
    int n = 0, mod = 1e9 + 7, x = 0, y = 0, z = 0, d1 = 0, d2 = 0, l, r = 0, ans = 0, m = 1e9, k, j = 0, q = 0, i, sum = 0, p = 0;
    string s = "", t = "", s1, s2, s3;
    char c1, c2, c3;
    bool tell = false;
    cin >> n >> k;
    vector<ll> a(n);
    ll m1 = LLONG_MIN, m2 = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m1 = max(a[i], m1);
        m2 = min(a[i], m2);
    }
    if (k >= m2 && k <= m1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    gdb[1] = 0;
    ll t = 1;
    // sieve();
     cin >> t;
    while (t--)
    {
        solve();
    }
}