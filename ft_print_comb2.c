#include <unistd.h>
#include <stdio.h>

void ft_print_comb_2(void)
{
   
    int a = 0 + '0';
    int b = 0 + '0';
    int c = 0 + '0';
    int d = 1 + '0';

while(a != 9 + '0' || b != 8 +'0' || c != 9 + '0' || d != 9 + '0')  
{
    while(a <= 9 + '0' || (a != 9 + '0' || b != 8 +'0' || c != 9 + '0' || d != 9 + '0'))
    {
        while(b <= 9 + '0' || (a != 9 + '0' || b != 8 +'0' || c != 9 + '0' || d != 9 + '0'))
        {
            while(c <= 9 + '0' || (a != 9 + '0' || b != 8 +'0' || c != 9 + '0' || d != 9 + '0'))
            {
                while(d <= 9 + '0' || (a != 9 + '0' || b != 8 +'0' || c != 9 + '0' || d != 9 + '0'))
                {
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, " ", 1);
                    write(1, &c, 1);
                    write(1, &d, 1);
                    if(a != 9 + '0' || b != 8 + '0' || c != 9 + '0' || d != 9 + '0')
                        write(1, ", ", 2);
                    d++;
                }
                d = 0 + '0';
                c++;
            }
            c = 0 + '0';
            b++;
        }
        b = 0 + '0';
        a++;
    }
}

} 




int main(void)
{
    ft_print_comb_2();
	return(0);
}