class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        //long longestedge=nums[0]+nums[1]+nums[2];
        long long ans=-1;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum>nums[i]) ans=nums[i]+sum; //update longestedge
            sum+=nums[i];
        }

        return ans;
    }
};