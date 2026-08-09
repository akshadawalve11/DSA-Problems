class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<pair<int,int>>numsindex;
        for(int i=0;i<n;i++){
            numsindex.push_back({nums[i],i});
        }
        sort(numsindex.begin(),numsindex.end());
        int i=0,j=n-1;
        while(i<j){
            int sum=numsindex[i].first+numsindex[j].first;
            if(sum==target){
                return {numsindex[i].second,numsindex[j].second};
            }else if(sum<target){
                i++;
            }else{
                j--;
            }
        }
        return{-1,-1};
    }
};