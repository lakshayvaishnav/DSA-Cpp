#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        /*
        APPROACH => 
            1. print first row then last column. frow++ lcol--
            2. print last row then first column. lrow-- fcol++
        */      

        vector<int> ans; 

        int row = matrix.size();
        int col = matrix[0].size();

        int firstRow = 0;
        int lastRow = row - 1;
        int firstCol = 0;
        int lastCol = col - 1;

        int total = row * col;
        int count = 0;

        while(count < total) {
            // print starting row.
            for(int index = firstCol; count < total && index <= lastCol; index++) {
                ans.push_back(matrix[firstRow][index]);
                count++;
            }
            firstRow++;

            // print last column
            for(int index = firstRow; count < total && index <= lastRow; index++) {
                ans.push_back(matrix[index][lastCol]);
                count++;
            }
            lastCol--;

            // print last row
            for(int index = lastCol; count < total && index >= firstCol; index--) {
                ans.push_back(matrix[lastRow][index]);
                count++;
            }
            lastRow--;

            // print first column
            for(int index = lastRow; count < total && index >= firstRow; index--) {
                ans.push_back(matrix[index][firstCol]);
                count++;
            }
            firstCol++;
        }
        return ans;
    }
};

int main() {
    int nRows = 3;
    int mCols = 3;

    vector<vector<int>> matrix(nRows, vector<int>(mCols));

    cout << "Taking input for the vector array:" << endl;

    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < mCols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Printing the array:" << endl;

    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < mCols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    Solution sol;
    cout << "Printing the array in spiral form:" << endl;
    vector<int> Result = sol.spiralOrder(matrix);

    for (int num : Result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
