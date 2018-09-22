#include <stdio.h>

int int_shifts_are_arithmetic(){
    int x = 0xff000000;
    printf("%x\n",x>>((sizeof(int)-1)<<3));
    return !(~(x>>((sizeof(int)-1)<<3)));

}

int main(int argc, char const *argv[])
{
    printf("%d",int_shifts_are_arithmetic());
    /* code */
    return 0;
}
