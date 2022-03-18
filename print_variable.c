#include <stdio.h>

int main() {

    int b = 87;
    for (int j = 5; j < 23; j++) {
        //give me some output messages in following format
        //and that can be done by add only ONE line code.
        //please refer to Stdio.h slides page 15.

        //j=5, b=435
        //j=6, b=522
        //j=7, b=609
        //j=8, b=696
        //j=9, b=783
        //...
        //j=22, b=1914
        printf("j=%d, b=%d\n",j,b*j);
    }
}
