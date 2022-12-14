#include <bits/stdc++.h> 

bool isPossible(int n, int m, vector<int> time,unsigned long long int mid){
  unsigned long long int days=1;
  unsigned long long int timecount=0;
   for(int i=0;i<m;i++){
       if(time[i]+timecount<=mid){
           timecount+=time[i];
       }
       else{
           days++;
           if(days>n || time[i]>mid){
               return false;
           }
           timecount=time[i];
       }
   }
   return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    
    unsigned long long int start=0;
   unsigned long long int sum=0;
   for(int i=0;i<m;i++){
       sum+=time[i];
   }
   unsigned long long int end=sum;
   unsigned long long int ans=-1;
   unsigned long long int mid=start+(end-start)/2;
   while(start<=end){
       if(isPossible(n,m,time,mid)){
           ans=mid;
           end=mid-1;
       }
       else{
           start=mid+1;
       }
       mid=start+(end-start)/2;
   }
   return ans;
}
