class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int len=tokens.size();
        stack<long> st;
        int ans;
        bool check=false;
        if(len==1)return stoi(tokens[0]);
        for(int i=0;i<len;i++){
            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/"){//integer
                //cout<<tokens[i];
                int temp = stoi(tokens[i]);
                st.push(temp);
            }
            else if(tokens[i]=="+"){//+
                //if(!check){
                    int temp1=st.top();
                    st.pop();
                    int temp2=st.top();
                    st.pop();
                    ans=temp2+temp1;
                    st.push(ans);
                    check=true;
                //}

            }
            else if(tokens[i]=="-"){//-
                //if(!check){
                    int temp1=st.top();
                    st.pop();
                    int temp2=st.top();
                    st.pop();
                    ans=temp2-temp1;
                    st.push(ans);
                    check=true;
                //}
            }
            else if(tokens[i]=="*"){//*
                //if(!check){
                    int temp1=st.top();
                    st.pop();
                    int temp2=st.top();
                    st.pop();
                    ans=temp2*temp1;
                    st.push(ans);
                    check=true;
                //}
            }
            else if(tokens[i]=="/"){// /
                //if(!check){
                    int temp1=st.top();
                    st.pop();
                    int temp2=st.top();
                    st.pop();
                    ans=temp2/temp1;
                    st.push(ans);
                    check=true;
                //}
                
            }

        cout<<st.top()<<endl;    
        }
        return st.top();
    }
};