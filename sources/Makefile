##
## EPITECH PROJECT, 2020
## SOURCES MAKEFILE
## File description:
## BINARY MAKER
##


ROOT_PATH	=	../

INCLUDE_PATH		=	include/

LIBSRC_PATH         =   libsrc/
I_PATH				=	$(ROOT_PATH)$(INCLUDE_PATH)
LIB_PATH			=	$(ROOT_PATH)lib/
LIB_I_PATH			=	$(LIB_PATH)my/$(INCLUDE_PATH)

INCLUDES			=  -I./$(I_PATH) -I./$(LIB_I_PATH)

override CFLAGS 	+=	-W -Wall -Werror -Wextra $(INCLUDES)
override LDFLAGS 	+= 	-L./$(LIB_PATH)
override LDLIBS 	+=	-lmy

SRC		=	bsq.c				\
			check_args.c		\
			main.c

OBJ 	= 	$(SRC:.c=.o)

LD			=	gcc
PRINT		=	@echo -e
RM          =   @rm -f


NAME 		= 	$(ROOT_PATH)bsq
SRC_LIB 	= 	$(LIBSRC_PATH)libsrc.a

$(NAME): $(OBJ)
	$(PRINT) "\n------->\tCOMPILED SRC DEPENDENCIES.\n\nLET'S LINK IT ALL:\n"
	$(LD) $^ -o $@ $(CFLAGS) $(LDFLAGS) $(LDLIBS)
	$(PRINT) "\n------->\tCONGRATS !\n"

all: $(NAME)

$(SRC_LIB): $(OBJ)
	$(PRINT) "\n------->\tCOMPILED SRC DEPENDENCIES.\n\nLET'S PACK SRC LIB:\n"
	@mkdir $(LIBSRC_PATH)
	$(AR) rc $@ $^
	$(PRINT) "\n------->\tCONGRATS ! YOUR SRC LIB HAS BEEN CREATED.\n"

lib: $(SRC_LIB)

clean:
	$(PRINT) "\n------->\tREMOVE GENERATOR TMP FILES\n"
	$(RM) $(OBJ) $(OBJ:.o=.gcno) $(OBJ:.o=.gcda)

fclean: clean
	$(PRINT) "------->\tREMOVE GENERATOR\n"
	$(RM) $(NAME)
	$(PRINT) "------->\tREMOVE GENERATOR LIBRARY\n"
	$(RM) $(SRC_LIB)
	$(RM) -r $(LIBSRC_PATH)

re: fclean all

.PHONY: all clean fclean re