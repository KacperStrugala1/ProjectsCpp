#include <iostream>

void program(){
    std::cout<<"What you want to do with your list:\n[1]-Add task\n[2]-Delete task\n[3]-Show all tasks\n[4]-Mark as done\n[5]-End the program"<<std::endl;

}
void optionOne(){
    std::cout<<"Add task: ";
    std::string task;
    std::cin>>task;
    
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
    program();
    std::cout<<"Select operation: ";
    int choice = 0;
    std::cin>>choice;
    do{
        switch (choice){
        case 1: optionOne(); break;
        case 2: optionTwo(); break;
        case 3: optionThree(); break;
        case 4: optionFour(); break;
        default:
            break;
        }
    }while(choice != 5);
    return 0;
}