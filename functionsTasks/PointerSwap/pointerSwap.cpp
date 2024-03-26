#include <iostream>

void changeNum(int*, int*);
int main(){
    int first = 5;
    int second = 14;
    int* a =  &first;
    int* b = &second;
    std::cout<<"First number: "<<first<<std::endl<<"Second: "<<second<<std::endl;
    changeNum(a,b);
   
   
   std::cout<<"Swap, first: "<<*a<<std::endl;
   std::cout<<"Second: "<<*b<<std::endl;

}

void changeNum(int* a, int* b){
    int temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;

}