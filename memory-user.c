#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc ,char* argv[]){
    int garbo[] = {1,2,3,4,5};
    size_t index = 0;
    size_t size = sizeof(garbo) / sizeof(garbo[0]);

    if(argc < 2){
        printf("%s <megabytes>\n", argv[0]);
    }

    long megabytes = atol(argv[1]);
    size_t bytes = (size_t)megabytes * 1024 * 1024;

    char* ptr = (char*)malloc(bytes);
    if(ptr == NULL){
        printf("Allocation Fail\n");
        return 1;
    }
     while(1){
        printf("%d\n",garbo[index]);
        index = (index + 1) % size;
     }
}