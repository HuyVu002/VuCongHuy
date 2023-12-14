#include <stdio.h>

int main(){
// 1. Nhập 1 số nguyên n, in ra các số lẻ nhỏ hơn n
    int n;
    printf("nhap so nguyen: ");
    scanf("%d",&n);
    // int i=1;
    // while(i<n){
    //     printf("%d",i);
    //     printf("\n");
    //     i+=2;
    // }
// 2. Nhập 1 số nguyên n, tìm số lớn nhất nhỏ hơn n (tiệm cận dưới) và chia hết cho cả 2 và 3

    // while(n>0){
    //     n--;
    //     if((n%2==0) && (n%3==0)){
    //         printf("%d",n);
    //         break;
    //     }
    // }
    
// 3. Nhập 1 số nguyên n, tìm các ước số của n.
    // int i=1;
    // while(i<n){
    //     if(n%i==0){
    //         printf("%d",i);
    //         printf("\n");
    //     }
    //     i++;
    // }
// 4. Nhập 1 số nguyên n, tìm số đảo ngược của n.
    int k=0;
    while(n>0){
        k=k*10+n%10;
        n/=10;
    }
    printf("%d",k);
}