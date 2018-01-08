#include <bits/stdc++.h>
using namespace std;
void F(int a){
    int c;
    cin >> c;
    if (a>1) F(a-1);
    cout << c;
}
int main(){
    int a;
    cin >> a;
    F(a);
    return 0;
}
