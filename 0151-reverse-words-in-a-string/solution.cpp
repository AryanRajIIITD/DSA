class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int write_idx = 0; 
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') continue;
            if (write_idx > 0) {
                s[write_idx++] = ' ';
            }
            int word_start = write_idx;
            while (i < n && s[i] != ' ') {
                s[write_idx++] = s[i++];
            }
            
            reverse(s.begin() + word_start, s.begin() + write_idx);
        }
        s.resize(write_idx);
        
        return s;
    }
};

