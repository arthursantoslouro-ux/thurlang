all:
	clang src/interp.c src/lexer.c src/thurlang.c -Iincludes -o tl
	cp tl $$PATH
