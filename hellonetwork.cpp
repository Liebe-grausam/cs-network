#include <iostream>
#include <cstdlib>
#include <stdlib.h>
int main(int argc, char *argv[]){
    //std::cout<<"This exe is running!";debug
    int flag = atoi(argv[1]);
    if (flag == 1){
        std::cout<<"Hello Network Hello PKU";
    }
    else{
        std::cout<<"Your input is incorrect!";
    }
    return 0;
}
