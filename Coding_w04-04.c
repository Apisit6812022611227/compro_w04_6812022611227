#include <stdio.h>

int main() {
  
    float score_f = 90.5;
    printf("Score (float) = %.1f\n", score_f);  

    int score_i = (int)score_f;  
    printf("Score (int) = %d\n", score_i);  

    return 0;
}

//1: แสดงค่าเป็น 90 เพราะ int เอาแต่จำนวนเต็ม
//2: แสดงค่าเป็น 90.5 ได้ เพราะใช้ float
//การเลือก Data Type ผิดอาจทำให้ข้อมูล สูญหายได้
//ทำให้แสดงผลไม่ถูกต้อง และอาจทำให้โปรแกรมทำงานผิดพลาด
//ดังนั้นค่าทศนิยมควรใช้ float ไม่ควรใช้ int