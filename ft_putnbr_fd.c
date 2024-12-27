#include "ft_libft.h"

void ft_putnbr_fd(int n, int fd)
{
            unsigned int nb;
            nb = n;
            if(n < 0)
            {
                ft_putchar_fd('-', fd);
                nb *= -1;

                

            }  
            if(n < 10)
            
                    ft_putchar_fd(nb + '0', fd);
                    
            else
            {
                    ft_putnbr_fd(nb / 10, fd);
                    ft_putnbr_fd(nb % 10, fd);

            }
            
}
