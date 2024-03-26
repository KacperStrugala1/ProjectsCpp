#include <iostream>
#include <string> 
#include <vector>

void program(){
    std::cout<<"What you want to do with your list:\n[1]-Add task\n[2]-Delete task\n[3]-Show all tasks\n[4]-Mark as done\n[5]-End the program"<<std::endl;

}
void optionOne(){
    char decision = 'y';
    int option = 1; 
    do{1

        std::string tasks[100];
        std::cout << "Add task: ";
        std::getline(std::cin, tasks[100]);
        
        std::cout<<"Do you want to add another task (y/n): ";
        char decision;
        std::cin >> decision;

        if (decision == 'y'){
            continue;
        }else if (decision =='n'){
            break;
            option = 0;
        }else{//dodac ponowne probowanie
            break;
            option = 0;
        } 
        
        
        
    }while(option != 0 && decision != 'n');
    
    
    
 }
void optionTwo(){
    std::cout<<"Which task you want to delete: ";
    int deletedtask;
    std::cin>>deletedtask;
}
void optionThree(){
    std::cout<<"That's all your tasks: ";
    
}
void optionFour(){
    std::cout<<"Which task you want to mark as done: ";
    int donetask;
    
}

int main(){
    std::string tasks[100];
    int choice = 0;
    do{
        program();
        std::cout<<"Select operation: ";
        std::cin>>choice;

        switch (choice){
        case 1: 
            optionOne(); 
            break;
        case 2: 
            optionTwo(); 
            break;
        case 3: 
            optionThree(); 
            break;
        case 4: 
            optionFour(); 
            break;
        }
    }while(choice != 5);
    return 0;
}