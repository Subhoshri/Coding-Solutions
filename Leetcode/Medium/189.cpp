class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n=nums.size();
        k%=n;

        //Reverse the first n-k elements
        reverse(nums.begin(),nums.begin()+n-k);

        // Reverse the remaining k elements
        reverse(nums.begin()+n-k,nums.end());

        // Reverse the entire array
        reverse(nums.begin(),nums.end());  
    }
};
