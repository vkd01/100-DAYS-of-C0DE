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

bool isPalindrome(ll k){
    string s = to_string(k);
    ll p1=0, p2 = s.size()-1;
    while(p1<p2){
        if(s[p1]!=s[p2]) return false;
        p1++,p2--;
    } 
    return true;
}
void CPwithVKD() {


ll n; cin>>n;
string s; cin>>s;


if(s[0]=='9') {
     string ans= "";

     //string trmp = "";
    //  loop(i,0,s.size()) temp+='1';
    //  temp+='1';
    //  ll a = stoi(s);
    //  ll fuck = stoi(temp);
    //  print(fuck-a) 

    ll a = 11-(s[n-1]-'0');
    ll carry = 1;
    if(a>=10) {
        a-=10;
        carry = 0;
    }
    ans += (char)('0' + a);

    rloop(i,n-1,0) {
        ll var = s[i]-'0';

        var+=carry;
        if(var>8) {
            ans+=(char)('0' + (18-var));
            carry = 1;
        }
        else {
            ans+=(char)('0'+(8-var));
            carry = 0;
        }
    }
    reverse(beg2end(ans));
    print(ans)

} 


else {
    loop(i,0,n) cout<<9-(s[i]-'0');
    nextline
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