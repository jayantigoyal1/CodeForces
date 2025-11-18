#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    
    int fpair = min(a, b);
    int spair = (max(a, b) - min(a, b)) / 2;

    cout << fpair << " " << spair << endl;
    return 0;
}