#include <bits/stdc++.h>
using namespace std;






int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int num;
    
    


    std::vector<int> inputArray = {1, 2, 3, 4, 5};

    // Copy the variable from the input array
    int variable = inputArray[2];

    // Display the initial values
    std::cout << "Original values:" << std::endl;
    std::cout << "inputArray[2]: " << inputArray[2] << std::endl;
    std::cout << "variable: " << variable << std::endl;

    // Modify the variable
    variable = 10;

    // Display the modified values
    std::cout << "\nAfter modifying variable:" << std::endl;
    std::cout << "inputArray[2]: " << inputArray[2] << std::endl; // Should remain unchanged
    std::cout << "variable: " << variable << std::endl;

    // Modify the variable in the input array
    inputArray[2] = 20;

    // Display the values after modifying the input array
    std::cout << "\nAfter modifying inputArray:" << std::endl;
    std::cout << "inputArray[2]: " << inputArray[2] << std::endl;
    std::cout << "variable: " << variable << std::endl; // Should be reflected

    return 0;
    



}


