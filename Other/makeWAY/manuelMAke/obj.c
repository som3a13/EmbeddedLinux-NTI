#include <stdio.h>


int main()
{
    int x=1;
    int y =2;
    int res = x+y;
    printf("%d\n",res);
    return 0;

}
// objdump -t file    symbol table  (nm filename) 
// objdump -d file    assembly
// objdump -s file    hex code
// readelf -s file     symboltable
// readelf -s file     headerfile info
// size file            size of sections
// objdump -x file     header needed for file
//ldd file              dynamic libr
//file filename       info