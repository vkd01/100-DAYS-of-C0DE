#include<bits/stdc++.h>
#define ll long long int
#define print(s) cout<<s<<endl;
using namespace std;




void shiv(){
ll n;
cin>>n;

vector<ll>arr(32);
for(int i=0;i<n;i++){
    ll a;
    cin>>a;
    ll s=0;
    while(a>0){
        if(arr[s]==0) arr[s]=a%2;
    
                    a=a/2;
            s++;
    }
}
ll sum=0;
for(int i=0;i<32;i++){
    sum+=arr[i];
}
print(sum)

}
















int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--){
        shiv();
    }
    
    // cout<<"Hello World";

    return 0;
}