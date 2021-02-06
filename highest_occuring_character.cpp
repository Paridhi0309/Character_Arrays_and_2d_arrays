#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char input[100];
    int Max=0;
    char result;
    cin.getline(input,100);
    int COUNT[256]={0};
    int len=strlen(input);
    for(int i=0;i<len;i++){
        COUNT[input[i]]++;
    }
    for(int i=0;i<len;i++){
        if(COUNT[input[i]]>Max){
            Max=COUNT[input[i]];
            result=input[i];
        }
    }
    cout<<result;
}
