#ifndef LIBASM_H
# define LIBASM_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

ssize_t		ft_write(int fd, char *buffer, size_t size);
ssize_t		ft_read(int fd, char *buffer, size_t size);
size_t		ft_strlen(char *str);
char		*ft_strcpy(char *dest, char *src);
int			ft_strcmp(char *src1, char *src2);
char		*ft_strdup(char *str);

#endif
