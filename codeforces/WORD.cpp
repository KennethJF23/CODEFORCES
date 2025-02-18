#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    int k;
    int c=0;
    int n = s.length();
    for(int i=0;i<n;i++){
        k=s[i];
        if(k<97){
            c++;
        }
    }
    if(c<=(n-c)){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    cout<<s;
    return 0;
}