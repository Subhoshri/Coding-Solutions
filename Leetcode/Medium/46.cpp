class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> arr;
        if(nums.size()==1) {
            arr.push_back(nums);
            return arr;
        }

        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            vector<int> rem;
            for(int j=0;j<nums.size();j++){
                if(j!=i) rem.push_back(nums[j]);
            }
            vector<vector<int>> perms=permute(rem);
            for(vector<int> p:perms){
                p.insert(p.begin(),n);
                arr.push_back(p);
            }
        }
        return arr;

    }
};
