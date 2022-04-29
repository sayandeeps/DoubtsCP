// Problem
// Time is precious. So lets get to the crux of the problem straightaway!

// Given 3 positive numbers A, B and C. We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order. We take the C-th number of set and print from C-th number to 0 with a step value of A or B whichever it is multiple of and if its a multiple of both, then use step value as LCM(A, B)
 

// Hint: It's recommended you implement this using continue and goto statements. ;)


// Constraints:

// 2 <= A,B <= 1000 (A and B will not be equal)

// 1 <= C <= 1000

// Input format:

// One line containing numbers - A, B, and C

// Output format:

// One line containing values from C-th number to 0 with the corresponding step value.

// Sample Input
// 3 5 14
// Sample Output
// 30 15 0
// Time Limit: 1
// Memory Limit: 256
// Source Limit:
// Explanation
// Here, A is 3 and B is 5. so the set shall be - 3, 5, 6, 9, 10, 12, 15, 18, 20, 21, 24, 25 ,27, 30, 33, 35, ...

// Given, C is 14. 14th number of the set is 30. this is a multiple of 3 and 5, ie., 15. So the output shall be 30 to 0 with a step value of 15. 

// Output: 30 15 0

// Note: u can try compiling and testing for other valid test cases so as to understand the problem. the "expected correct answer" will show up.
// //lcm is the smallest positive 
#include <bits/stdc++.h>
using namespace std;
// long long int arr[(int)1e8];
int lcm (long long int a, long long int b ){
	for (int i=2;i<a*b;i++){
		if (a%i==0&&b%i==0){
			return i;
			break;
		}
	}
}	
int main(){
	long int a,b,c,count=0;
	cin>>a>>b>>c;
	long long int cth_num=0;
	// long long int arr[a*b*c];
	for (long int i=2;c>0;i++){
		if (i%a==0||i%b==0){
		cth_num=i;
		c--;
	}
}
	// cout<<arr[c-1];

long int step;
if (cth_num%a==0&&cth_num%b==0){
	step=lcm(a,b);
}
else if(cth_num%a==0){
	step=a;
}
else{
	step=b;
}
for (long int j=cth_num;j>=0;j=j-step){
	cout<<j<<" ";
}
}
