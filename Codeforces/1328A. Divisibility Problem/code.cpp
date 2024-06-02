#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--){
        int a,b;
        cin>>a>>b;
        if (a%b!=0){
            cout<<b-(a%b)<<endl;      //subtracting the remainder from the divisor to get the required number
        }
        else{
            cout<<0<<endl;    //when a is divisible by b
        }
    }
    return 0;
}

//Time Complexity: N*O(1)
