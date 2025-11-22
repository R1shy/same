


build:
	@gcc src/main.c -o bin/same
	@gcc -c -fPIC src/lib.c -o libsame.o
	@gcc -shared libsame.o -o bin/libsame.so 

clean:
	@rm -rf bin

install:
	@mv bin/same /usr/bin/same
	@mv bin/libsame.so /usr/lib/libsame.so
	mv src/same.h /usr/include/same.h
