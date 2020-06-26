//https://codeforces.com/contest/490/problem/A
#include<iostream>
#include<string.h>
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

  int *arr= new int[n+1];

  unordered_map<int,int>m;
  m[1]=0;
  m[2]=0;
  m[3]=0;
  queue<int> indexfor1;
  queue<int> indexfor2;
  queue<int> indexfor3;
 
  for(int i=1;i<=n;i++)
  {
    cin>>arr[i];
    if(arr[i]==1)
     indexfor1.push(i);
    if(arr[i]==2)
     indexfor2.push(i);
    if(arr[i]==3)
     indexfor3.push(i);

    if(m.count(arr[i])>0)
     m[arr[i]]++;
  }
  


 unordered_map<int,int>::iterator it= m.begin();
 int min=it->second;
 while(it!=m.end())
 { 
   //cout<<"Key"<<it->first<<" "<<it->second;
   if(min > it->second)
    min=it->second;
   it++;
 }

 if(min==0)
 {
   cout<<0;
   return 0;
 }
 else
 {
   cout<<min<<endl;
   int count=0;
   while(count!=min)
   {
     int team1= indexfor1.front();
     indexfor1.pop();

     int team2= indexfor2.front();
     indexfor2.pop();

     int team3= indexfor3.front();
     indexfor3.pop();

     cout<<team1<<" "<<team2<<" "<<team3<<endl;
     count++;
   }

 }

  return 0;
}