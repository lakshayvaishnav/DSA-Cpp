/*
875. Koko Eating Bananas

Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. 
The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, 
she chooses some pile of bananas and eats k bananas from that pile. 
If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

 

Example 1:

Input: piles = [3,6,7,11], h = 8
Output: 4
Example 2:

Input: piles = [30,11,23,4,20], h = 5
Output: 30

*/

#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;

long long timeTaken(vector <int>& piles,int speed){
	long long ans = 0;
	for(int i = 0;i<piles.size();i++){
		ans += (piles[i]/speed)+(piles[i]%speed!=0);
	}
	return ans;
}


int minEatingSpeed(vector<int>& piles, int h ){

	// binary search on answers...
	int low = 1;
	int high = *max_element(piles.begin(),piles.end());
	while(low<=high){
		int mid = (low+high)/2;

		if(timeTaken(piles,mid)<=h){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}

	}
	return low;
}	

int main(){

	vector<int> piles = {3,6,7,11};
	int ans = minEatingSpeed(piles,8);
	cout << ans << endl;
	return 0;
}