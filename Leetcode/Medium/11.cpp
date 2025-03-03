class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int max_area=0;
        while(l<r){
            int mini=min(height[l],height[r]);
            max_area=max(max_area,mini*(r-l));
            height[l]<height[r]?l++:r--;
        }
        return max_area;
    }
};
