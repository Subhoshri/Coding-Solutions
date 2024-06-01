class Solution {
public:
    int reverse(int x) {
        int ans=0;      // declare ans variable 
        while(x){
         if (ans>INT_MAX/10 || ans<INT_MIN/10) return 0;   //checking for extreme cases
         ans=ans*10+x%10;   //update ans
         x=x/10;     
        } 
        return ans;
        
    }
};

//Time Complexity: O(N)
