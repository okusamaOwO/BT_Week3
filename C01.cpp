#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool seen[n]= {false};
    for(int i = 0; i < n; i++){
        seen[a[i]]=true;
        if(seen[a[i]]){
            cout << "yes";
            return 0 ;
        }
    }
    cout <<"no";
    return 0 ;
}
