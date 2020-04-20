class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         if(s.empty()) return 0;
         int length = s.size();
         int m = 1;
         for(int i = 0; i < length-1; i++){
             int hash[300] = {0};
             hash[int(s[i])]++;
             for(int j = i+1 ; j < length; j++){
                 if(hash[int(s[j])]==0){
                     hash[int(s[j])] = 1;
                     m = max(m,j-i+1);
                 }
                 else{
                     m = max(m,j-i);
                     break;
                 }
             }
         }
         return m;
    }
};
