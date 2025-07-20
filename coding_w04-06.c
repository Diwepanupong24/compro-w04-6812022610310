#include <stdio.h>
    const int GOBAL_RATE = 20; //ประกาศนอกฟังก์ชัน เป็นตัวแปรคงที่ที่สามารถเข้าถึงได้จากทุกที่ในโปรแกรม

    void calcuate(){

const int LOCAL_BONUS =80; // Local ประกาศภายในฟังก์ชัน เป็นตัวแปรคงที่ที่สามารถเข้าถึงได้เฉพาะภายในฟังก์ชันนี้

printf("Global rate: %d\n", GOBAL_RATE); // Accessing global constant

printf("Local bonus: %d\n", LOCAL_BONUS); // Accessing local constant

}

int main() {


calcuate(); // Call the function to see the output

printf("Global rate: %d\n", GOBAL_RATE); // Accessing global constant in main

return 0;
}

/*Return statement to indicate successful execution
GOBAL คือ Global constant variable ที่ประกาศนอกฟังก์ชัน สามารถเข้าถึงได้จากทุกที่ในโปรแกรม LOCAL คือ Local constant variable ที่ประกาศภายในฟังก์ชัน สามารถเข้าถึงได้เฉพาะภายในฟังก์ชันนั้น
การใช้ const ช่วยให้ค่าคงที่ไม่สามารถเปลี่ยนแปลงได้
เมื่อ run โปรแกรมจะแสดงผลค่าคงที่ทั้งสองตัวแปร
Global rate: 10 และ Local bonus: 50
Global rate: 10 โดยที่ Local bonus จะไม่สามารถเข้าถึงได้จาก main เพราะมันเป็นตัวแปรในฟังก์ชัน
แต่ GOBAL สามารถเข้าถึงได้จาก main เพราะมันเป็นตัวแปรคงที่ที่ประกาศนอกฟังก์ชัน
21 22 เมื่อเปลี่ยน GOBAL_RATE เป็น 20 และ LOCAL BONUS เป็น 80
โปรแกรมจะแสดงผลเป็น Global rate: 20 และ Local bonus: 80
*/
