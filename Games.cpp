//https://codeforces.com/contest/268/problem/A
#include<iostream>
#include <string>
#include<queue>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;


int main()
{
  int n;
  cin>>n;

  int **arr= new int*[n];
  for(int i=0;i<n;i++)
  {
    arr[i]=new int[2];
    for(int j=0;j<2;j++)
     {
       cin>>arr[i][j];
     }
     cout<<endl;
  }
  
  int count=0;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
     if(arr[i][0]==arr[j][1])
      count++;
    if(arr[i][1]==arr[j][0])
     count++;
    }
  }
  cout<<count;


  return 0;
}