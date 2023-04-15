#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//Burak Önce  20120205052
//Bu program dizinin elemanlarını Recursive Fonksiyon ile toplar



int dizitoplam(int k[],int uzunluk){


if(uzunluk==-1)         //temel durum
return 0;

return k[uzunluk]+dizitoplam(k,uzunluk-1);     //Recursive kısım


}



int main() {
    
    int k[]={34,45,6,4,3,45,234,23,9,26,77,93,-6,-34};
    
    printf("%d",dizitoplam(k,14));
    
    
    return 0;
}