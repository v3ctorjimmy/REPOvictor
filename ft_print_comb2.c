#include <unistd.h>
void ft_print_comb2(void)
{
    int a;
    int b;
    int c;
    int d;

    a = '0';
    while(a <= '9')
    {
        b = '0';
        while(b <= '9')
        {
            c = a;
            while(c <= '9')
            {
                d = b+1;
                while(d <= '9')
                {
                    if(!(a == 9 && b == 8 && c == 9 && d==9))
                    {
                    write(1, ", ", 1);
                    } 
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, " " , 1);
                    write(1, &c, 1);
                    write(1, &d, 1);
                    d++;
                }
                
                c++;
            }
          
            b++;
        }
        
        a++;
    }
}
int main(void)
{
    ft_print_comb2();
    return(0);
}

 
