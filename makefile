ALL: c_string

c_string: c_string.o test_string.o
	gcc -o c_string c_string.o test_string.o

c_string.o: c_string.h

test_string.o: c_string.h

clean:
	rm -f *.o

real_clean:
	rm -f c_string
