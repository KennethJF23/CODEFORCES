#include <unordered_map>
#include<iostream>
#define ll long long
#define ld long double
using namespace std;


int main(){
  int ans=0;
  int n;
  cin>>n;
  int arr[100][3];
  for(int i=0;i<n;i++){
	for(int j=0;j<3;j++){
		cin>>arr[i][j];
	}
  }
  for(int i=0;i<n;i++){
	for(int j=0;j<3;j++){
        if((arr[i][j]==1 && arr[i+1][j]==1) || (arr[i][j]==1 && arr[i+2][j]==1)){
            ans++;
            continue;		
		}
	}
}
cout<<ans;

return 0;
}



// int n;
// string s;

// cin>>n>>s;

// unordered_map<char,int> hm;

// for(int i=0;i<n;i++){
//  hm[s[i]]++;
// }

// if(hm['A']>hm['D']){
//     cout<<"Anton";
// }else if(hm['D']>hm['A']){
//     cout<<"Danik";
// }else{
//     cout<<"Friendship";
// }


    
//   int a,b;
//   int ans=0;
//   cin>>a>>b;
//   while(a<=b){
//    a=a*3;
//    b=b*2;
//    ans++;
//   }
// cout<<ans;

/*
#include <bits/stdc++.h>
#include<iostream>
#define ll long long
#define ld long double
using namespace std;



int main(){
  int a,b;
  int ans=0;
  cin>>a>>b;
  while(a<=b){
   a=a*3;
   b=b*2;
   ans++;
  }
cout<<ans;
return 0;
}*/