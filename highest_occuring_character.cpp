#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cin>>str;
int len=str.length();
int COUNT[256]={0};
/*int len=arr.length();*/
for(int i=0;str[i]!='\0';i++){
    for(int j=len-1;j>=0;j--){
        if(str[i]==str[j]){
            COUNT++;
        }

    }

}






}
