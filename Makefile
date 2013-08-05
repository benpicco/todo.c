compile:
	make -C src/

clean:
	make -C src/ clean

install: compile
	mv src/todo ~/.todo
	@echo "Please add this line to your shell configuration(~/.bashrc or ~/.zshrc etc.)"
	@echo "  alias todo=~/.todo"
