#include <stdio.h>

    void counCall() {

    static int counter =0;                         //ประกาศค่าแค่ครั้งแรก และคงค่าต่อ

    counter++;                                   // เพิ่มค่าตัวนับทุกครั้งที่มีการเรียกใช้ฟังก์ชัน
    
    printf("Function called %d\n", counter);   // พิมพ์จำนวนครั้งที่ฟังก์ชันถูกเรียกใช้งาน
}

int main() {

    printf("Starting funtion calls...%d\n");    //printf Identifier

    counCall();                               //นับครั้งที่1

    printf("After first call;\n");          //printf Identifier

    counCall();                           //นับครั้งที่2
return 0;

}

// การใช้ static การนับ ครั้งแรกจะได้ 1 และครั้งที่สองจะได้ 2 เพราะการนับจะไม่เริ่มใหม่เสมอ แต่จะดงค่าไว้