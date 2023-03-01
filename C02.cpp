#include<bits/stdc++.h>
using namespace std;
bool symmetrical(string s){
    int len = s.length();
    for(int i = 0; i <= len/2; i++){
        if(s[i] != s[len-1-i]) return false;
    }
    return true ;
}
int main(){
    string s ;
    getline(cin, s);
    /// kiem tra xau co doi xung hay khong
    if(symmetrical(s)) {
        cout <<"xau doi xung";
    }
    else cout <<"xau ko doi xung";
}
