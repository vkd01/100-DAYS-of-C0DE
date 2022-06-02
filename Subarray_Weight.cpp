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
#define ml                                                             map<ll,ll>
#define NO_OF_CHARS                                      256
#define print(s)                                                      cout<<s<<endl;
#define lineprint(s)                                                cout<<s<<" "
#define nextline                                                     cout<<endl;
#define BIN(a,b)                                                    (a<<b)
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 5e5 + 5;

vl v(MAXN);
ll  set_max[MAXN], set_min[MAXN], suff_max[MAXN],
 suff_min[MAXN], ind[MAXN], suff_min_sum[MAXN], set_min_sum[MAXN];


 ll fucked_up(ll l,ll m,ll r ){
     ll res = 0;
             for (int i = m, j1 = m, j2 = m; i >= l; i--)
    {
        while (j1 + 1 <= r && set_max[j1 + 1] < suff_max[i])
            j1++;
        while (j2 + 1 <= r && set_min[j2 + 1] > suff_min[i])
            j2++;
        int allowed = min(j1, j2) - m;
        res += allowed * abs(ind[suff_max[i]] - ind[suff_min[i]]);
    }
    return res;
 }

ll CPwithVKD(ll l,ll r) {
 if(l==r) return 0;
 ll m = (l+r)/2;


     loop(i,m+1,r+1) {
        set_max[i] = v[i], set_min[i] = v[i];
        set_min_sum[i] = ind[v[i]];
        if (i - 1 > m)
        {
            set_max[i] = max(set_max[i - 1], v[i]);
            set_min[i] = min(set_min[i - 1], v[i]);
            set_min_sum[i] = set_min_sum[i - 1] + ind[set_min[i]];
        }
    }





   // for (int i = m; i >= l; i--)



    rloop(i,m+1,l) 
    {
        suff_max[i] = v[i], suff_min[i] = v[i];
        suff_min_sum[i] = ind[v[i]];
        if (i + 1 <= m)
        {
            suff_max[i] = max(suff_max[i + 1], v[i]);
            suff_min[i] = min(suff_min[i + 1], v[i]);
            suff_min_sum[i] = suff_min_sum[i + 1] + ind[suff_min[i]];
        }
    }


    ll res = 0;

  res = fucked_up(l,m,r);


        for (int i = m + 1, j1 = m + 1, j2 = m + 1; i <= r; i++)
    {
        while (j1 - 1 >= l && suff_max[j1 - 1] < set_max[i])
            j1--;
        while (j2 - 1 >= l && suff_min[j2 - 1] > set_min[i])
            j2--;
        int allowed = m + 1 - max(j1, j2);
        res += allowed * abs(ind[set_max[i]] - ind[set_min[i]]);
    }


        for (int i = m, j1 = m, j2 = m + 1; i >= l; i--)
    {
        while (j1 + 1 <= r && set_max[j1 + 1] < suff_max[i])
            j1++;
        while (j2 <= r && set_min[j2] > suff_min[i])
            j2++;
        if (j2 <= j1)
        {
            res += set_min_sum[j1];
            if (j2 - 1 > m)
                res -= set_min_sum[j2 - 1];
            res -= (j1 - j2 + 1) * ind[suff_max[i]];
        }
    }

        for (int i = m + 1, j1 = m + 1, j2 = m; i <= r; i++)
    {
        while (j1 - 1 >= l && suff_max[j1 - 1] < set_max[i])
            j1--;
        while (j2 >= l && suff_min[j2] > set_min[i])
            j2--;
        if (j1 <= j2)
        {
            res -= suff_min_sum[j1];
            if (j2 + 1 <= m)
                res += suff_min_sum[j2 + 1];
            res += (j2 - j1 + 1) * ind[set_max[i]];
        }
    }

    return res + CPwithVKD(l,m) + CPwithVKD(m+1,r);


} 


int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

testLoop{
  ll n; cin>>n;
  loop(i,0,n){
      cin>>v[i];
      v[i]--;
      ind[v[i]]=i;
  }
  print(CPwithVKD(0,n-1))


}

return 0;

}