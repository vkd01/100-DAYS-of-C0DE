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


bool isPowerofTwo(ll x) {
  return x && (!(x & (x - 1)));
}

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

void CPwithVKD() {

  ll x, y; cin >> x >> y;

// BOUNDARY CONDITIONS
  if (x == y) {
    cout << x << endl;
    return;
  }
  if (x == 0 || y == 0) {
    print("-1") return;
  }

/////////////////////////////////////////////////

//  if(x>y) {
//      ll count = 0,fuck;
//      if(x/y <2 ) fuck = 3;
//      else    fuck = ceil(x/y);

//     if(!(isPowerofTwo(fuck))) {
//    bool flag = true;
//    ll temp;
//         while(x-y <x) {
//           x--,y--;
//           count++;

//           if(y/x < 2) temp =3;
//           else  temp = ceil(y/x);
//           if(isPowerofTwo(temp)) {
//             print(x+count+(ll)log2(x/y))
//             flag = false;
//             return;
//           }

//         }
//         if(flag==true) print("-1")

//     }
//      else {
//      print(x+(ll)log2(x/y))
//     }

// }



// else if(y>x) {
//      ll count = 0,fuck;
//      if(y/x <2 ) fuck = 3;
//      else    fuck = ceil(y/x);

//     if(!(isPowerofTwo(fuck))) {
//    bool flag = true;
//    ll temp;
//         while(y-x <y) {
//           x--,y--;
//           count++;

//           if(y/x < 2) temp =3;
//           else  temp = ceil(y/x);
//           if(isPowerofTwo(temp)) {
//             print(y+count+(ll)log2(y/x))
//             flag = false;
//             return;
//           }

//         }
//         if(flag==true) print("-1")

//     }
//      else {
//      print(y+(ll)log2(y/x))
//     }

// }



// if(x>y){
// ll ans = 0;
// ll u = x,v=y;
// while(v<u) {
//   v*=2;
// }
// // print(v)

// ll diff = v-u;
// ans = diff + 1 + (x-diff);
// print(ans)
// }


// else if(x<y){
// ll ans = 0;
// ll u = x,v=y;
// while(u<v) {
//   u*=2;
// }
// // print(v)

// ll diff = u-v;
// ans = diff + 1 + (y-diff);
// print(ans)
// }



if(x>y){
ll ans = 0;
ll u = x,v=y;
while(v<u) {
  v*=2;
  ans++;
}
if(v>=u) {
v/=2;
ans--;
}
//print(v)

ll diff = v-u;
ans +=  1 + (v-diff);
print(ans)
}


else if(x<y){
ll ans = 0;
ll u = x,v=y;
while(u<v) {
  u*=2;
  ans++;
}
if(u>=v) {
u/=2;
ans--;
}
// print(v)

//ll diff = v-u;
ans += 1 + (v);
print(ans)
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