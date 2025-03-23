#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j, len, n, m;
    char x[100], y[100];
    cin>>x;
    len = strlen(x);
    for(i=0; i<len; i++){
        y[i] = x[len-i-1];
    }
    for(i=0; i<len; i++){
        if(x[i] != y[i]){
            cout<< "NO\n";
            return 0;
        }
    }
    cout<< "YES\n";
}