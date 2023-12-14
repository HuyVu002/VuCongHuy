#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("nhap a,b,c: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float d=b*b-4*a*c;
    if(d>0){
        printf("ptr co 2 nghiem phan biet x1 = %f,x2 = %f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    }else if(d==0){
        printf("ptr co nghiem kep x1=x2 = %f",-b/(2*a));
    }else{
        printf("ptr vo nghiem");
    }
}
