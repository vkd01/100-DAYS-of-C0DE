
#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll count(ll arr[],ll n)
{
  ll sum=0;
  for(ll i=0;i<n;i++)
  {
    if(arr[i]%2) sum++;
  }
  return sum;
}

ll onescnt(ll arr[],ll n)
{
  ll sum=0;
  for(ll i=0;i<n;i++)
  {
      
    if(arr[i]==1) sum++;
  }
  return sum;
}

ll twosscnt(ll arr[],ll n)
{
  ll sum=0;
  for(ll i=0;i<n;i++)
  {
      
    if(arr[i]==2) sum++;
  }
  return sum;
}

void CPwithVKD() {
ll n; cin>>n;
ll arr[n];
ll odd_counts= 0,twos_count=0,ones_count=0,sum_except_ones=0,count_except_ones=0;


loop(i,0,n){
     cin>>arr[i];
     if(arr[i]==1) ones_count++;
     else {
        if(arr[i]==2) twos_count++;
        
        sum_except_ones+=arr[i];
        count_except_ones++;
        if(arr[i]&1) odd_counts++;
     }
}

// if(ones_count==1) {
//     if(odd_counts%2==0) {
//         print("CHEF") return;
//     }
// }

if(ones_count==1){
    if(odd_counts%2==0) {
        print("CHEF") return;
    }
    if(twos_count==0){
        print("CHEFINA") return;
    }
    sum_except_ones-=2;
    count_except_ones--;
    if((sum_except_ones-count_except_ones)&1) {
        print("CHEFINA") return;
    }
    else {
        print("CHEF") return;
    }
}



else if(ones_count>1){
    if((sum_except_ones-count_except_ones)&1) {
        print("CHEF") return;
    }
    else {
        print("CHEFINA") return;
    }
}
if(odd_counts&1) {
    print("CHEF") return;
}
else {
    print("CHEFINA") return;
}







} 


int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int t; cin>>t;
    while(t--) solve();
}