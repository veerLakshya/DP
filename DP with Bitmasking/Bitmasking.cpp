#include <bits/stdc++.h>
using namespace std;

void add(int x, int& subset){
   subset = (subset | (1 << (x - 1)));
  // can also be done using ^ operation
}

void rem(int x, int& subset){
   subset =  subset ^ (1 << (x - 1));    
  // x-1 as ith bit represent i+1 th number, 1- present, 0- not present
}
void display(int subset){
    // loop from 0 to 9 as we are checking subset of 1 to 10
    for(int bit = 0; bit <= 9; bit++){
        if (subset & (1 << bit)){
            cout << bit + 1 << (bit == 9 ? "\n" : ", ");
        }
        if(bit == 9) cout << endl;
    }
}

int main() {
	int set = 15;    // set bits represent the numbers present in this cur subset
	display(set);
	rem(2, set);
	display(set);
	add(6, set);
	display(set);
}
