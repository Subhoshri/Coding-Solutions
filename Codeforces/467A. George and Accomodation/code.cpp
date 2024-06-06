#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while (n--){
        int p,q;
        cin>>p>>q;
        if (p<q-1){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

//Time Complexity: O(N)
