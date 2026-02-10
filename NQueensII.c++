// Leetcode Problem 52: N-Queens II
class Solution {
public:
    int count = 0;

    void solve(int row, int n,  vector<bool>& col, vector<bool>& leftDiag, vector<bool>& rightDiag) {
        if (row == n) {
            count++;
            return;
        }

        for (int j = 0; j < n; j++) {
            if (col[j] || leftDiag[row + j] || rightDiag[row - j + n - 1])
                continue;

            col[j] = leftDiag[row + j] = rightDiag[row - j + n - 1] = true;
            solve(row + 1, n, col, leftDiag, rightDiag);
            col[j] = leftDiag[row + j] = rightDiag[row - j + n - 1] = false;
        }
    }

    int totalNQueens(int n) {
        vector<bool> col(n, false);
        vector<bool> leftDiag(2 * n - 1, false);
        vector<bool> rightDiag(2 * n - 1, false);

        solve(0, n, col, leftDiag, rightDiag);
        return count;
    }
};