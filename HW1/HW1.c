#include<stdio.h> 
int main() {
    char c;
    printf("Please input a string, if want to stop, just input Enter.\n");
    while((c=getchar()) != EOF && c != '\n') {
        if(c >= 'a' && c <= 'z') {
            c = c - 32;
        } else if(c >= 'A' && c <= 'Z') {
            c = c + 32; 
        }
        putchar(c);
    }
    return 0;
}