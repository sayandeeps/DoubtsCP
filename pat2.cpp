#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int n ;
		cin>>n;
		int size =2*n-1;
		int start =0, end=size-1;

		int a[size][size]; 
		while(n!=0){
			
		for(int i=start ;i<=end;i++){
			for(int j=start ;j<=end;j++){
				if(i==start||i==end||j==start||j==end);{
					a[i][j]=n;
				}
			}
		}
		start++;
		end--;
		n--; 
	}
		for(int i=0 ;i<=size-1;i++){
			for(int j=0 ;j<=size-1;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}

}
}
