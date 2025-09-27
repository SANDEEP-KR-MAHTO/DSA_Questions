class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = [[False]*9 for _ in range(9)]
        cols = [[False]*9 for _ in range(9)]
        boxes = [[False]*9 for _ in range(9)]


        for i in range(9):
            for j in range(9):
                if board[i][j] != '.':
                    nums = ord(board[i][j]) - ord('1')
                    boxIndex = (i//3)*3 + (j//3)
                    if rows[i][nums] or cols[j][nums] or boxes[boxIndex][nums]:
                        return False
                    rows[i][nums] = cols[j][nums] = boxes[boxIndex][nums] = True



        return True



        