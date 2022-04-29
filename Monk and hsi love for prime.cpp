// Monk loves Primes, whether it is number or word

// Rules to convert a string to a number:
// 1. Convert the UpperCase letters to LowerCase letters
// 2. Convert the LowerCase letters to UpperCase letters

// Add the ASCII values of all the UpperCase letters and subract the ASCII values of all the LowerCase letters. The resultant number is X.

// Note: If X is negative take absolute value of it

// Print 1 if X is a prime number and 0 if not
// (Prime Number: A number which is divisble by the number one and itself, i.e, it has 2 divisors)

 

// Input Format:

// A single line which consists of a string

 

// Output Format:

// 0 or 1 in a single line 

 

// Constraints:

// 1 <= string length <= 2000

// Sample Input
// lBaXps
// Sample Output
// 0
// Time Limit: 2
// Memory Limit: 256
// Source Limit:
// Explanation
// Explanation:

// l -> L => 76
// B -> b => 98
// X -> x => 120
// p -> P => 80
// s -> S => 83

// 76 - 98 - 120 + 80 + 83 = 21 and it is not a prime number
#include <bits/stdc++.h>
using namespace std;
bool prime(long long int n){
	long long int c=0;
	for (long long int i=2;i<n;i++){
		if (n%i==0){
			c=1;
			break;
		}

	}
	if (c==0){
		return true;
	}
	else{
		return false;
	}

}
int main(){
	long long int sum=0;
	string s;
	cin>>s;
	for (long long int i=0;i<s.length();i++){
		
		if (s[i]>='A'&&s[i]<='Z'){
			
			sum-=(int)(s[i]+32);
			// cout<<(int) ch<<endl;
		}
		else{
			
			sum+=(int)(s[i]-32);
			// cout<< (int)ch<<endl;
		}
	}
	if (sum<0){
		sum=sum*(-1);
 	}
	if (prime(sum)==true){
		cout<<1;
	}
	else{
		cout<<0;
	}
// cout<<sum;
}
//by Sayandeep Sharma
