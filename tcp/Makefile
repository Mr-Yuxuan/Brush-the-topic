.PHONY:all
all:client server
client:client.c
	@gcc -o $@ $^
server:server.c
	@gcc -o $@ $^ -pthread
.PHONY:clean
clean:
	@rm -f client server
