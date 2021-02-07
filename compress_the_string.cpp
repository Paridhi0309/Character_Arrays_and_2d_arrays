#include<iostream>
#include<cstring>
using namespace std;
void compressstring(string arr){
int n=arr.length();
for(int i=0;i<n;i++){
        int Count=1;
    while(i<n-1 && arr[i]==arr[i+1]){
        Count++;
        i++;
    }
    cout<<arr[i]<<Count;
}

}
int main(){
    string str="aabbbccccddddd";
    compressstring(str);

}
