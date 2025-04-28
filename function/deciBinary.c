#include <stdio.h>

void deciBinary(int deci){
    int binary[32];
    int i=0;
    while(deci>0){
        binary[i] = deci % 2;
        deci = deci/2;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        printf("%d",binary[j]);
    }
}

int main(){
    int deci;
    printf("Enter any Decimal Num: ");
    scanf("%d",&deci);

    if(deci==0){
        printf("Binary Equivalent: ");
    }else{
        deciBinary(deci);
    }
    return 0;
}