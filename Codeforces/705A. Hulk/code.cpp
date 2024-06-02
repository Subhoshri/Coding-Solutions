#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    string s;
    while (n--){
        if (i%2!=0){
            s+="I hate ";
        }
        else{
            s+="I love ";
        }
        if (n==0){
            s+="it";
        }
        else{
            s+="that ";
        }
        i++;
    }
    cout<<s<<endl;
}

//Time Complexity: O(N)
