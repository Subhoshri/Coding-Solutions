#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count=0;
    for (int i=0;i<s.length();i++){
        if (s[i]=='A'){
            count++;
        }
    }
  //calculating win chances
    if (count==(n-count)){
        cout<<"Friendship"<<endl;
    }
    else if (count>n/2){
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
    return 0;
}
