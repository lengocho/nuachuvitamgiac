#include <stdio.h>
#include <stdlib.h>
float tinhnuachuvitamgiac (int a, int b, int c){
    return (float) (a + b + c)/2;
}

int main() {
    int a,b,c;
    printf("Vui long nhap vao canh so 1 cua tam giac: ");
    scanf("%d", &a);
    printf("Vui long nhap vao canh so 2 cua tam giac: ");
    scanf("%d", &b);
    printf("Vui long nhap vao canh so 3 cua tam giac: ");
    scanf("%d", &c);
    if ((a <= 0) | (b <=0) | (c <= 0)) {
        printf("Do dai 1 canh tam giac khong the nho hon hoac bang 0");
        return 0;
    }
    if ((a + b <= c)| (a + c <= b) | (b + c <= a)) {
        printf("Tong 2 canh cua 1 tam giac phai luon lon hon canh con lai (theo bat dang thuc tam tac)");
        return 0;
    }
    printf("Nua chu vi cua tam giac co gia tri la: %2f", tinhnuachuvitamgiac(a,b,c));
    return 0;
}