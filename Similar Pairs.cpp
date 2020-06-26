//https://codeforces.com/contest/1360/problem/C
#include<iostream>
#include<limits>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<math.h>
#include<iomanip>  
#include<deque> 
#include<string> 
#include<string.h>
#include<unordered_map>
#include<utility>
#define ll long long
#define tc(t) long long t; cin >> t; while(t--)
#define V vector
#define pb push_back
#define UM unordered_map
#define IT iterator
#define F first
#define S second
#define PQ priority_queue
#define _I ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
const ll INF = INT_MAX;
const ll _INF= INT_MIN;
using namespace std;



int main()
{
_I

tc(t)
{
 int n;
 cin>>n;
 int *arr= new int[n];
 for(int i=0;i<n;i++)
 {
   cin>>arr[i];
 }
 int even=0;
 int odd=0;
 for(int i=0;i<n;i++)
 {
   if(arr[i]%2==0)
   {
     even++;
   }
   else
   {
     odd++;
   }
  //  cout<<arr[i]<<endl;
 }
//  cout<<odd<<even<<endl;
 if(even%2==0 && odd%2==0)
 {
   cout<<"YES"<<endl;
   continue;
 }

 sort(arr,arr+n);
 bool flag=false;
 int j=0;
 while(j<n)
 {
   if(arr[j]-arr[j-1]==1 )
   {
     flag=true;
     break;
     j++;
   }
   
   j++;
 }
  
 if(flag==true)
 {
   cout<<"YES"<<endl;
 }
 else
 {
   cout<<"NO"<<endl;
 }

}

return 0;
}