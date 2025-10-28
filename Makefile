


build:
	@gcc main.c -o same

clean:
	@rm ./same

install:
	@mv ./same /usr/bin/same	
