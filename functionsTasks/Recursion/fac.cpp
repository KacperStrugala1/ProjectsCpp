#include <iostream>

int fac(int n);
int sum(int n);


int main(){
    std::cout<<"N: ";
    int n;
    std::cin >> n;

    int result = fac(n);

    std::cout<<result;
    std::cout<<sum(n);

}

int fac(int n){
    if (n<2){
        return 1;
    }
    
return n*fac(n-1);
}

int sum(int n){
    if(n<1){
        return 1;
    }
    return n+sum(n-1);
}
