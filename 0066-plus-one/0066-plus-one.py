class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)
        digits[n-1] = digits[n-1] + 1

        for i in range(n-1, 0,-1):
            if digits[i] > 9:
                digits[i] = 0
                digits[i-1] = digits[i-1]+1
        

        if digits[0]> 9:
            digits[0] = 0
            digits.insert(0, 1)
            


        
        
        return digits

        