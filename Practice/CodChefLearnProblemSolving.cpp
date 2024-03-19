// Author: Md. Imran ALi


// Problem

// In the new CodeChef Learn module, under the "Learn Problem Solving" section, there are two courses for each language. For eg. "Python Beginner - 
// Part 1" and "Python Beginner - Part 2". These courses help you get started with CodeChef contests.
// Currently there are courses for 4 languages, and hence there are 8 courses in this section. 
// But suppose there are courses for N languages, what will be the total number of courses in this section?


// Solution

#include <bits/stdc++.h>
using namespace std;

int main() {
	int lang, cources;
	cin>>cources;
	lang=cources*2;
	
	cout<<lang;
	
	return 0;

}
