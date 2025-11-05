class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        for c in s:
            if c in '({[':
                st.append(c)
            else:
                if len(st)==0:
                    return False
                    break
                    
                top = st[-1]
                st.pop()
                if (c == ')' and top != '(') or (c=='}' and top != '{') or (c==']' and top!= '['):
                    return False
                    break
                    

        return len(st) == 0
        