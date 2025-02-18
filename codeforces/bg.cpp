#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> temp(s.begin(),s.end());
    int c =temp.size();
    if(c%2==0){
        cout<<"CHAT WITH HER!"<<"\n";
    }else{
        cout<<"IGNORE HIM!"<<"\n";
    }
    return 0;
}