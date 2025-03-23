#include<iostream>

using namespace std;
int main(){
    int i, j, n, m ;
    cin>>n>>m;
    int  a[n][m], num;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    cin>>num;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i][j] == num){
                cout<< "will not take number\n";
                return 0;
            }
        }
    }
    cout<< "will take number\n";
}