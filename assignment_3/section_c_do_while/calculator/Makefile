TARGET=#code name

CC=gcc

$(TARGET).out: $(TARGET).o
	$(CC) $(TARGET).o -o $(TARGET).out

$(TARGET).o: $(TARGET).c
	$(CC) -c $(TARGET).c

run:
	./$(TARGET).out

clean:
	rm $(TARGET).o $(TARGET).out

.phony: run clean
