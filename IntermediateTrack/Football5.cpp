#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    int n;
    string s1,s2,p;
    int x1=0,x2=0;
    cin >> n;
    cin >> s1;
    for(int i = 0;i<n-1;i++){
        cin >> p;
        if (s1!=p){
            x2+=1;
            s2=p;
        }
        else {
            x1+=1;
        }
    }
    if (x1>=x2){
        cout << s1;
        return 0;
    }
    else{
        cout << s2;
    }
    return 0;
}
