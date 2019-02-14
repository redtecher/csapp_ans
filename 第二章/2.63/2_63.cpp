#include<stdio.h>

unsigned srl(unsigned x,int k){
    //算数右移
    unsigned xsra =(int)x>>k;
    xsra=xsra&(~(0xffffffff<<(8*sizeof(int)-k)));
    return xsra;
}

int sra(int x,int k){
    //逻辑右移
    int xsrl =(unsigned)x>>k;
    xsrl=xsrl|(0xffffffff<<(8*sizeof(int)-k));
    return xsrl;
}

int main(int argc, char const *argv[])
{
    unsigned x =0xff000000;
    int y = 0xff000000;
    printf("%x\n",srl(x,3));
    printf("%x",sra(x,3));
    return 0;
}
