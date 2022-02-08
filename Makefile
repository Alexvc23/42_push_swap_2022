
#   __  __      _        __ _ _                    _
#  |  \/  |__ _| |_____ / _(_) |___   _ __ _  _ __| |_    ____ __ ____ _ _ __
#  | |\/| / _` | / / -_)  _| | / -_) | '_ \ || (_-< ' \  (_-< V  V / _` | '_ \
#  |_|  |_\__,_|_\_\___|_| |_|_\___| | .__/\_,_/__/_||_|_/__/\_/\_/\__,_| .__/
#                                    |_|              |___|             |_|

V_CC := @echo "Building $@..."; $(CC)
AT := @
CC := gcc
EXEC	:= push_swap  
DIR_SRCS := srcs
FLAGS	:= -g -Wall -Werror -Wextra
DIR_OBJS := objs
DIR_INCS := includes
DIR_LIBFT:= libft
SRCS = $(addprefix $(DIR_SRCS)/,$(C_FILES))
OBJS = $(addprefix $(DIR_OBJS)/,$(O_FILES))
INCS = $(addprefix $(DIR_INCS)/,$(INCLUDES))

C_FILES	:=	push_swap.c set_up.c s_operations.c
O_FILES := $(C_FILES:.c=.o)
LIBFT := $(DIR_LIBFT)/libft.a
INCLUDES := push_swap.h


all: $(EXEC) 

$(EXEC): $(OBJS) $(LIBFT)
#	echo creating executable	
	$(CC) $(FLAGS) -I $(DIR_INCS) $^ -o $@

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c $(INCS) Makefile | $(DIR_OBJS)
	$(V_CC) $(FLAGS) -I $(DIR_INCS) -c $< -o $@

$(DIR_OBJS):
	mkdir -p $@ 
$(LIBFT):
	$(MAKE) -C $(DIR_LIBFT)
	
clean:
	@echo Removing object files
	$(AT)-rm -rf $(DIR_OBJS)	 

	$(MAKE) -C $(DIR_LIBFT) clean
fclean: clean
	@echo Removing application
	$(AT)-rm -f $(EXEC)
	$(MAKE) -C $(DIR_LIBFT) fclean

re: fclean all	

.PHONY: all clean fclean
.DEFAULT: all