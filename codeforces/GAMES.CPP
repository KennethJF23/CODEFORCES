#include <iostream>
using namespace std;


int main(){
    int n,ans=0;
    cin>>n;
    int home[100],guest[100];
    // int arr[100][2];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2;j++){
    //         if(arr[i][1]!=arr[i+1][0]){
    //             ans++;
    //         }
    //     }
    // }
    for(int i=0;i<n;i++){
        cin>>home[i]>>guest[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(home[i]==guest[j]){
                ans++;
            }
        }
    }

    cout<<ans;
    return 0;
}