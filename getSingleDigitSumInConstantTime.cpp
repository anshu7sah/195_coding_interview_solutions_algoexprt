#include <bits/stdc++.h>
using namespace std;



int getSingleDigitSum(int n) {
    if (n <= 0) {
        return 0;
    }

    return (n-1) % 9+1;
}




int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int num;
    
    


    int result = getSingleDigitSum(525);

    cout << result << endl;

    return 0;
    



}


