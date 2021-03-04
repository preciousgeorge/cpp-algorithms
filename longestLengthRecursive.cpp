#include <iostream>
#include <string.h>

using std::cout;
using std::endl;

int iterate(char *words[], int length, int longestNumber = 0){
    if(length == 0)
    {
        return longestNumber;
    }else{
        if(longestNumber < strlen(words[length])){
            longestNumber = strlen(words[length]);
        }
        return iterate(words, length - 1,longestNumber);
    }
}

int main(int argc, char *argv[]){
    int num;
    num = iterate(argv, argc - 1);
    cout << "Longest Length: " << num << endl;
}

