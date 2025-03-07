#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string word;
    cin>>word;
    if(word[0]>='a' && word[0]<='z'){
        word[0]=word[0]-32;
    }

    cout<<word;
    

    return 0;
}