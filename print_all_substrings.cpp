#include<iostream>
using namespace std;
int subsequences(string str,string output[]){
    if(str.length()==0){
            output[0]=" ";
        return 1;
    }
    int smalloutputsize=subsequences(str.substr(1),output);
    for(int i=0;i<smalloutputsize;i++){
        output[i+smalloutputsize]=str[0]+output[i];
    }
    return 2*smalloutputsize;
}
int main(){
    string output[1000];
    int outputsize=subsequences("abcd",output);
    for(int i=0;i<outputsize;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}
