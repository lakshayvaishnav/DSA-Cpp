#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;



bool isPossible(vector<int> &stalls , int k , int mid){
	int cowCount = 1;
	int lastPos = stalls[0];

	for(int i = 0; i< stalls.size(); i++){
		if(stalls[i] - lastPos >= mid){
			cowCount ++;

			if(cowCount == k){
				return true;
			}

			lastPos = stalls[i];
		}
	}

	return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
	sort(stalls.begin(),stalls.end());
	int start = 0;
	int maxi = -1;
	for(int i = 0; i< stalls.size() ; i++){
		maxi = max(maxi, stalls[i]);
	}

	int end = maxi; 
	int mid = start + (end - start) / 2;
	int ans = -1;
	while(start <= end){
		if(isPossible(stalls,k,mid)) {
			ans = mid;
			start  = mid + 1;
		}
			else {
				end = mid - 1;
			}

			mid = start + (end - start) / 2;
	}

	return ans;

}


int main() {

vector<int> stalls = {1,2,3};
int k = 2;

int ans = aggressiveCows(stalls,k);
cout << "ans is : " << ans << endl;

	return 0;
}