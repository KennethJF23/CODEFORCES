#include <iostream>
#include <cmath>
#include <unordered_map>
using namespace std;

// struct Node
// {
//     char l;
//     struct Node *next;
//     struct Node *prev;

//     Node(char ch){
//         l=ch;
//         next=prev=nullptr;
//     }
// };


// Node* createCircularWheel(unordered_map<char,Node *>& lettermap){
//     Node* head=new Node('a');
//     Node* current=head;
//     lettermap['a']=head;

//     for(char ch='b';ch<='z';ch++){
//         Node *newnode = new Node(ch);
//         lettermap[ch]=newnode;
//         current->next=newnode;
//         newnode->prev=current;
//         current=newnode;
//     }
//     current->next=head;
//     head->prev=current;

// }

// int minRotation(string s){
//     unordered_map<char,Node*>lettermap;
//     Node *head= createCircularWheel(lettermap);
//     Node *current=head;
//     int total=0;
//     int clockSteps=0;
//     Node *temp=current;
//     while(temp!=target){

//     }
// }

int main(){
    string s;
    cin>>s;
    int total=0;
    char c='a';
    for(char k:s){
        int cs=abs(k-c);
        int ccs=26-cs;
        total+=min(cs,ccs);
        c=k;
    }
    cout<<total;
    return 0;
}