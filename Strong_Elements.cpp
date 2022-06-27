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
#define rloop(k,b,a)                                               for(ll k=b;k>=a;k--)
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
ll lcm(ll a, ll  b)
{
    return (a*b)/gcd(a,b);
}

static bool comp(const vector<ll>& vec1, const vector<ll>& vec2){
return vec1[1] < vec2[1];
}



void FillPrefixSuffix(ll prefix[], ll arr[], ll suffix[], ll n){
    prefix[0] = arr[0];
   loop(i,1,n)  prefix[i] = gcd(prefix[i-1], arr[i]);
    suffix[n-1] = arr[n-1];
   rloop(i,n-2,0) suffix[i] = gcd(suffix[i+1], arr[i]);
}
ll GCDoutsideRange(ll l, ll r, ll prefix[],ll suffix[], ll n){
    if (l==0)
        return suffix[r+1];
    if (r==n-1)
        return prefix[l-1];
    return gcd(prefix[l-1], suffix[r+1]);
}

void CPwithVKD() {

ll n; cin>>n;
ll arr[n];
map(ll,ll) m;
loop(i,0,n) {
    cin>>arr[i];
    m[arr[i]]++;
}
//sort(arr,arr+n);
ll gc = 0;
loop(i,0,n) {
    gc = gcd(gc,arr[i]);
}
//print(gc)
ll ans = 0;
if(gc>1) {
    print(n) return;
}

//CASE FOR gcd = 1

/*
************************************
Logic : Find the GCD of numbers except the ith number in the array... if the value of GCD > 1 then that number will be Strong

      Time Complexity : O(n^2)

      */
// loop(i,0,n){
//     ll fuck=0;
//      loop(j,0,n){
//         if(i!=j) fuck=gcd(fuck,arr[j]);

//      }
//      if(fuck!=1) ans++;
// }
// print(ans)

ll prefix[n],suffix[n];

FillPrefixSuffix(prefix,arr,suffix,n);
loop(i,0,n){
    if(GCDoutsideRange(i,i,prefix,suffix,n) != 1) ans++;
}
print(ans)
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