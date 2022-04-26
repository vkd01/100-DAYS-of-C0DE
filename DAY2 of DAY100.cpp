
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



void DAY_2_of_100() {


    /*
        //Problem 5 code : RECNDSTR (Codechef)
        string s; cin >> s;
        string ls = " ", rs = " ";


        //CREATING L(S)
        loop(i, 1, s.length()) {
            ls += s[i];
        }
        ls += s[0];

        //CREATING R(S)
        rs += s[s.length() - 1];
        loop(i, 0, s.length() - 1) {
            rs += s[i];
        }

        if (ls == rs) cout << "YES" << endl;
        else cout << "NO" << endl;
    */

    /*
    //Problem 4 code : BALLOON (Codechef)
    ll n; cin >> n;
    ll arr[n];
    ll index = 0, x, count = 0;
    loop(i, 0, n) {
        cin >> arr[i];
    }

    loop(i, 0, n) {
        if (arr[i] >= 1 && arr[i] <= 7) {
            count++;
        }
        if (count == 7) {
            index = i;
            break;
        }
    }
    cout << index + 1 << endl;

    */

    /*
        //Problem 3 code : STUDVOTE (Codechef)
        ll a, n, k, c = 0; cin >> n >> k;
        vl v(n, 0);
        loop(i, 0, n) {
            cin >> a;
            if (a == i + 1) v[i] -= 100;
            else v[a - 1]++;
        }
        loop(i, 0, v.size()) {
            //  cout << v[i] << " ";
            if (v[i] >= k) c++;
        }
        // cout << endl;
        cout  << c << endl;
    */


    /*
     Problem 2 Code : SC31 (Codechef)

    ll n, c = 0; cin >> n;
    ll arr[n];
    loop(i, 0, n) {
        cin >> arr[i];
    }

    bool flag = true;

    loop(i, 0, n - 1) {
        if (arr[i] != arr[i + 1]) {
            if (flag == true) {
                flag = false;
                c += 2;
            }
            else {
                c++;
            }
        }
        else flag = true;
    }
    cout << c << endl;
    */

    /*
    Problem 1 Code : AVG (Codechef)

        ll  n, k, v, sum = 0;
    cin >> n >> k >> v;
    ll arr[n];
    loop(i, 0, n) {
        cin >> arr[i];
        sum += arr[i];
    }
    ll x = (v * (n + k) - sum);

    //cout << x << " ";


    if (x > 0 && x % k == 0) {
        cout << x / k << endl;

    }
    else cout << "-1" << endl;
    */



}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    testLoop{

        DAY_2_of_100();

    }
    return 0;
}