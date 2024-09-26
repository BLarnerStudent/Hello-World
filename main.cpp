#include "mbed.h"

// main() runs in its own thread in the OS
int main()                                                  // creates an interger called main
{   
    printf("Hello World\n");                                // prints Hello World

    int a;                                                  // creates and interger called a

    for (a=0; a < 5; a = a + 1)                             // a is euqal to 0, while a is less than five add one to a
    {
        printf("a = %d\n",a);                               // prints a = then the interger a

        ThisThread::sleep_for(5s);
    }
    
    printf("final value of a is %d\n", a);                  // prints final value of a is interger a
    
    while (true);                                           
}