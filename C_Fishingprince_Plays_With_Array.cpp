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

static bool comp(const vector<ll>& vec1, const vector<ll>& vec2){
return vec1[1] < vec2[1];
}

const int N = 1e5;
vector<int>adj[N];
int visited[N];

void DFS(int v){
int parent = v;
visited[parent] = 1;
for(int child: adj[parent]){
if(visited[child])continue;
DFS(child); } }

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
vector<int>res;
int visited[100001] = {0};
queue<int>q;
q.push(0);
visited[0] = 1;
while(!q.empty()){
int parent = q.front();
q.pop();
res.push_back(parent);
for(int child: adj[parent]){
if(visited[child])continue;
q.push(child);
visited[child] = 1;
}}
return res;
}
void CPwithVKD() {

ll n; cin>>n;
   ll res = 0; 
    vector<vl> a; 
    ll w = sqrt(n); 

    loop(i,1,w+1){ 
        ll bssquare = n - i*i; 
        ll b = sqrt(bssquare); 
        if(b*b == bssquare) { 
            a.push_back({i,b}); 
        } 
    } 

    vector<vl> b,c; 


    for(auto i:a) { 
        auto it = find(b.begin(),b.end(),i); 
        if( it == b.end()) { 
            c.push_back(i); 
            b.push_back({i[1],i[0]});    
        } 
    } 




      for(auto i:c){ 
        ll p=min(i[0],i[1]); 
        ll q=max(i[0],i[1]); 
        if(i[0] == 0 || i[1] == 0) res++; 
        else{ 
            for(int j = 1;j<q;j++){ 
                int a = j; 
                int b = a+p; 
                int g = __gcd(a,b); 
                int l = (a*b)/g; 
                if((g+l) == q) res+=2; 
            } 
        } 
    } 


print(res)




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