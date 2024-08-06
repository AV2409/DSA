class Solution {
    private:

    bool isEqual(int hash1[],int hash2[]){
        for(int i=0;i<25;i++){
            if(hash1[i]!=hash2[i]) return false;
        }

        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {

        int n1=s1.length();
        int n2=s2.length();

        if(n1>n2) return false;

        int hash1[26];
        int hash2[26];
        for(int i =0;i<n1;i++)
        {
            int index=s1[i]-'a';
            hash1[index]++;
        }

        int s=0;
        int e=n1-1;

        for(int i =0;i<n1;i++)
        {
            int index=s2[i]-'a';
            hash2[index]++;
        }

        if(isEqual(hash1,hash2)) return true;

        while(s<n2-n1){

            e++;
            hash2[(s2[e]-'a')]++;
            

            hash2[(s2[s]-'a')]--;
            s++;
            
            if(isEqual(hash1,hash2)) return true;
        }

        return false;
        
    }
};