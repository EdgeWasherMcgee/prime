

prime : prime.c
	gcc -Wl,-stack_size,1000000000 -o prime $<

clean :
	rm prime
