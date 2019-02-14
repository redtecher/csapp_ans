#include<stdio.h>
typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, int len){
    int i;
    for (i = 0; i < len; i++)
        printf ("%.2x", start[i]);
    printf("\n");
}
/*
int add(byte_pointer x,byte_pointer y)
{
    byte_pointer result;
    int x1 = 0x89ABCDEF;
    int y1 = 0x76543210;
    printf("%x",x1);
    printf("%x",y1);
    
    


    return 1;
}
*/
int main(int argc, char const *argv[])
{
    /*
    int result = 8;
    int x2,y2;
    unsigned int x1 = 0x89ABCDEF;
    unsigned int y1 = 0x76543210;
    printf("%x\n",x1);
    printf("%x\n",y1);
    byte_pointer x = (byte_pointer)&x1;
    byte_pointer y =(byte_pointer) &y1;
    show_bytes(x,sizeof(int));
    show_bytes(y,sizeof(int));
    x2=x1%256;
    y2 =y1/256;
    
    printf("%x\n",x2);
    printf("%x\n",y2);
    */
    unsigned int xx,yy;
    xx=0x89abcdef;
    yy=0x76543210;
    byte_pointer start,first;

    start = (byte_pointer)&yy;
    first = (byte_pointer)&xx;
    printf("%.2x\n",start[0]);
    printf("%.2x\n",first[0]);
    start[0]= first[0];

    show_bytes(start,sizeof(int));
    return 0;
}
