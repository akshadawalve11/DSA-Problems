class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int area=0;
        int minheight=0;
        int i=0;
        int n= height.size();
        int j= n-1;
        while(i<j){
            int minheight= min(height[i],height[j]);
            area=minheight*(j-i);
            maxArea=max(maxArea,area);
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }

        }
        return maxArea;
    }
};