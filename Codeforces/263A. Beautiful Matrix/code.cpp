#include<iostream>
using namespace std;
int main(){
    int i,j;
    int x,y;
    int arr[5][5];
    int total;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            cin>>arr[i][j];
            if (arr[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    total=abs(2-x)+abs(2-y);     //calculating the required moves
    cout<<total<<endl;
    return 0;
}

//Time Complexity: O(N^2)
