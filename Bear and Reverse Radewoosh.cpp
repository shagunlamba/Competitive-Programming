//https://codeforces.com/contest/658/problem/A
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
 int n;
 cin>>n;
 int c;
 cin>>c;

 int *p= new int[n];
 for(int i=0;i<n;i++)
  cin>>p[i];
 
 int *t= new int[n];
 for(int i=0;i<n;i++)
  cin>>t[i];

 int lscore=0;
 int rscore=0;
 
 //limak
 int time=0;
 for(int i=0;i<n;i++)
 { 
   time=time+t[i];
   lscore=lscore+max(0,(p[i]-c*time));
 }
 
 time=0;
 for(int i=n-1;i>=0;i--)
 {
   time=time+t[i];
   rscore=rscore+max(0,(p[i]-c*time));
 }
 
if(lscore>rscore)
cout<<"Limak";
else if(lscore<rscore)
cout<<"Radewoosh";
else
 cout<<"Tie";
return 0;
}