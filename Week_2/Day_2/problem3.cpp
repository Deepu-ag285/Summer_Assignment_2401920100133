class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       int m = s.size();
       int n = p.size();
       if(m < n ) return {};
       vector<int> count(26,0);
       vector<int> window(26,0);
       for(int i=0;i<n;i++){
        count[p[i]-'a']++;
        window[s[i]-'a']++;
       }
       vector<int> ans;
       if(count == window) ans.push_back(0);
       for(int i=n;i<m;i++){
        window[s[i-n]-'a']--;
        window[s[i]-'a']++;
        if(count == window) ans.push_back(i-n+1);
       }
       return ans;
        
    }
};
