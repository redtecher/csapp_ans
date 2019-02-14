#include <stdio.h>
typedef unsigned char* byte_pointer;



int is_little_endian(){
    int i;
    byte_pointer start;
    i=12345;
    start=(byte_pointer)&i;
    if(start[0]!=0){
        return 1;
    }
    else{
        return 0;
    }

    
}

int main(int argc, char const *argv[])
{
    printf("%d",is_little_endian());
    return 0;
}
