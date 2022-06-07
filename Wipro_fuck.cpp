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


void CPwithVKD() {

string s; cin>>s;
string ans;



loop(i,0,s.size()-1){
    // IF Alphabets are same

    if(   (s[i]==s[i+1])  && s[i+2]==':') {
         // print(s[i])
         
         char temp = s[i] - 32;
        ans+=temp;    
    }

    // IF Alphabets are Different

       else if(   (s[i]!=s[i+1])  && s[i+2]==':') {
         // print(s[i])
         
         int x1 = s[i] - 'a' + 1;
         int x2 = s[i+1] - 'a' + 1;
         char var;
         if(x1>x2)  var = (x1-x2) + 64;
         else if(x1<x2) var = (x2-x1) + 64;
        ans+=var;
      

    }
}


if(s[s.size()-1] == s[s.size()-2]) {
    char temp = s[s.size()-1] - 32;
    ans+=temp;
}


print(ans)

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