#include<iostream>
using namespace std;
int main(){
char output[100];
cin.getline(output,100);
int k=0;
for(int i=0;output[i]!='\0';i++){
    if(output[i]!=output[i+1]){
        output[k]=output[i];
        cout<<output[k];
        k++;
    }
}



}
