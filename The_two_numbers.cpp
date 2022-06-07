#include"bits/stdc++.h" 
using namespace std;
#define ll long long int
#define testloop ll t; cin>>t; while(t--)
#define loop(k,a,b) for(ll k=a; k<b;k++)


void AMAN() {

ll n; cin>>n;
if(n==2) {
    cout<<"0"<<endl;
    
}

else if(n&1) cout<<(  (n/2)*(n/2 +1))  -1 <<endl;

else {
    if((n/2)%2==0)  cout<<(   (n/2 - 1)* (n/2 +1) ) -1  <<endl; 
    else cout<<(    (n/2 - 2)* (n/2 +2)  )-1 <<endl;
}



}


int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


testloop {

AMAN();


}


return 0;

}