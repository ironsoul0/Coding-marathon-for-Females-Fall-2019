#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int n, a[1000];
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a, a+n);
    int sum = 0;
    for (int i=0;i<n;i+=2) {
        sum+=(a[i+1] - a[i]);
    }
    cout<<sum;
}

