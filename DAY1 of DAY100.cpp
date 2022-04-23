
//Problem Link : https://www.codechef.com/APRIL222D





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



void CP_with_VKD() {
    ll n, c = 0; cin >> n;
    ll arr[n];
    loop(i, 0, n) {
        cin >> arr[i];
    }
    bool flag = false;
    loop(i, 0, n) {
        if (arr[i] > arr[i + 1]) {
            if (flag == false ) c++;
            else if (flag == true) break;
        }

    }

    loop(i, 0, n) {
        if (arr[i] == arr[i + 1]) {
            flag = true;
        }
    }
    if (c > 1) cout << "NO" << endl;
    else cout << "YES" << endl;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    testLoop{

        CP_with_VKD ();

    }
    return 0;
}