#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int c=0;
    for(char k:s){
        c+=arr[k-'1'];
    }   
    cout<<c<<"\n";
    return 0;
}