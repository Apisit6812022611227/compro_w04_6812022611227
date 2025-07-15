#include <stdio.h>

void countCall() {
    static int counter = 0;  // ใช้ static → ค่าจะคงอยู่ระหว่างการเรียกฟังก์ชัน
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();  // ครั้งที่ 1
    printf("After first call:\n");
    countCall();  // ครั้งที่ 2
    countCall();  // ครั้งที่ 3
    return 0;
}
#include <stdio.h>

void countCall() {
    int counter = 0;  // non-static → สร้างใหม่ทุกครั้งที่เรียกฟังก์ชัน
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();  // ครั้งที่ 1
    printf("After first call:\n");
    countCall();  // ครั้งที่ 2
    countCall();  // ครั้งที่ 3
    return 0;
}
// 1 (static): ตัวแปร counter จะจดจำค่าเดิมไว้ระหว่างการเรียกฟังก์ชัน ทำให้ค่าถูกเพิ่มขึ้นทุกครั้ง
// 2 (non-static): ตัวแปร counter จะถูกสร้างใหม่ทุกครั้ง เริ่มจาก 0 ตลอดและค่อยเพิ่มเป็น 1
//ความแตกต่างของ Static และ Non-Static
//Static จะอยู่จนจบโปรแกรม
//Non-Static Variable จะอยู่แค่ตอนที่ฟังก์ชันยังทำงานอยู่
//ถ้าใช้ตัวแปรธรรมดา (non-static) ค่าจะ reset ทุกครั้งและไม่สามารถสะสมค่าได้