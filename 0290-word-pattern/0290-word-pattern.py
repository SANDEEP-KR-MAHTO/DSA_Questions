class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        l=[]
        l = s.split()
        if len(pattern) != len(l):
            return False

        p_dict = {}
        s_dict ={}

        for i in range(len(pattern)):
            if pattern[i] not in p_dict:
                p_dict[pattern[i]] = l[i]

            if l[i] not in s_dict:
                s_dict[l[i]] = pattern[i]

            if pattern[i] in p_dict:
                if p_dict[pattern[i]]!= l[i]:
                    return False

            if l[i] in s_dict:
                if s_dict[l[i]] != pattern[i]:
                    return False
        return True    
            

         
        

             