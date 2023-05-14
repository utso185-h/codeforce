#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter element number"<<endl;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"enter the key value to search"<<endl;
    int x;
    cin>>x;
    sort(arr,arr+n);
    int low = arr[0],high = arr[n-1];

    while(low<=high) {
        int mid = low+(high - low)/2;
        if(arr[mid]==x) cout<<x;
        if(arr[mid]<x) low = mid+1;
        else high =mid-1;


    }


return -1;


}
