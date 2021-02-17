#include "includes/libasm.h"

void		ft_check_strlen(void)
{
	printf("================ Ft_strlen =================\n");
	printf("|%zd|\n", ft_strlen("Hello word"));
	printf("|%zd|\n\n", strlen("Hello word"));
	printf("|%zd|\n", ft_strlen("a"));
	printf("|%zd|\n\n", strlen("a"));
	printf("|%zd|\n", ft_strlen("test"));
	printf("|%zd|\n\n", strlen("test"));
    printf("|%zd|\n", ft_strlen(""));
	printf("|%zd|\n\n", strlen(""));
}

void		ft_check_strcmp(void)
{
	char	strcmp1[] = "";
	char	strcmp2[] = "Hello World !";

	printf("================ Ft_strcmp =================\n");
	printf("return : [%d]\n", ft_strcmp("Hello", "Hello"));
	printf("return : [%d]\n\n", strcmp("Hello", "Hello"));
	printf("return : [%d]\n", ft_strcmp("abcd", "abce"));
	printf("return : [%d]\n\n", strcmp("abcd", "abce"));
	printf("return : [%d]\n", ft_strcmp(strcmp2, strcmp1));
	printf("return : [%d]\n\n", strcmp(strcmp2, strcmp1));
}

void		ft_check_strcpy(void)
{
	char	str1[] = "hi";
	char	str2[] = "Hello";
	char	str3[] = "how are you";
	char	str4[] = "fine thank you ";
	char	str5[] = "me";
	char	str6[] = "you";
	char	str7[] = "";

	printf("================ Ft_strcpy =================\n");
	printf("return : |%s|\n", ft_strcpy(str1, str2));
	printf("return : |%s|\n\n", strcpy(str1, str2));
	printf("return : |%s|\n", ft_strcpy(str3, str4));
	printf("return : |%s|\n\n", strcpy(str3, str4));
	printf("return : |%s|\n", ft_strcpy(str5, str6));
	printf("return : |%s|\n\n", strcpy(str5, str6));
	printf("return : |%s|\n", ft_strcpy(str6, str7));
	printf("return : |%s|\n\n", strcpy(str6, str7));
	printf("return : |%s|\n", ft_strcpy(str7, str6));
	printf("return : |%s|\n\n", strcpy(str7, str6));
}

void		ft_check_write(void)
{
	printf("================ Ft_write ==================\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "Hello World !", 13));
	printf("\nreturn : [%zd]\n\n", write(1, "Hello World !", 13));
	printf("\nreturn : [%zd]\n", ft_write(1, "", 1));
	printf("\nreturn : [%zd]\n\n", write(1, "", 1));
    printf("\nreturn : [%zd]\n", ft_write(1, "hello from the other side tatata i guess i called you a thousand time tata to tell you i am sorry for everything i have done well as you see this is adele song and i am not sure about the words but at least i have tried hello from the outsideeee tata i set fire to the rain", 276));
	printf("\nreturn : [%zd]\n\n", write(1, "hello from the other side tatata i guess i called you a thousand time tata to tell you i am sorry for everything i have done well as you see this is adele song and i am not sure about the words but at least i have tried hello from the outsideeee tata i set fire to the rain", 276));
    printf("\nreturn : [%zd]\n", ft_write(1, NULL, 1));
    perror("ERROR");
	printf("\nreturn : [%zd]\n\n", write(1, NULL, 1));
    perror("ERROR");
    printf("\nreturn : [%zd]\n", ft_write(-13, "hi", 1));
    perror("ERROR");
	printf("\nreturn : [%zd]\n\n", write(-13, "hi", 1));
    perror("ERROR");

}

void		ft_check_strdup(void)
{
	char	dup[] = "hello world!";
	char	dup1[] = "stop";
	char	dup2[] = "hello from the other side tatata i guess i called you a thousand time tata to tell you i am sorry for everything i have done well as you see this is adele song and i am not sure about the words but at least i have tried hello from the outsideeee tata i set fire to the rain";

	printf("================ Ft_strdup =================\n");
	printf("return : |%s|\n", ft_strdup(dup));
	printf("return : |%s|\n\n", strdup(dup));
	printf("return : |%s|\n", ft_strdup(dup1));
	printf("return : |%s|\n\n", strdup(dup1));
	printf("return : |%s|\n", ft_strdup(dup2));
	printf("return : |%s|\n\n", strdup(dup2));
}

void		ft_check_read(void)
{
	ssize_t		ret_read;
	int			fd;	
	char		buf[7000];
    char        *buff;

    buff = NULL;
	printf("================= Ft_read ==================\n");
	ret_read = ft_read(0, buf, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
    ret_read = 0;
	ret_read = read(0, buf, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
	ret_read = 0;
	ret_read = ft_read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
    perror("ERROR");
	ret_read = 0;
	ret_read = read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
    perror("ERROR");
    fd = open("srcs/ft_write.s", O_RDONLY);
    ret_read = 0;
	ret_read = ft_read(fd, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
    close(fd);
    fd = open("srcs/ft_write.s", O_RDONLY);
    ret_read = 0;
	ret_read = read(fd, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
	close(fd);
    ret_read = ft_read(0, buff, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n", buff, ret_read);
    perror("ERROR");
    ret_read = 0;
	ret_read = read(0, buff, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buff, ret_read);
    perror("ERROR");

}

int main()
{
    ft_check_strlen();
    ft_check_strcmp();
    ft_check_strcpy();
    ft_check_write();
    ft_check_strdup();
    ft_check_read();
    return (0);
}
