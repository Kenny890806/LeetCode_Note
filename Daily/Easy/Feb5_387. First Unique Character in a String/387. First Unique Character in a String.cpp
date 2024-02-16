class Solution {
public:
    int firstUniqChar(string s) {
       map <char,int> mymap;
        
        for(int i=0;i<s.length();i++){
            //cout<<temp[s[i]-97]<<endl;
            mymap[s[i]]++;
            cout<<mymap[s[i]]<<endl;
        }
        
        
        for(int i=0;i<s.length();i++){
            if(mymap[s[i]]==1) return i;
        }
        return -1;

    }
};