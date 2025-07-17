#include <stdio.h>
int main(){

    char nameInitial = 'P'; //ใช้ char เพื่อเก็บอักษรตัวแรกของชื่อ เพราะเป็นตัวอักษรตัวเดียว // กำหนดให้เก็บอักษรตัวแรกของชื่อ

    int age = 18; //ใช้ int เพื่อเก็บอายุ เพราะเก็บค่าตัวแปรเป็น เลขจำนวนเต็ม // กำหนดให้เก็บอายุ

    float weight = 65.5; //ใช้ float เพื่อเก็บน้ำหนัก เพราะสามารถเก็บค่าตัวแปรเป็นทศนิยม // กำหนดให้เก็บน้ำหนัก

    char gender[] = "Male"; //ใช้ char array เพื่อเก็บเพศ เพราะใช้เก็บค่าตัวแปรเป็นชนิด pointer // กำหนดให้เก็บเพศ


    printf("nameInitial: %c\n", nameInitial); // Print the initial of the name

    printf("Age: %d\n", age); // Print the age

    printf("Weight: %.1f kg\n", weight); // Print the weight with one decimal place

    printf("Gender: %s\n", gender); // Print Male



    return 0;
}
