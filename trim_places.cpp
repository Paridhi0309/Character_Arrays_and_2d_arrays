#include<iostream>
using namespace std;
void trimSpaces(char input[]) {
  int j=0;
    for(int i=0;input[i]!='\0';++i){
        if(input[i]!=' '){
            input[j]=input[i];
            ++j;}
    }
    input[j]='\0';
}

int main(){
char input[50];
cin.getline(input,50);//getline function basically take the entire sentence with tabs and spaces
trimSpaces(input);
cout<<input;
}

