#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int l;
 for(int i=1;i<=5;i++){
	for(int j=1;j<=5;j++){
		cin>>l;
		if(l==1){
			cout<<abs(i-3)+abs(j-3)<<"\n";
			break;
		}
	}
 }
 return 0;
}