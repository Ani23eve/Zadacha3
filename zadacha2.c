#include <stdio.h>
#include <stdarg.h>

unsigned bitsNCount(unsigned count, unsigned bitscnt, ...);

int checkBit(int mask, unsigned bit);


int main(){

    printf("\n%d\n", bitsNCount(4, 1, 3, 2, 4));

    


  return 0;  
}


int checkBit(int mask, unsigned bit){
    return mask&(1<<bit);
}

unsigned bitsNCount(unsigned count, unsigned bitscnt, ...){

    va_list ap;
    va_start(ap, bitscnt);
    bitscnt=0;
    for(int i=0; i<count; i++){
        int mask = va_arg(ap, int);
            printf("%d\n", mask);
                for(int bit_number = sizeof(int) - 1; bit_number >= 0; bit_number--){
                        printf("%d", checkBit(mask, bit_number));
                        bitscnt+= checkBit(mask, bit_number);
                }


    }
return 0;
}
