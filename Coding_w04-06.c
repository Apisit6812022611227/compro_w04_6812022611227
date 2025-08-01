#include <stdio.h>
const int GLOBAL_RATE = 10;
void calculate() { 

    const int LOCAL_BONUS = 50;
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {

    calculate();
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);
    return 0;
}
//GLOBAL_RATE ประกาศนอกฟังก์ชัน เป็น global ใช้ได้ทุกที่
//LOCAL_BONUS ประกาศใน calculate() เป็น local ใช้ได้เฉพาะใน calculate()

//เปลี่ยนค่าคงที่ไม่ได้เพราะใช้ const
//Compiler ขึ้นว่า “assignment of read-only variable”

//เพราะ LOCAL_BONUS เป็น local scope มองเห็นเฉพาะภายใน calculate() เท่านั้น

//ตัวแปร const ใช้กำหนดค่า "คงที่" ที่ไม่สามารถเปลี่ยนได้
//Global const ใช้ได้ทุกฟังก์ชัน
//Local const ใช้ได้ในฟังก์ชันที่ประกาศ
//ถ้าพยายามเปลี่ยนค่าหรือเรียกใช้นอกขอบเขตจะขึ้น compile-time error