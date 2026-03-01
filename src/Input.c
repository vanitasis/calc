#include <stdio.h>
#include "Input.h"
#include "StandardOp.h"

struct option opt ;

void input() {

    printf("chose opertaion : ");
    scanf("%d", &opt.opsi);

    if (opt.opsi == 1)
    {
        penjumlahan() ;
    }else if(opt.opsi == 2) {
        pengurangan() ;
    }
    

}