#include <stdio.h>
typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, int len){
    int i;
    for (i = 0; i < len; i++)
        printf ("%.2x", start[i]);
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer)&x, sizeof (int));
}

void show_float(float x){
    show_bytes((byte_pointer)&x, sizeof (float));
}

void show_pointer(void *x){
    show_bytes((byte_pointer)&x, sizeof (void *));
}

void test_show_bytes(int val){
    int ival = val;
    float fval = (float) val;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main(int argc, char const *argv[])
{
    show_float(3510593);    //0.001953  IEEE浮点数表示
    show_int(3510593);      //0x359141
    
}
/*
3510593 = 1.101011001000101000001 *2^21
first bit = 0  the signed bit
eight bits below = 21+127 =148 =10010100(2)
23 bits last =101011001000101000001 (2)+00(2)

ans =0 10010100 10101100100010100000100 = ‭4A564504‬(16)

*/

