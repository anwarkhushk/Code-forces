#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool chk=false;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        int sum=0;
        sum+=arr[i];
        if(sum==1 || sum>1){
            cout<<"HARD"<<endl;
            chk=true;
            break;
 
        }

    
    }
    if(!chk){
        cout<<"EASY"<<endl;
    }

return 0;
}

