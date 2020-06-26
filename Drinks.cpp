//https://codeforces.com/contest/200/problem/B
#include<iostream>
#define ll long long
#include<string.h>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<unordered_map>
using namespace std;


int main()
{
float n;
cin>>n;
int a=int(n);
double ans=0;
int *arr=new int[a];

for(int i=0;i<n;i++)
{
  cin>>arr[i];
  ans=ans+(1.0*arr[i])/100;
}
ans=(ans/n)*100;
cout<<setprecision(12)<<ans;
  return 0;
}