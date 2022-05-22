//                                   Life Goes on and you Learn from it !!  -Steve Jobs
#include<bits/stdc++.h>
using namespace std;
#define testLoop int t; cin>>t; while(t--)
#define ll  long long int
#define loop(k,b,a) for(int k=b;k<a;k++)
#define rloop(k,b,a) for(ll k=b;k>a;k--)
#define ff first
#define ss second
#define pb push_back
const long long INF = 10e9;
const long long MOD = 1e9 + 7;
const int MAXN = 2e5;
#define beg2end(count) count.begin(),count.end()
#define vl  vector<int>
#define pl pair<ll,ll>
#define ml map<int,int>
#define NO_OF_CHARS 256
#define print(s) cout<<s<<endl;
#define lineprint(s) cout<<s<<" "
#define nextline cout<<endl;

int find_ele (ml m,int x){
    int ret;
    for(auto itr = m.find(x); itr != m.end();itr++){
                ret =  itr->first;
    }
    return ret;
}

void CPwithVKD() {

int n; cin>>n;
int v[n];

loop(i,0,n){
    cin>>v[i];
    
}


int ans = 0;
ml hash;
loop(i,0,n){
    int len = v[i];
    int si = (i-len+1 >=0) ? i-len+1:0;

    if((hash.find(v[i]) !=hash.end()) && (find_ele(hash,v[i])) >=si)  si = (find_ele(hash,v[i])) +1;


    int ei = (si+len-1 >= n) ?n-1:si+len-1;

    if(ei-si+1 != len || si>ei) continue;
    ans +=min(i-si+1,n-ei);
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

