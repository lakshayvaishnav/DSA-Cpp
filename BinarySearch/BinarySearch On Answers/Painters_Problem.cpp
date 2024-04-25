/*

Problem statement
Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.



You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a constraint that any painter will only paint the continuous sections of boards.



Example :
Input: arr = [2, 1, 5, 6, 2, 3], k = 2

Output: 11

Explanation:
First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time. Thus both painters will paint all the boards in max(8,11) = 11 units of time. It can be shown that all the boards can't be painted in less than 11 units of time.

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


