#include<bits/stdc++.h> // THIS FILE WILL INCULDE ALL THE HEADER FILES REQUIRED FOR THR PROGRAM 
                       //DO NOT USE IN INTERVIEW 
      array<int , 10>arr ;//initiated with value 0 //                 
using namespace std ; 
int main(){
array<int,10>arr ;//In this u initiated array with garbage value 
array<int ,5>arr1 = {0}; //u initiated array with values zeroes //{0,0,0,0,0}
array<int,4>arr3 = {1} ; // {1,0,0,0}
arr3.fill(6); //fill whole container with 6 ;
for(int i = 0 ;i<4 ;i++){
    cout<< arr3.at(i) ;
}
// iterators
// begin() == point towrd the first element
// end == element after the last 
// rbegin() == point towards the element at last
// rend () == point toward the element before start
    return 0 ;

}