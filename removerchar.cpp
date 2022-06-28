// Input:
// string1 = "occurrence"
// string2 = "car"
// Output: "ouene"
// Explanation: After removing characters
// (c, a, r) from string1 we get "ouene".
#include <bits/stdc++.h>
using namespace std;
int main(){
	string str1,str2,str3;
	cin>>str1>>str2;
	int c=str2.size()-1;
	while(c!=-1){
	for(int i=0;i<str1.size();i++){
		if(str1[i]!=str2[c]){
			str3.push_back(str1[i]);
		}
	}
	str1=str3;
	str3="";
	c--;
}
cout<<str1;
}
