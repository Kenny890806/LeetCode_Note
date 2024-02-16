class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mymap;
        int check=k;
        for(auto s:arr){
            mymap[s]+=1;
        }
        vector<int> freq;
        for(auto a:mymap){
            freq.push_back(a.second);
        }
        sort(freq.begin(),freq.end());

        for(int i=0;i<freq.size();i++){
            if(k>freq[i]){
                k-=freq[i];
                freq[i]=0;
            }
            else if(k<=freq[i]){
                freq[i]-=k;
                break;
            }
        }
        int count=0;
        for(auto f:freq){
            if(f>0) count++;
        }
        return count;


    }
};