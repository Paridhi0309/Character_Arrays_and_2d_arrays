#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cin.getline(arr,100);
    char x;
    cin>>x;
    int k=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]!=x){
           arr[k]=arr[i];
           cout<<arr[k];
           k++;
        }
    }

}
