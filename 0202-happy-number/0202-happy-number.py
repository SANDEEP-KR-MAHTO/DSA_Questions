class Solution:
    def isHappy(self, n: int) -> bool:
        if n==1:
            return True
            
        seen = set()
        while(n!=1 and n not in seen):
            seen.add(n)
            m = str(n)
            sum = 0
            for i in range(len(m)):
                a = int(m[i])
                sum = sum + a*a

            n = sum
            if sum == 1:
                return True

        return False
        