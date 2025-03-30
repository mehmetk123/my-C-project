#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int x, y, z, i;

x = 1;
y = 1;

for(i=0;i<15;i++) {
    z = x + y;
    x = y;
    y = z;
}
printf("%d\n", z);
    
    
    
    
    return 0;
}







