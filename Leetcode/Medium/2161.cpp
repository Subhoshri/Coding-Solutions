class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> temp;
        int left=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                nums[left]=nums[i];
                left++;
            }
            else if(nums[i]==pivot) count++;
            else temp.push_back(nums[i]);
        }
        while(count--) {
            nums[left]=pivot;
            left++;
        }
        int j=0;
        for(int i=0;i<temp.size();i++){
            nums[left]=temp[i];
            left++;
        }
        return nums;
    }
};
