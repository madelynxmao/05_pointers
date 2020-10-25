main: pointerTests.o
	cc -o pointerTests pointerTests.o

main.o: pointerTests.c
	cc -c pointerTests.c

.PHONY: clean

clean:
	-rm *.o