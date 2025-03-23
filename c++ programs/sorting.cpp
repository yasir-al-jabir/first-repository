#include<iostream>
using namespace std;
int main(){
    int n,i,j,lower;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        lower=arr[i];
        for(j=i+1;j<n;j++){
            if(arr[j]<lower){
                lower=arr[j];
                swap(arr[i],arr[j]);
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}