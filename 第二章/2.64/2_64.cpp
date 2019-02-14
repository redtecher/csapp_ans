#include <stdio.h>

int any_odd_one(unsigned i){


    return !!(i & (0x55555555));


}

int main(int argc, char const *argv[])
{
    printf("%d",any_odd_one(0xefffffff));
    return 0;
}
