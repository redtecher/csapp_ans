#include <stdio.h>
typedef unsigned char*  byte_pointer;

unsigned replace_byte(unsigned x,int i ,unsigned char b){
       int len;
    unsigned result;
    len =sizeof(x);
    byte_pointer start = (byte_pointer)x;
    byte_pointer p_result;
    for (int j = 0; j < len; j++){
        if (j!=i){
            p_result[j]=start[j];

        }
        else{
            p_result[j]=b;
        }
    }
    result =(unsigned)&p_result  ;
        
    printf("\n");
    return result;
}


int main(int argc, char const *argv[])
{
    unsigned result;

    result=replace_byte(0x12345678,2,0xab);
    printf("hello world");
    printf("hello%x",result);
    /* code */
    return 0;
}

