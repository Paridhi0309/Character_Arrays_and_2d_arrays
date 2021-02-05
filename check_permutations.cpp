#include<iostream>
using namespace std;
bool checkpermutation(char string1[],char string2[]){

    for(int i=0;string1[i]!='\0';i++){
        for(int j=0;string2[j]!='\0';j++){
            if(string1[i]==string2[j]){
                return true;
            }
            else{
                return false;
            }
        }
    }
}
int main(){
    char string1[100];
    char string2[100];
    cin.getline(string1,100);
    cin.getline(string2,100);
    if(checkpermutation(string1,string2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
