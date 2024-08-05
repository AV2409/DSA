class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxlen=0;
    int n=s.length();
    for(int i=0;i<n;i++){

        string sub;
        int len;
        
        int hash[255]={0};
        
        for(int j=i;j<n;j++){

            if(hash[s[j]]==1) break;

            sub=sub+s[j];
            len=j-i+1;
            maxlen=max(maxlen,len);
            hash[s[j]]=1;
        }

    }
    return maxlen;
        
    }
};