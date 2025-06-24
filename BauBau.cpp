#include <iostream>
#include <string>

int main(int argc, char *argv[]){
    if(argc != 2){
        return 0;
    }
    int count = std::stoi(argv[1]);
    for(int i = 0; i < count; i++){
        std::cout << "BAU!" << std::endl;
    }
    return 0;
}
