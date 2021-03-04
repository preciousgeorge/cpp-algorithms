#include <iostream>
#include <string.h>

using std::cout;
using std::endl;

int main(int argc, char *argv[]){
    
    int maxLength = 0;
    char *maxString;
    for(int i = 1; i < argc; i++){
        if (maxLength < strlen(argv[i])){
            maxLength = strlen(argv[i]);
            maxString = argv[i];
        }
    }

    cout << "Max string length: " << maxLength << endl;
    cout << "Max string: " << maxString << endl;
    cout << "Memory address: " << &maxString << endl;

}