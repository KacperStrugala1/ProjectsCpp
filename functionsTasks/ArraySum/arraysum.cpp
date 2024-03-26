#include <iostream>
const int ArSize = 9;
// przekazanie parametrow w prototypie funkcji (tablica arr jako wskaznik i rozmiar n tablicy)
int cookies(int arr[],int n);

int main(){
    int arr[ArSize] = {1,2,4,5,6,7,8,9,10};

    int func1 = cookies(arr,ArSize);
   // std::cout<<func1;
    std::cout<< arr;



}
//0 1 2 3 4 5
int cookies(int arr[],int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        
        sum = sum + arr[i];
        
    }
    return sum;


}