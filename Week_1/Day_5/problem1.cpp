class Solution {
public:
    bool isPalindrome(string s) {
        int str =0, end = s.length()-1;
        while(str<end){
            if(!isalnum(s[str])) {str++ ; continue;}
            if(!isalnum(s[end])) {end-- ; continue;}
            if(tolower(s[str]) !=  tolower(s[end])) return false;
            str++;
            end--;
        }
        return true;
        
    }
};
