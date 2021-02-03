/*Largest row or column*/
#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }

}
int ans1=0,ans2=0,rowindex,colindex;
for(int i=0;i<n;i++){
    int sum_row=0;
    for(int j=0;j<m;j++){
        sum_row=sum_row+arr[i][j];
    }
    if(sum_row>ans1){
            rowindex=i;

    }
}
for(int j=0;j<m;j++){
        int sum_col=0;
    for(int i=0;i<n;i++){
        sum_col=sum_col+arr[i][j];
    }
if(sum_col>ans2){
    colindex=j;
}
}
if(ans1==ans2){
    cout<<"row"<<" "<<rowindex;
}
else if(ans1>ans2){
    cout<<"row"<<" "<<rowindex;
}
else{
    cout<<"col"<<" "<<colindex;
}


}
