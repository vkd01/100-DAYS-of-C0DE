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
#define vc                                                              vector<char>
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
void fuckedup(ll n,ll x) {
            vc vec(n);
        char lets = 'a';
        ll i = 0,j=n-1;
        ll val = 1;
        while(i<=j){
            if(val<=x) {
                vec[i]=lets;
                vec[j]=lets;
                lets++;
                val++;
            }
            else {
                lets='a';
                vec[i]=lets;
                vec[j]=lets;
                lets++;
                val++;
            }
            i++,j--;
        }
        for(auto itr : vec) cout<<itr;
        nextline
}
void ifnisodd(ll n, ll x){
        ll var = n/2;
    if(x>var+1) print("-1")
    else {
        vc v(n);
        char lets = 'a';
        ll p1=0,p2=n-1;
        ll val = 1;
        while(p1<=p2) {
            if(p1<p2 && val <=x) {
                v[p1]=lets;
                v[p2]=lets;
                lets++;
                val++;
            }
            else if(p1<p2&&val>x) {
                lets = 'a';
                v[p1]=lets;
                v[p2]=lets;
                lets++,val++;
            }
            else if(p1==p2 && val<=x){
                v[p1]=lets;
            }
            else if(p1==p2&&val>x){
                lets='a';
                v[p1]=lets;
            }
            p1++;p2--;
        }
        for(auto itr : v) cout<<itr;
       nextline
        v.clear();
    }
}
void CPwithVKD() {

ll n,x; cin>>n>>x;
string s1 = "",s2="";
// // if(n==1 && x==1)  print("a")
// // else if(n==2 && x==1) print("aa")
// // else if(n==2 && x==2) print("ab")
// // else if(n%2==0 && x>(n/2)) print("-1")

// if(x==1) {
//     for(int i=0;i<n;i+=2){
//         s1+='a';
//         if(i+1<n) s1+='a';
//     }
//     print(s1)
    
// }




// else if(n%2==1 && x> ((n/2 )+ 1)) print("-1")

// else {
//     ll fuck = 0;
//     for(int i =0;i<n;i+=2) {
//         s1 += ('a' + (fuck%x)) ;
//         if(i+1 <n) {
//             s2+=('a'+(fuck%x));
//         }
//         fuck++;
//     }
//     reverse(beg2end(s2));
//     print(s1 +""+s2)
// }

if(x>n) print("-1")
else if(x==1 &&n==1) print("a")
else if(n&1){
ifnisodd(n,x);
   
}

else {
    ll temp =n/2;
    if(x>temp) print("-1")
    else fuckedup(n,x);
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