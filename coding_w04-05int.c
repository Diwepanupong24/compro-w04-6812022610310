#include <stdio.h>

void counCall() {
    
    int counter = 0;                            //การนับจะเริ่มนับ 0 ใหม่เสมอ โดยไม่คงค่าไว้ เหมือนการใช้ static
    
    counter++;                                   // เพิ่มค่าตัวนับทุกครั้งที่ฟังก์ชันถูกเรียกใช้งาน
    
    printf("Function called %d\n", counter);     // แสดงจำนวนครั้งที่มีการเรียกใช้ฟังก์ชัน
}

int main() {

printf("Starting funtion calls...%d\n");        //printf Identifier


counCall();                                     //นับครั้งที่1


printf("After first call;\n");                  //printf Identifier


counCall();                                     //นับครั้งที่2 
                                                //printf Identifier

return 0;



}

/*การไม่ใช้ Static นำหน้า int การนับครั้งแรกและครั้งที่สอง จะได้ 1 เสมอเพราะ การนับในแต่ละครั้งจะเริ่ม 0 ใหม่เสมอ*/