#include <stdio.h>

void main()
{
    double *p;

    printf("%zu", sizeof(*p)); //%zu - size_t unsigned
    printf("\n");
}

// Data Type	Format Specifier	Typical Size (Bytes)
// char	                 %c	                    1 byte
// signed char	         %c	                    1 byte
// unsigned char	     %c	                    1 byte
// int	                 %d or %i	            4 bytes
// unsigned int        	%u                  	4 bytes
// short	            %hd                 	2 bytes
// unsigned short	    %hu                 	2 bytes
// long	                %ld	                    4 or 8 bytes (typically 8 bytes on 64-bit systems)
// unsigned long	    %lu                 	4 or 8 bytes (typically 8 bytes on 64-bit systems)
// long long	        %lld                	8 bytes
// unsigned long long	%llu	                8 bytes
// float	            %f or %g	            4 bytes
// double	            %lf	                    8 bytes
// long double	        %Lf                 	8, 10, 12, or 16 bytes (varies by system)
// void *	            %p	                    4 or 8 bytes (depends on the system architecture)
