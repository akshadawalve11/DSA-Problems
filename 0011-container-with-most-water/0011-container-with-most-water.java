class Solution {
    public int maxArea(int[] height) {
        int maxArea=0;
        int area=0;
        int minHeight=0;
        int i=0;
        int n= height.length;
        int j= n-1;
        while(i<j){
            minHeight=Math.min(height[i],height[j]);
            area=minHeight*(j-i);
            maxArea=Math.max(maxArea,area);
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }

        }
        return maxArea;

    }
}