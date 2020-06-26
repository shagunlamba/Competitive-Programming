//https://codeforces.com/contest/144/problem/A
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
 {  
    int x;
    cin>>x;
    v.push_back(x);
 }

int max=v[0];
int maxindex=0;
int minindex=v.size()-1;
int min=v[minindex];

for(int i=0;i<n;i++)
{
  if(v[i]>max)
  {
    max=v[i];
    maxindex=i;
  }
  else if(v[i]<=min)
  {
    min=v[i];
    minindex=i;
  }

}

if(maxindex>minindex)
{
  int ans=(maxindex-0)+(v.size()-1-minindex)-1;
  cout<<ans;
}
else
{
   int ans=(maxindex-0)+(v.size()-1-minindex);
   cout<<ans;
}
return 0;
}