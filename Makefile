entropy_file:param.cpp entropy.c
	g++ -o entropy_file $^

entropy_string:entropy.c param.c
	gcc -o entropy_string $^ -lm

.PHONY : clean
clean:
	rm entropy_file entropy_string -f
