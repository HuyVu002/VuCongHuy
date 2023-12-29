// 2. Nhập 1 mảng n số nguyên. Tìm giá trị xuất hiện nhiều nhất trong mảng đó
#include <stdio.h>

int main(){
    int n;
    printf("nhap kich thuoc mang: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int maxCount=0;

    for(int i=0;i<n;i++){
        int count=1;         // count đặt trong for để reset mỗi lần kiểm tra giá trị lặp
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(maxCount<count){
            maxCount=count;
        }
        if (count == maxCount) {        // nếu có giá trị lặp lại với số lần = nhau thì printf
                                        // nếu không có case đó xảy ra thì count vẫn = maxCount khi kết thúc vòng lặp
                                        // -> vẫn printf đc max duplicate value
            if(maxCount > 1){  // lí do đặt count = 1 chứ ko phải là 0
                printf("gia tri lap lai nhieu nhat la: %d\n ", arr[i]);
            }else{
                printf("khong co gia tri trung lap");
                break;
            }
        }
    }
}
