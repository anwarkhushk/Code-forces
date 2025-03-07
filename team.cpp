#include<iostream>
using namespace std;
int main(){
int n,petya,vasya,tonya;
int count=0,sum=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>petya>>vasya>>tonya;
    sum=petya+vasya+tonya;
    if(sum>=2){
        count++;
    }

}
cout<<count<<endl;




    return 0;
}