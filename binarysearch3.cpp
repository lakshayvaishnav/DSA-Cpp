#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int first = findFirst(arr, target);
        int last = findLast(arr, target);
        return {first, last};
    }

private:
    int findFirst(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int first = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                first = mid;
                end = mid - 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else if (arr[mid] > target) {
                end = mid - 1;
            }
        }
        return first;
    }

    int findLast(vector<int>& arr, int target) {
        int start = 0;
        int end = arr.size() - 1;
        int last = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                last = mid;
                start = mid + 1;
            } else if (arr[mid] > target) {
                end = mid - 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            }
        }
        return last;
    }
};

int main() {
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;

    Solution solution;
    vector<int> ans = solution.searchRange(arr, target);
    
    // Print the result
    cout << "First occurrence: " << ans[0] << endl;
    cout << "Last occurrence: " << ans[1] << endl;

    return 0;
}
