#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;

    /*
    APPROACH: - 
    1. recognise the patterns
    2. if col index odd traverse bottom to top.
    3. else col index even traverse top to bottom 
    */

    for(int col = 0; col < mCols; col++)
    {
        if(col & 1)
        {
            // it is the odd column.
            // traverse bottom to top
            for(int row = nRows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // it is the even column
            // traverse top to bottom
            for(int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
        cout << endl;
    }

    return ans;
}

int main()
{
    int nRows = 3, mCols = 3;
    vector<vector<int>> arr(nRows, vector<int>(mCols));

    cout << "taking input for the vector array" << endl;

    for(int i = 0; i < nRows; i++)
    {
        for(int j = 0; j < mCols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "printing the array " << endl;

    for(int i = 0; i < nRows; i++)
    {
        for(int j = 0; j < mCols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "printing the array in wave form : - " << endl;

    vector<int> result = wavePrint(arr, nRows, mCols);


    return 0;
}
