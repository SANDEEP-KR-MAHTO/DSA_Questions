class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        
        s_dict={}
        t_dict={}

        for char_s, char_t in zip(s,t):
            if (char_s in s_dict and s_dict[char_s] != char_t)or(char_t in t_dict and t_dict[char_t]!=char_s):
                return False

            s_dict[char_s] = char_t
            t_dict[char_t] = char_s

        return True

        