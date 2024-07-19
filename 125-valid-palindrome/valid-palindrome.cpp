int check_char(char c){
    if((c>='a'&&c<='z')||(c>='0'&&c<='9')) return 1;

    return 0;
}

class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
    int end=s.size()-1;
    int i = 0;
    while (i<s.size())
    {



    if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }

    
        i++;
    }

    while(start<=end){

        if(check_char(s[start])==0){
            start++;
            continue;
        }

        if(check_char(s[end])==0){
            end--;
            continue;
        }
        
        if(s[start]!=s[end]) return false;

        start++;
        end--;
    }


    return true;

    

    
}
        

};