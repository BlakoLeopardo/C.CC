#include <stdio.h>

int main()
{
int fatorial, num;
float x;

for (int i = 0; i < 10; i+=2)
{
    num = i;
    fatorial = 1;
    while (num == 1)
    {
        fatorial += num;
        num--;
    }
    
}


return 0;
}