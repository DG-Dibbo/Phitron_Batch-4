#include <stdio.h>
int main()
{
    //1.char array -> string (ata akta super man dora jaay)
    //2. sizeof() ata diye size ber kora jaay data type er doro.
     char a[5];//akti char 1byte jayga naay.
    int sz = sizeof(a)/sizeof(char);
    printf("%d",sizeof(char));//ekhane sizeof(long long int hote sob bosate parbo).
    return 0;
}