#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;

    for (int j=0;j<s.length();j++){
        s[j]=tolower(s[j]);   //converting string to lowercase
        st.insert(s[j]);
    }
    if (st.size()==26){      //checking if all alphabets are present or not
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

//Time complexity: O(N)
