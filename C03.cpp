#include<bits/stdc++.h>
using namespace std ;
bool symmetrical(int i){
    string s = to_string(i);
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(s[i]!=s[len-1-len]) return false;
    }
    return true;


}
int main(){
    /// so doi guong
    int a, b;
    cin >> a >> b;
    int res = 0 ;
    for(int i = a; i <= b; i++){
        if(symmetrical(i)) res++;
    }
    cout << res ;
    return 0;
}
