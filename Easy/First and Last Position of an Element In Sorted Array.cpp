#include <bits/stdc++.h> 

int firstPosition(vector<int>& arr, int n, int key){
    int start = 0;
    int end = n-1;
    int mid;
    mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }

        else if (key>arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end - start)/2;

    }
    return ans;
}

int lastPosition(vector<int>& arr, int n, int key){
    int start = 0;
    int end = n-1;
    int mid;
    mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start=mid+1;
        }

        else if (key>arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }

        mid = start + (end - start)/2;

    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> p;
    p.first = firstPosition(arr, n, k);
    p.second = lastPosition(arr, n, k);
    
    return p;
}
