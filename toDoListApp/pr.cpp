#include <iostream>
using namespace std;

int main(){
    int option = 1; 
    while(option != 0){
        
        std::cout<<"Add task: ";
        std::string task;
        std::cin>>task;
        
        std::cout<<"Do you want to add another task (1-yes / 0-no): ";
        int decision;
        std::cin >> decision;
        if (decision == 1){
            continue;
        }else{
            option = 0;
        }   
    }
}