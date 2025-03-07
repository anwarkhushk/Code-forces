#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, counter = 0;
    string name;
    
    cin>>n;
    string names[n];
    for(int i=0; i<n; i++){
        cin>>names[i];
     
    }

    for(int i=0; i<n; i++){
           string name=names[i];
           if(name.length()>10){
            cout<<name[0]<<(name.size()-2)<<name[name.size()-1]<<endl;
        }
        else{
            cout<<name<<endl;
        }
    }
    
  
   
}