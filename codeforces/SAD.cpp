#include <iostream>
using namespace std;

int main(){ 
    int n,arr[1000];
    cin>>n;
    int l=0,r=n-1,s=0,d=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool p =true;
    while(l<=r){
        if(arr[l]>=arr[r]){
            if(p){
                s+=arr[l];
            }else{
                d+=arr[l];
            }    
            l++;
        }else if(arr[r]>arr[l]){
            if(p){
                s+=arr[r];
            }else{
                d+=arr[r];
            }
            r--;
        }
        if(p){
            p=false;
        }else{
            p=true;
        }
    }
    cout<<s<<" "<<d;
    return 0;
}