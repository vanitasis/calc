#include <stdio.h>
#include "Input.h"
#include "StandardOp.h"

struct option opt ;

void input() {

    printf( "  ------------------------------------ \n" );
    printf( "---------------------------------------- \n" ) ;
    printf( "||    kkkkk    aaa    ll       kkkk   || \n") ;
    printf( "||   kk       aa  aa  ll     kk       || \n" ) ;
    printf( "||   kk       aaaaaa  ll     kk       || \n") ;
    printf( "||    kkkkk   aa  aa  llllll   kkkk   || \n" ) ;
    printf( "---------------------------------------- \n");
    printf( "  ------------------------------------ \n" );
    printf("                                           \n") ;
    printf("========================================== \n" ) ;

    printf("CHOSE OPERATION : \n") ;
    printf("1.STANDARD OPERATION \n");
    printf("2.ADVANCE OPERTAION \n");
    printf("ENTER : ");
    scanf("%d", &opt.operasi) ;
    
    if (opt.operasi == 1)
    {
        StandardOperation1() ;
    }/*else if (opt.operasi == 2 )
    {
        AdvanceOperation1() ;
    }*/
    
    
}

void StandardOperation1() {

    printf("chose opertaion : ");
    scanf("%d", &opt.opsi);

    if (opt.opsi == 1)
    {
        penjumlahan() ;
    }else if(opt.opsi == 2) {
        pengurangan() ;
    }else if (opt.opsi == 3)
    {
        perkalian() ;
    }else if (opt.opsi == 4)
    {
        pembagian() ;
    }else {
        printf("invalid input !") ;
    }

}