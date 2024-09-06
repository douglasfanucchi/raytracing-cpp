NAME=executable

FILES:= tuples/Tuple.cpp
FILES:=$(addprefix src/, $(FILES))
OBJS:=$(FILES:%.cpp=%.o)
INCLUDES=-I includes/
COMPILER=c++

all: $(NAME)

$(NAME): $(OBJS) src/main.cpp
	$(COMPILER) $(INCLUDES) $(OBJS) src/main.cpp -o $(NAME)

%.o:%.cpp
	$(COMPILER) $(INCLUDES) -c $< -o $@

unit:
	@$(COMPILER) $(INCLUDES) -I tests/ $(FILES) tests/main.cpp -o unit
	@./unit
	@rm -rf unit

e2e: $(NAME)
	@./tests/e2e/Program.sh $(realpath $(NAME))

clean:
	@rm -rf $(OBJS) $(TEST_OBJS)

fclean: clean
	@rm -rf $(NAME) 

re: fclean all
