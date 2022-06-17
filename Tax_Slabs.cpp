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
const int MAXN = 2e5;


bool isPowerofTwo(ll x) {
return x&&(!(x&(x-1)));
}

ll gcd(ll a, ll b) {
if (b == 0)
return a;
else
return gcd(b, a % b);
}

void CPwithVKD() {



long long n1,n2;
       cin >> n1 >> n2;
       if(n1>n2) swap(n1,n2);
       if(n1==0)
       {
        if(n2==0) cout << 0 << "\n";
        else cout << -1 << "\n";
        return;
       } 
        long long res = MAXN;
        long long p = n2-n1;
        long long ans1=0;
        if(p==0)
        {
            cout << n2 << "\n"; return;
        
        while(abs(n2-n1)>n1)
        {
            if(n2<n1)
                n2*=2;
            else
                n1*=2;
            ans1++;
            if(n2==n1)
            {
                cout << n2+ans1 << "\n"; return;
            }
        }
        if(n1>n2)swap(n1,n2);
        p=n2-n1;
        long long ans2 = n1-p;
        n2=n2-ans2;
        res=min(res,ans1+ans2+1+n2);
        cout << res << "\n";

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