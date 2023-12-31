CC			=	cc
C_FLAGS		=	-Wall -Wextra -Werror -g -ggdb -O3
LIBFT_DIR	=	./utils/libft/src
LIBS_LINK	=	-L $(LIBFT_DIR) -lm -lft
INCLUDE		=	-I ./includes $(LIBS_LINK)

OBJS_DIR	=	objs
OBJS_ALL	=	$(addprefix $(OBJS_DIR)/,$(SRCS_SERVER:.c=.o))


STCK_FILES	=	stack_push.c stack_print.c stack_rotate.c stack_rotate_reverse.c stack_swap.c stack_double_swap.c stack_define.c stack_double_rotate.c stack_addbtm.c stack_addtop.c

STCKS_PTH	=	srcs/stack/
STCKS		=	$(addprefix $(STCKS_PTH), $(STCK_FILES))

MGMT_FILES = has_lower.c has_greater.c find_mid_value.c stack_is_ordered.c send_stack.c find_size.c find_indexes.c

MGMT_PTH	= srcs/management_utils/
MGMT_UTILS	=	$(addprefix $(MGMT_PTH), $(MGMT_FILES))

# SRC_FILES = print_test.c

SORT_FILES	= sort.c
SORT_PTH	= srcs/sorting/

SORT = $(addprefix $(SORT_PTH), $(SORT_FILES))

SRCS_PTH = srcs/
SRCS		+= $(STCKS)
SRCS		+= $(MGMT_UTILS)
SRCS		+= $(SORT)
# SRCS		+= $(addprefix $(SRCS_PTH), $(SRC_FILES))

MAIN		=	main.c

ANSI		=	\033[0
YELLOW		=	;33
GREEN		=	;32
RED			=	;31

all: $(OBJS_ALL) libft_make swap
	@printf "\033[0;1$(GREEN)m%s\033[0m\n" "Compiled successfully"

libft_make:
	@make -C $(LIBFT_DIR)

$(OBJS_DIR)/%.o:%.c
	@mkdir -p $(@D)
	@$(CC) $(C_FLAGS) -c $< -o $@ $(INCLUDE)

swap: $(OBJS_ALL)
	@$(CC) $(C_FLAGS) $(OBJS_ALL) $(SRCS) $(MAIN) $(INCLUDE) -o push_swap
	@printf "%s$(ANSI)$(GREEN)m%-15s$(ANSI)m\n" "push_swap:" "Compiled"

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -rf push_swap
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all tests libft_make swap client clean fclean re