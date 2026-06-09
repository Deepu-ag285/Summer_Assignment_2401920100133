class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m[26]={0};
        for(char c: s1) m[c-'a']++;
        int j=0 , i=0 , totalchar =s1.size();
        while(j<s2.size()){
            if(m[s2.at(j++) -'a']-- > 0)
              totalchar--;
            if(totalchar ==0) return true;
            if(j-i ==s1.size() && m[s2.at(i++)-'a']++ >=0)
              totalchar++;  
        }
        return false;
        
    }
};
