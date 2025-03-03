class NumMatrix:

    def __init__(self, matrix: List[List[int]]):
        r, c = len(matrix), len(matrix[0])
        self.sumMatrix = [[0] * (c + 1) for i in range(r + 1)]

        for i in range(r):
            temp = 0
            for j in range(c):
                temp += matrix[i][j]
                above = self.sumMatrix[i][j + 1]
                self.sumMatrix[i + 1][j + 1] = temp + above

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        row1, col1, row2, col2 = row1 + 1, col1 + 1, row2 + 1, col2 + 1
        LRC = self.sumMatrix[row2][col2]
        above = self.sumMatrix[row1 -1][col2]
        left = self.sumMatrix[row2][col1 - 1]
        duplicateNumber = self.sumMatrix[row1 - 1][col1 -1]
        return LRC - above - left + duplicateNumber

        


# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)