class Solution {
public:
    bool isIsomorphic(string s, string t) {
 
        if (s.size() != t.size()) return false;
  
        vector<int> map_s_to_t(256, -1);
        vector<int> map_t_to_s(256, -1);
        
        for (int i = 0; i < s.size(); i++) {

            int char_s = s[i];
            int char_t = t[i];
            if (map_s_to_t[char_s] != -1 && map_s_to_t[char_s] != char_t) {
                return false;
            }
            if (map_t_to_s[char_t] != -1 && map_t_to_s[char_t] != char_s) {
                return false;
            }
            map_s_to_t[char_s] = char_t;
            map_t_to_s[char_t] = char_s;
        }
        return true;
    }
};

