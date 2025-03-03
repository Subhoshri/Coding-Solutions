class Solution {
public:
    void permute(vector<int>nums, int index,vector<vector<int>>& ans){
        if(index==nums.size() && find(ans.begin(),ans.end(),nums)==ans.end()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){

            swap(nums[i],nums[index]);
            permute(nums,index+1,ans);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        permute(nums,index,ans);
        return ans;
    }
};
