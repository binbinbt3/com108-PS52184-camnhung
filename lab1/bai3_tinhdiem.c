#include <stdio.h>
int main(){
    char mssv[]="PS52184";
    char hoten[]="nguyen thi cam nhung";
    float diemtoan=8.0;
    float diemly=7.5;
    float diemhoa=8.5; 
    float diemtrungbinh = (diemtoan + diemly + diemhoa)/3;
    printf("ma so sinh vien: %s\n",mssv );
    printf("ho va ten: %s\n",hoten);
    printf("diem toan: %.2f\n",diemtoan);
    printf("diem ly: %.2f\n",diemly);
    printf("diem hoa: %.2f\n",diemhoa);
    printf("diem trung binh: %.2f\n",diemtrungbinh);
    return 0;
}