#include "bst.h"
#include<bits/stdc++.h>

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    BST a;
    a.insert(5);
    a.insert(3);
    a.insert(7);
    a.insert(9);
    a.insert(2);
    a.display(a.head);

    return 0;
};