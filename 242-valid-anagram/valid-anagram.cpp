
class Solution {
public:
    bool isAnagram(string s, string t) {

        int c1[26]={0};
        int c2[26]={0};
        int index1,index2;


        if(s.length()!=t.length()) return false;

        for(int i=0;i<s.length();i++){
            index1=s[i]-'a';
            c1[index1]++;
            index2=t[i]-'a';
            c2[index2]++;
            
        }

        for(int j=0;j<26;j++){
            if(c1[j]!=c2[j]) return false;
        }

        return true;

        
    }
};