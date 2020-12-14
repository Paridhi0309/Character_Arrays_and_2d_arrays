#include<iostream>
#include<cstring>
using namespace std;
void replace_character(char ch[],int n,char c1,char c2){
    for(int i=0;i<n;i++){
        if(ch[i]==c1){
                ch[i]=c2;
        }
    }
}
int main(){
    char ch[]="bcdef";
    int len=strlen(ch);
    char c1;
    cin>>c1;
    char c2;
    cin>>c2;
    replace_character(ch,len,c1,c2);
    for(int i=0;i<len;i++){
        cout<<ch;
        break;
    }
}
