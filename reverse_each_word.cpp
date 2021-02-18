#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void reverseeachword(char input[]){
    int previous=-1;
    int len=strlen(input);
    for(int i=0;i<=len;i++){
        if(input[i]==' ' || input[i]=='\0'){
            reverse(input+1+previous,input+i);
            previous=i;
        }
    }
    for(int i=0;i<len;i++){
        cout<<input[i]<<" ";
    }
}
int main(){
char input[1000];
cin.getline(input,1000);
reverseeachword(input);
}
