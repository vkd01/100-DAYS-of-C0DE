//                                   Life Goes on and you Learn from it !!  -Steve Jobs
/*
Author : Vimal Kumar Dubey
 ! Instead of Copying my Template .....Get INSPIRED and Create a unique one //

**************************************************************************************************
   You love to watch Doraemon ?? Oh high five .... !! 
JUST DISCONNECT. Once in a day sometime, sit silently and from all connections, disconnect yourself.]

-> { / } The Two important days in your life are The day yoy are born and The day you find  out why

*/
//Nothing is More Honorable than a greatful Heart //
// #undef _GLIBCXX_DEBUG

#include<bits/stdc++.h>
using namespace std;
#define testLoop                                                   int t; cin>>t; while(t--)
#define int long long                                                              
//#define loop(k,b,a)                                                for(ll k=b;k<a;k++)
#define rloop(k,b,a)                                               for(ll k=b-1;k>=a;k--)
#define ff                                                               first
#define ss                                                             second
#define pb                                                             push_back
#define beg2end(count)                                        count.begin(),count.end()
#define vl                                                              vector<ll>
#define pl                                                              pair<ll,ll>
#define ml                                                             map<ll,ll>
#define NO_OF_CHARS                                      256
#define print(s)                                                      cout<<s<<endl;
#define lineprint(s)                                                cout<<s<<" "
#define nextline                                                     cout<<endl;
#define BIN(a,b)                                                    (a<<b)
#define ll int

int INF = 1e18;
template <int alpha>
class TrieNode
{
public:
    TrieNode *child[alpha];
    int pre;
#define loop(i) for (int i = 50; i >= 0; i--)
    TrieNode()
    {
        for (int i = 0; i < alpha; i++)
            child[i] = NULL;
        pre = 0;
    }
    int convert(int n, int i)
    {
        return ((n & (1LL << i)) > 0);
    }
    
    void insert(int n)
    {
        TrieNode *curr = this;
         for (int i = 50; i >= 0; i--)
        {
            int ind = convert(n, i);
            if (!curr->child[ind])
                curr->child[ind] = new TrieNode();
            curr = curr->child[ind];
            curr->pre++;
        }
    }
    int query(int n)
    {
        int res = 0;
        TrieNode *curr = this;
        loop(i)
        {
            int ind = convert(n, i);
            if (curr->child[ind])
            {
                curr = curr->child[ind];
            }
            else if (curr->child[1 - ind])
            {
                curr = curr->child[1 - ind];
                res += (1LL << i);
            }
            else
                return INF;
        }
        return res;
    }
};

ll CP_with_VKD(ll n)
{
  
    vector<int> a(n), ans(n, INF);
    vector<vector<int>> g(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
         v--;
          g[v].push_back(u);
        g[u].push_back(v);
       
    }
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<set<int>> got(n);
    vector<TrieNode<2>> tries(n);
    auto dfs = [&](int u, int par, const auto &dfs) -> void
    {
        for (int v : g[u])
        {
            if (v != par)
            {
                dfs(v, u, dfs);
                ans[u] = min(ans[u], ans[v]);
                if (got[v].size() > got[u].size())
                {
                    swap(got[v], got[u]);
                    swap(tries[v], tries[u]);
                }
                for (int x : got[v])
                {
                    ans[u] = min(ans[u], tries[u].query(x));
                    got[u].insert(x);
                    tries[u].insert(x);
                }
            }
        }
        ans[u] = min(ans[u], tries[u].query(a[u]));
            tries[u].insert(a[u]);
        got[u].insert(a[u]);
    
    };
    dfs(0, -1, dfs);
    for (int i = 0; i < n; i++)
        if(ans[i]==INF) cout<<"-1"<<" ";
        else  cout<<ans[i]<<" ";
        nextline
   //      cout << (ans[i] == INF ? -1 : ans[i]) << ' ';
   //  cout << '\n';
    return 0;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        ll n; cin>>n;
        CP_with_VKD(n);
    }
    return 0;
}

/*
Notes-
1. Make sure you are using signed main with #define int long long.
2. Code is always submitted and checked for AC before submitting.
3. Run the EXACT same code locally on sample test cases, before claiming that the code is not working.
*/

/* Tips to escape plagiarism checker
1. Declare extra variables.
2. Use for loops in between the codes that do nothing and do not take much time.
3. Declare functions for small tasks.
4. Change vectors to arrays and vice-versa.
5. Have a long personalized template.
6. Replace conditional operators with if-statements and vice-versa.
7. Reorder lines wherever possible.
*/

/* join for solutions on telegram t.me/cccfsolutions (DM @cppenjoyer)
Div2 A,B free (CF)
 Non-Div1 problems free (CC)
 A,B free (LC)
 */
//NTA