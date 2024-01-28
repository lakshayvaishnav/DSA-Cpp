/*1482. Minimum Number of Days to Make m Bouquets
Medium
Topics
Companies
Hint
You are given an integer array bloomDay, an integer m and an integer k.

You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.

The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.

Return the minimum number of days you need to wait to be able to make m bouquets from the garden.
 If it is impossible to make m bouquets return -1.

 

Example 1:

Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
Output: 3
Explanation: Let us see what happened in the first three days. x means flower bloomed and _ means 
flower did not bloom in the garden.
We need 3 bouquets each should contain 1 flower.
After day 1: [x, _, _, _, _]   // we can only make one bouquet.
After day 2: [x, _, _, _, x]   // we can only make two bouquets.
After day 3: [x, _, x, _, x]   // we can make 3 bouquets. The answer is 3.
*/


#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// create min max function to find minimum and maximum element in array...
void arrayMinMax(vector<int> &bloomDay, int &minElement, int &maxElement){
   for(int i = 0;i<bloomDay.size();i++){
         if(minElement>bloomDay[i]){
            minElement = bloomDay[i];
         }

         if(maxElement<bloomDay[i]){
            maxElement = bloomDay[i];
         }
   }
}


// create boolean function to check if possible to create  m bouquette with k adjacent flowers
bool isPossible(vector<int>&bloomDay,int days,int m,int k){
   int counter = 0;
   int numOfBouqette = 0;

   for(int i = 0; i<bloomDay.size();i++){
      if(bloomDay[i]<=days){
         counter++;
      }
      else{
         numOfBouqette +=counter/k;
         counter = 0;
      }
   }

   numOfBouqette +=counter/k; 
   return numOfBouqette>=m;
}


 int minDays(vector<int>& bloomDay, int m, int k) {
         // edge case


      int low = INT_MAX;
      int high = INT_MIN;
      arrayMinMax(bloomDay,low,high);
      while(low<=high){
         int mid = (low+high)/2;

         if(isPossible(bloomDay,mid,m,k)){
            high = mid - 1;
         }
         else{
            low = mid + 1;
         }
      }
      return low;
    }

int main(){
   vector<int>bloomDay = {1,10,3,10,2};
   int ans = minDays(bloomDay,3,1);
      cout << ans << endl;

   return 0;
}