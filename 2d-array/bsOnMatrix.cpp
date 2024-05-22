#include <iostream>
#include <vector>
using namespace std;


 bool searchMatrix(vector<vector<int>>& matrix, int target) {
     	
     	int row = matrix.size();
     	int col = matrix[0].size();

     	int start = 0;
     	int end = row*col-1;

     	int mid = (start + end)/2;

     	while(start<=end){
     		int element = matrix[mid/col][mid%col];
     		if(element == target){
     			return 1;
     		}
     		if(element < target){
     			start = mid+1;
     		}
     		else {
     			end = mid - 1;
     		}

     		mid = (start + end)/2;
     	}
     	return 0;

    }


int main(){

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

    int target = 5;
    bool result = searchMatrix(matrix, target);
    cout << "the result is : " << result << endl;


	return 0;
}