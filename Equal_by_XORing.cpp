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
#define convert_tolower(s)                                    transform(beg2end(s), s.begin(), ::tolower);
#define convert_toupper(s)                                   transform(beg2end(s), s.begin(), ::toupper);
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 2e5;


bool isPowerofTwo(ll x) {
return x&&(!(x&(x-1)));
}
ll  setBitNumber(ll n)
{
    if (n == 0)
        return 0;
 
    ll msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}
string decToBinary(ll n)
{
    string s="";
    for (ll i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) s+='1';
        else s+='0';
    }
    return s;
}

ll gcd(ll a, ll b) {
if (b == 0)
return a;
else
return gcd(b, a % b);
}

void CPwithVKD() {

ll a,b,n; cin>>a>>b>>n;
ll x = a^b;
// print(x)
ll sm = ((n-1)*((n-1)+1))/2;


if(a==b) {
    print("0") return;
}
if(x>sm) {
    print("-1") return;
}
else if(x<n) {
    print("1") return;
}


// else {
//     ll bits_n = 0,bits_x=0;
//     string s1 = decToBinary(n);
//     loop(i,0,32) if(s1[i]=='1') bits_n++;

//     string s2 = decToBinary(x);
//     loop(i,0,32) if(s2[i]=='1') bits_x++;

//     if(bits_n == bits_x) {
//     if(isPowerofTwo(n)) {
//         print("-1");
//     }
//     else print("2")
//     }
//     if(bits_n != bits_x) print("-1")
// }




ll s_x = setBitNumber(x);
ll s_n = setBitNumber(n);

if(s_x == s_n) {
    if(isPowerofTwo(n))  print("-1")

    else print("2")
}
else print("-1")



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