/*
1021. Remove Outermost Parentheses
Solved
Easy
Topics
Companies
Hint
A valid parentheses string is either empty "", "(" + A + ")", or A + B, 
where A and B are valid parentheses strings, and + represents string concatenation.

For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
A valid parentheses string s is primitive if it is nonempty, 
and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk,
 where Pi are primitive valid parentheses strings.

Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Solution {
	public :
	string removeOuterParenthesis(string s){
		string sol;
		int opened = 0;
		for(char c : s){
			if(c == '(' && opened++ > 0) sol+= c;
			if(c == ')' && opened-- > 1) sol+= c;
		}
		return sol;
	}
};


int main(){

	Solution s1;

	string q = "(()())(())";

	string ans = s1.removeOuterParenthesis(q);

	cout << ans << endl; 

	return 0;

}