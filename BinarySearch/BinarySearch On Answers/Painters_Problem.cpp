/*

[2,1,5,6,2,3] this is time array.
painters k = 2.
minimum time to paint.

ans array = [1........20] mid = 10.
case 1>> 1. 2+1+5 = 8 condition ( it should be less than mid ...)
		 2. 6+2+3 = 11.

ans array = [10......20] mid = 15 = anns
case 1. 2+1+5+6 = 14
	2.  2+3 = 5

ans array = [10.......15] mid = 13 = ans
case 1. 2+1+5 = 8.
	2. 6+2+3 = 11.

ans array = [10.....13] mid = 11 = ans
case 1 2+1+5 = 8
	2 6+2+3 = 11.


worst ans = 9.
case 1 . 2+1+5 = 8
case 2 . 6+2+... = 8
*/



#include <iostream>

#include <vector>
using namespace std;


bool checkAns(vector <int> boards, int mid , int k ){
	int painters = 1;
	int timesum = 0;
		for(int i = 0; i< boards.size();i++){
			if(timesum + boards[i] > mid){
				painters ++;
				timesum = boards[i]; // starts with this board for the new painter			
			// here the second painter will pick up....
			if(painters > k){
				return false;
			}

		} else {
			timesum += boards[i];
		}

}
return true;
}


// k is the number of painters ....

int findLargestMinDistance(vector <int> boards, int k ){
	int start = 0;
	int sum = 0;
	for(int i=0; i< boards.size();i++){
		sum += boards[i];
	}
	int end = sum;
	int ans = sum;
	cout << "the sum is : " << sum << endl;
	while (start<= end){
		int mid = (start + end ) / 2;
		// function to check if mid is the ans...
		if(checkAns(boards, mid , k)){
			ans = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}

	return ans;
}


int main() {

vector <int> testboard = {10,20,30,40};
int ans = findLargestMinDistance(testboard,2);

cout << "the ans is : - " << ans << endl;  

return 0;

}


