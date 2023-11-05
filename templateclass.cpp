#include<iostream>
using namespace std;
template<typename T>
class Array{
    public:
    T arr[10] ;
    
  void fill(T value){
    for(int i = 0;i<10 ;i++){
        arr[i] = value ;

    }
  } 
 T & at(int index){
    return arr[index] ;
 }

};
class Array1{
    public:
    
    string arr1[10];
  void fill(string value){
    for(int i = 0;i<10 ;i++){
        arr1[i] = value ;

    }
  } 
 

};
int main(){
  Array<int> intARR ;
  Array<string>strArr ;
  strArr.fill("12");
cout << int 
    return  0;
}