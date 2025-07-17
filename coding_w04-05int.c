#include <stdio.h>

void counCall() {
    
    int counter = 0; //การนับจะเริ่มนับ 0 ใหม่เสมอ โดยไม่คงค่าไว้ เหมือนการใช้ static
    
    counter++; // Increment the counter each time the function is called
    
    printf("Function called %d\n", counter); // Print the number of times the function has been called
}

int main() {

printf("Starting funtion calls...%d\n"); //printf Identifier


counCall(); //นับครั้งที่1


printf("After first call;\n"); //printf Identifier


counCall(); //นับครั้งที่2 
            //printf Identifier

return 0;



}

/*การไม่ใช้ Static นำหน้า int การนับครั้งแรกและครั้งที่สอง จะได้ 1 เสมอเพราะ การนับในแต่ละครั้งจะเริ่ม 0 ใหม่เสมอ*/