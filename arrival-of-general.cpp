#include<iostream>
using namespace std;
int main(){
    int n=4,count=0;
    // bool chk=false;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j++){
            if(arr[j-1]<arr[j]){
                
                swap(arr[j-1],arr[j]);
                count++;
              
            }
        }
        
    }
cout<<count<<endl;
}