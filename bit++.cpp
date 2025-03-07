#include<iostream>
#include<string>
using namespace std;
int main(){
 int n;
 if(1<=n<=100)
 cin>>n;
 
 int x=0;
 for(int i=0; i<n; i++){
   
    string check;
    cin>>check;
    if(check== "X++" || check=="++X"){
        x++;
        
    }
    else if (check=="X--" || check=="--X"){
        x--;
      
    }
 }
 cout<<x<<endl;
}