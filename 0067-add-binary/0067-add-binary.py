class Solution:
    def addBinary(self, a: str, b: str) -> str:
        decimal_sum = int(a,2) + int(b,2)
        binary_sum = bin(decimal_sum)

        return binary_sum[2:]       