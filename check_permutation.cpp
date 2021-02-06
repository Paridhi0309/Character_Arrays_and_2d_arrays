#include<iostream>
#include<cstring>
using namespace std;
bool checkpermutation(char input1[],char input2[]){
    int len1=strlen(input1);
    int len2=strlen(input2);
    if(len1!=len2){
        return false;
    }
    int COUNT[256]={0};
    int i=0;
    for(i=0;input1[i] && input2[i];i++){
        COUNT[input1[i]]++;
        COUNT[input2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(COUNT[i]!=0){
            return false;
           }


    }
    return true;

}
int main(){
    char input1[100];
    char input2[100];
    cin.getline(input1,100);
    cin.getline(input2,100);
    cout<<(checkpermutation(input1,input2)? "true":"false");



}
