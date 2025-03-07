#include<iostream>
#include<string>
using namespace std;
int main(){

string n;
cin>>n;
int counter=0;
for(int i=1; i<n.length(); i++){
    if(n[i]!=n[i-1]){
        counter++;
    }
}
cout<<counter;
   if(counter%2==0){
        cout<<"CHAT WITH HER"<<endl;
    }
    else{
        cout<<"IGNORE HIM"<<endl;
    }
}