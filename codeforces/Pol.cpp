#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //PROBLEM SOLVING
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            sum+=arr[i];
        }else if(arr[i]==-1 && arr[i+1]==-1){
            ans+=2 ;
        }
        
    }
    cout<<ans-sum;
    return 0;
}