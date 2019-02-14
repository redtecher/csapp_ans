#include <stdio.h>
#include <stdlib.h>
typedef unsigned char*  byte_pointer;
void show_bytes(byte_pointer start, int len){
    int i;
    for (i = 0; i < len; i++)
        printf ("%.2x", start[i]);
    printf("\n");
}
unsigned replace_byte(unsigned x,int i ,unsigned char b){
    printf("%x\n",x);

    
    int len;
    unsigned result;
    len =sizeof(x);
    
    byte_pointer start = (byte_pointer)&x;
    byte_pointer p_result;
    p_result= (byte_pointer)malloc(sizeof(int));


    
    show_bytes(start,len);
    
    for (int j = 0; j < len; j++){
        if (j!=i){

            p_result[j]=start[j];

        }
        else{
            p_result[j]=b;
        }
    }
    show_bytes(p_result,len);
    
    result =p_result[0]+p_result[1]+p_result[2]+p_result[3];
    show_bytes((byte_pointer)&result,len);
    printf("%d",result);
    return result;
    
}


int main(int argc, char const *argv[])
{
    unsigned result;

    result=replace_byte(0x12345678,2,0xab);
    printf("%x",result);
    return 0;
}

