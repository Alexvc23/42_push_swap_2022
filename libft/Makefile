
#  .-.-. .-.-. .-.-. .-.-. .-.-. .-.-. .-.-. .-.-. .-.-.
# ( V .'( A .'( R .'( I .'( A .'( B .'( L .'( E .'( S .'
#  `.(   `.(   `.(   `.(   `.(   `.(   `.(   `.(   `.(

# CC = @echo "Building $@..."; $(CC)
AT = @
LIBRARY	= libft.a
FLAGS	= -Wall -Werror -Wextra

DIR_SRCS = srcs
DIR_OBJS = objs
DIR_INCS = includes
O_FILES = $(C_FILES:.c=.o)
O_BONUS = $(C_BONUS:.c=.o)

SRCS = $(addprefix $(DIR_SRCS)/,$(C_FILES)) \
$(addprefix $(DIR_SRCS)/,$(C_BONUS))
OBJS = $(addprefix $(DIR_OBJS)/,$(O_FILES)) \
$(addprefix $(DIR_OBJS)/,$(O_BONUS))
INCS = $(addprefix $(DIR_INCS)/,$(INCLUDES))


C_FILES = \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c	\
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c

C_BONUS = \
	  ft_lstadd_front.c	\
	  ft_lstnew.c \
	  ft_lstsize.c \
	  ft_lstlast.c \
	  ft_lstadd_back.c \
	  ft_lstdelone.c \
	  ft_lstclear.c \
	  ft_lstiter.c \
	  ft_lstmap.c \

INCLUDES := libft.h



all: $(LIBRARY) 

$(LIBRARY): $(OBJS)
	@echo creating library	
	$(AT)-ar -rcs $(LIBRARY) $(OBJS)
	$(AT)-ranlib $(LIBRARY)

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c $(INCS) Makefile $(DIR_OBJS)
	$(CC) $(FLAGS) -I $(DIR_INCS) -c $< -o $@

$(DIR_OBJS):
	$(AT)-mkdir -p $@ 
	
clean:
	@echo Removing object files
	$(AT)-rm -rf $(DIR_OBJS)	 

fclean: clean
	@echo Removing application

	$(AT)-rm -f $(LIBRARY)
re: fclean all	

.PHONY: all clean fclean
.DEFAULT: all
