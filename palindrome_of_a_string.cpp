#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   char ch[n];
   cin>>ch;
   for(int i=0;i<n;i++){
       bool check=true;
       if(ch[i]!=ch[n-1-i])
       {
           check=false;
       }
       if(check==false){
           cout<<"Word is not a palindrome";
           break;
       }
       else
       {
           cout<<"Word is a palindrome";
           break;
       }

   }
}
