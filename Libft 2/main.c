#include <fcntl.h>
#include <stdio.h>
#include "libft.h"
#include <string.h> 

 char    f(unsigned int i, char a)
{
                return ('z');
}

void f1(unsigned int i, char *a)
{
   *a = '5';
  return ;
}


int main(void)
{
        /*   ft_isalpha   */
    /*
    printf("%d\n",ft_isalpha('5'));
    printf("%d\n",ft_isalpha('H'));
    printf("%d\n",ft_isalpha('&'));
    printf("%d\n",ft_isalpha('b'));
    printf("%d\n",ft_isalpha(0));
    */
        /*   ft_isdigit   */
    /*
    printf("%d\n",ft_isdigit('5'));
    printf("%d\n",ft_isdigit('H'));
    printf("%d\n",ft_isdigit('&'));
    printf("%d\n",ft_isdigit(200));
    printf("%d\n",ft_isdigit(0));
    */
        /*   ft_isalnum   */
    
    /*
    printf("%d\n",ft_isalnum('5'));
    printf("%d\n",ft_isalnum('H'));
    printf("%d\n",ft_isalnum('&'));
    printf("%d\n",ft_isalnum(200));
    printf("%d\n",ft_isalnum(0));
    */
            /*   ft_isascii   */
    /*
    printf("%d\n",ft_isascii('5'));
    printf("%d\n",ft_isascii(-5));
    printf("%d\n",ft_isascii('~'));
    printf("%d\n",ft_isascii(200));
    printf("%d\n",ft_isascii(0));
    */
            /*   ft_strlen   */
    
    /*
    char *str;

    str = "slimka";
    printf("%zu\n",ft_strlen(str));
    printf("%zu\n",ft_strlen(NULL));
    printf("%zu\n",ft_strlen('\0'));
    printf("%zu\n",ft_strlen(""));
    */

            /*   ft_memset   */
    
       
    char str[50] = "Let us see a simple example in C";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str, '.', 4*sizeof(char));
  
    printf("After memset():  %s\n", str);

   //int t[5] = {1,2,3,4,5};
   // printf("\nBefore memset(): %s\n", str1);
  
    // Fill 8 characters starting from str[13] with '.'
   // ft_memset(t, 32, 8);
  
    //printf("After memset():  %s\n", str1);

        

            /*   ft_bzero   */
            /*
        char str[10] = "abdeabde";
        
        for (int i = 0; i < 10; i++)
		printf("%d", str[i]);
        bzero(str, 3);
        printf("\nbzero \n");
        for (int i = 0; i < 10; i++)
		printf("%d", str[i]);
        printf("\n");
        char str1[10] = "abdeabde";
        
        for (int i = 0; i < 10; i++)
		printf("%d", str1[i]);
        printf("\nft_bzero\n");
        ft_bzero(str1, 3);
         for (int i = 0; i < 10; i++)
		printf("%d", str1[i]);
        */
                /* memcpy */
        /*
        char str[10] = "abdeabde";
        char str1[10] = "sallahi";
        printf("before memcpy  : %s %s \n", str,str1);

        ft_memcpy(str, str1, 3);
        printf("after memcpy  : %s %s \n", str,str1);
        */

                /* memmove */
        /*
        char *h = ft_strdup("Dans cette première partie");
        ft_memmove(h+4, h, 27);
	printf("%s\n", h+4 );
	
        */
                /* strlcpy  */
        /*
        char src[27] = "Dans cette première partie";
        char dest[27];

        printf("%ld\n",ft_strlcpy(dest, src,0));

        printf("%s\n", dest);
        */
                /* ft_strlcat */
        /*
        char s1[30] = "Dans cette première partie";
        char s2[10] = "sallahi";
        printf("len s1 %ld\n", ft_strlen(s1));
        printf("len s2 %ld\n", ft_strlen(s2));
        printf("%ld\n", ft_strlcat(s1,s2, 20));
        printf("%s\n",s2);
        */

                /* ft_strchr */
        /*
        char s1[20] = "sallahi ";
        printf("fst occurence %s .\n", ft_strchr(NULL, 'a'));
        */

                /* ft_strrchr */
        /*
        char s1[20] = "sallahi ";
        printf("fst occurence %s .\n", ft_strrchr(s1, 'f'));
        */


                /* ft_strncmp */
        /*
        char s1[10] = "sallahi ";
        char s2[10] = "sallahi ";

        printf("ft_strncmp %d .\n", ft_strncmp(s1,s2,2));
        printf("strncmp %d .\n",    strncmp(s1,s2,2));
        */

                /* memchr */
        /*
        char k[] = "sallahi";
        char *str;
        str =ft_memchr(k, 'a',4);
         printf("%s\n",str);
        */

                /* memcmp */
        /*
        char k[] = "sallahi";
        char l[] = "sallahi";

        printf("%d\n",ft_memcmp(k,l,1));
        */


                /* strnstr */
