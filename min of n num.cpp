#include <bits/stdc++.h>
using namespace std;
bool comp(int x, int y){
	return (y>x);
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<min({a,b,c},comp);

}
