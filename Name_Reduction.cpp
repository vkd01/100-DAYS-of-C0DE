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
#define unm(x,y)                                                    unordered_map<x,y>
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 2e5;


void CPwithVKD() {

string a,b; cin>>a>>b;
string parents = a+b;

ll n; cin>>n;
string child = " ";
loop(i,0,n){
    string s; cin>>s;
    child += s;
}
// sort(beg2end(child));
// sort(beg2end(parents));

unm(char,ll) m;
loop(i,0,child.size()){
    m[child[i]]++;
}

unm(char,ll) mp2;
loop(i,0,parents.size()){
    mp2[parents[i]]++;
}


bool flag = true; 
loop(i,0,child.size()-1) {
// cout<<child[i]<<" ";
// nextline
mp2[child[i+1]]--;
if(mp2[child[i+1]]<0) {
    flag = false;
    break;
}

}


if(flag==true) print("YES")
else print("NO")




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