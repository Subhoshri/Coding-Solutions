class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ind1=m-1,ind2=n-1,i=m+n-1;
        while(ind2>=0){
            if(ind1>=0 && nums1[ind1]>nums2[ind2]){
                nums1[i]=nums1[ind1];
                ind1--;}
            else {
                nums1[i]=nums2[ind2];
                ind2--;}
            i--;
        }
    }
};
