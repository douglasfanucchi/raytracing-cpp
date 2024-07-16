NAME=executable

FILES:=
FILES:=$(addprefix src/, $(FILES))
TEST_FILES:= asserts.cpp main.cpp unit/example.cpp
TEST_FILES:=$(addprefix tests/, $(TEST_FILES))
INCLUDES=-I includes/
COMPILER=c++

all: $(NAME)

$(NAME): $(FILES) src/main.cpp
	@$(COMPILER) $(INCLUDES) $(FILES) src/main.cpp -o $(NAME)

unit: $(TEST_FILES)
	@$(COMPILER) $(INCLUDES) -I tests/ $(FILES) $(TEST_FILES) -o unit
	@./unit
	@rm -rf unit

e2e: $(NAME)
	@./tests/e2e/Program.sh $(realpath $(NAME))
