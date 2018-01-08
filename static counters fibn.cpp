#include <bits/stdc++.h>
using namespace std;
int F(int a, int *d){
	int k;
	(*d)++;
	if (a==1 || a==0) return 1;
	return F(a-1, d) +	F(a-2, d);
}
int main (){
	int a, d=0;
	cin >> a;
	F(a, &d);
	cout << d;
}

