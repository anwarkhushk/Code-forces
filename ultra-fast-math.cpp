#include<iostream>
#include<string>
using namespace std;
int main(){
    string word1;
    string word2;

    cin>>word1>>word2;

    for(int i=0;i<word1.length();i++){
        if(word1[i]==word2[i]){
            cout<<"0";

        }

        else{
            cout<<"1";
        }
    }
    cout<<endl;







    return 0;
}
