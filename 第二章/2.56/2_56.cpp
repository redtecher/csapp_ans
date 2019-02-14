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
    int test = 12345;
    test_show_bytes(test);
    printf("\n");
    
    int test2=12346;
    test_show_bytes(test2);
    
}

/*
39300000 #12345的16进制表示，采用小端法机器
00e44046 #12345.0 float 的表示
f4fe6100 #指针的表示

3a300000 #12346
00e84046 #12346.0 
f4fe6100

*/
