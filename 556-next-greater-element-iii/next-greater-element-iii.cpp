class Solution {
public:
    int nextGreaterElement(int n) {
        int x=n;
        string s;
        int y;
            for(int i=0;x!=0;i++){
                y=x%10;
                x=x/10;
                s.push_back(y+'0');
            }
            reverse(s.begin(),s.end());
            
            int idx=-1;
            int val;
            for(int i=s.size()-1;i>=0;i--){
                if((i-1)>=0 && s[i-1]<s[i]){
                    idx=i-1;
                    val=s[i-1];
                    break;
                }
            }
            if(idx==-1) return -1;
            int valMin, valMinIdx;
            for(int i=s.size()-1;i>idx;i--){
                if(s[i]>s[idx]){
                    valMinIdx=i;
                    break;
                }
            }
            swap(s[valMinIdx],s[idx]);
            int start=idx+1;
            int end=s.size()-1;
            while(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            
            long long h=stoll(s);
            if(h>INT_MAX) return -1;
            return (int)h;
        
    }
};