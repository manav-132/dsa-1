#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]*=arr[i];
    }
    int index=0;
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]<=arr[mid-1]&&arr[mid]<=arr[mid+1]){
           index=mid;
           break;
        }
        else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid-1]){
            h=mid-1;
        }
        else l=mid+1;
    }
    int p=index-1;
    int a[n];
    for(int i=0;i<n;){
        if(p>=0||index<=n-1){
        if(arr[index]<=arr[p]){
            a[i++]=arr[index++];
        }
        else{
        if(p>=0)
        a[i++]=arr[p--];
        else a[i++]=arr[index++];
        }
    }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}