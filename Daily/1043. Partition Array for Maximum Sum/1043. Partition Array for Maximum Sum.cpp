class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size(),0);
            for(int i=0;i<arr.size();i++){
                if(i<k){
                    int mx=0;
                    for(int j=0;j<=i;j++){
                        mx = max(mx,arr[j]);
                    }
                    dp[i]=mx*(i+1);
                    continue;
                    //cout<<dp[i];
                }
                
                
                for(int j=1;j<=k;j++){
                    vector<int>::const_iterator first = arr.begin()+i-j+1;
                    vector<int>::const_iterator last = arr.begin()+i+1;
                    vector<int> vec(first , last);
                    
                    int maxVal = *max_element(vec.begin(),vec.end());
                    
                    dp[i] = max(dp[i],dp[i-j]+j*maxVal);
                }
                //cout<<dp[i]<<endl;
                
            }

            return dp[arr.size()-1];
    }
};