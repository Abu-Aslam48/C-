
// #include <stdio.h>
// int main() {
//     int x = 2;
//     int y = x++ * ++x;///y=2*4=8
//     int z= ++x *4;
//     float v=x/2.00;
//     int c=5%y;   //5%8=
//     printf("y = %d, x = %d\n z=%d\n v=%.1f\n  c=%d ", y, x,z,v,c);
//     return 0;
// }

//////*****  (%)= means (/) vag kore jata baki thekba sata ans

#include <stdio.h>
int main() {
    int p = 4, q = 6;
    int r =  (p++ * --q)%(p + q/2);//(4*5)%(5+5/2)
 float e =q/2;    //5/2
 int cd=q;//5
 int dc=(--q * ++p )% (8*4); //24%32=24
 int vb=p++;
    printf(" p= %d q=%d r=%d e=%.2f cd=%d dc=%d", p, q,r,e,cd,dc);
    return 0;
}
