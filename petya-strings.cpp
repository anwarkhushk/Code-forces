#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string name1;
    string name2;

    cin>>name1>>name2;

    for(int i=0; i<name1.length();i++){
        name1[i]=tolower(name1[i]);
    }

    for(int i=0; i<name2.length();i++){
        name2[i]=tolower(name2[i]);
    }
    if(name1<name2){
        cout<<"-1"<<endl;
    }
    else if(name1>name2){
            cout<<"1"<<endl;
    }

    else{
        cout<<"0"<<endl;
    }
















    return 0;
}