//                                   Life Goes on and you Learn from it !!  -Steve Jobs
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


void CPwithVKD() {
ll c,d; cin>>d>>c;
ll a1,a2,a3,b1,b2,b3;
cin>>a1>>a2>>a3>>b1>>b2>>b3;
ll day1 = a1+a2+a3;
ll day2 = b1+b2+b3;

if(  (day1 >=150) && (day2>=150)) {
    if(2*d > c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

else if(   ( (day1 >=150) && (day2 <150))  || ( (day2 >=150) && (day1 <150) )  ) {
    if(d>c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
else if ((day1 <150) && (day2 <150))  cout<<"NO"<<endl;


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

