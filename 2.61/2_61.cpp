#include<stdio.h>


int main(){
    int x;
    //!(~x);
    //!x;
    //!(~((x<<((sizeof(int)-1)<<3))|0x00ffffff))
    //!(x&0xff000000)


    x=0x01ade313;
    // printf("%X\n", (x<<((sizeof(int)-1)<<3)));
     //printf("%X\n",0xffffffff);
     printf("%x",!(x&0xff000000));

     return 0;
}