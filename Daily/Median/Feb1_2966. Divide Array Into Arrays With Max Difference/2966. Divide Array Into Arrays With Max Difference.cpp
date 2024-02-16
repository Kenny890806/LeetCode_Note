class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int len=nums.size();
        
        sort(nums.begin(),nums.end());
        
        int element=len/3;
        
        vector<vector<int>> wrong;
        vector<vector<int>> ans(element,vector<int>(3));
        int check=0;//Point to the current position of nums(check+=3)
        for(int i=0;i<element;i++){            
            ans[i][0]=nums[check];           
            if((nums[check]+k<nums[check+1])||(nums[check]+k<nums[check+2])){
                return wrong;
            }
            else{
                ans[i][1]=nums[check+1];
                ans[i][2]=nums[check+2];
            }
            check+=3;
        }

        /*
        for(int a=0;a<element;a++){
            for(int b=0;b<3;b++){
                cout<<ans[a][b];
            }
            cout<<endl;
        }*/
  
        return ans;
    }
};