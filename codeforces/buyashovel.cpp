#include <iostream>
using namespace std;

int main(){
    int shovel,denomination,ans=1;
    cin>>shovel>>denomination;
    while(true){
        if((((shovel*ans)%10)==denomination) || (((shovel*ans)%10)==0)){
            cout<<ans;
            return 0;
        }
        ans++;
    }


    return 0;
}