/*
        

        char	*s1 = "see FF your FF return FF now FF";
	char	*s2 = "FF";
	size_t	max = strlen(s1);

	char	*i2 = ft_strnstr(s1, s2, max);
        printf("%s\n",i2);
*/
                /* atoi */
        /*
        char *n = "945";

	printf("%d\n",atoi(n));
	printf("%d\n",ft_atoi(n));
        */
                /* calloc */
        /*
        char *j;

        j = ft_calloc(4,sizeof(char));
        int i = 0;
        while(i < 4) {
                printf("%d\n",j[i]);         
                i++;
        }
        free(j);
        */

              /* strdup */
/*
        char 	*str;
	char	*tmp = "HAHAHA \0 tu me vois pas !";
        int l = ft_strlen(tmp);
	str = ft_strdup(tmp);
	printf ("%d\n",ft_strncmp(str, tmp,l));
*/
              /* substr */
        /*
        char	*str = "i just want this part #############";
	size_t	size = 22;
        
	char	*ret = ft_substr(str, 0, 22);
        printf("%s. \n",ret);
        */

                /*  strjoin */

        /*
        char	*s1 = "my favorite animal is";
	char	*s2 = " ";
	char	*s3 = "the nyancat";
	char	*res = ft_strjoin(ft_strjoin(s1, s2), s3);
	printf("%d\n",strcmp(res, "my favorite animal is the nyancat"));
        */

                /* strtrim */
        /*
        const char	*s1 = "ba ter  ab";
	const char	*s2 = "ab";

        printf("%s.\n", ft_strtrim(s1,s2));
        */

                /* split */
        /*
        char	*string = "      split       this for   me  !       ";
	char	**expected = ((char*[5]){"split", "this", "for", "me", "!"});

	char	**result = ft_split(string, ' ');
        int i = -1;
        while (++i < 5)
                printf("%s\n",result[i]);

        free(result);
        */
        

                /*  itoa  */
/*      
        char	*i1 = ft_itoa(-623);
	char	*i2 = ft_itoa(156);
	char	*i3 = ft_itoa(-0);

        printf ("%d\n", strcmp(i1,"-623"));
        printf ("%d\n", strcmp(i2,"156"));
        printf ("%d\n", strcmp(i3,"0"));
*/
                /* strmapi */
        /*
        char str[] = "absddzed";
        printf("%s\n",ft_strmapi(str,f));
        */


                /* striteri */
        
/*
        char    str[] ="aaaa";
        ft_striteri(str,f1);
        printf("%s\n",str);  

*/
                /* ft_putchar_fd */
        
    /*    int fd ;
        fd = open("ft_putchar_fd.txt" , O_CREAT | O_RDWR);
        
        //ft_putchar_fd('a',fd);

        //ft_putendl_fd("abdeabde",fd);        
        ft_putnbr_fd(456,fd);

*/
    return (0);
}
