CC=g++

CFLAGS= -Iinclude

sr1=merge/merge.cpp merge/merge_sort.cpp
TARGET1=merge1

$(TARGET1): $(sr1)
	$(CC) $(CFLAGS) $(sr1) -o $(TARGET1) 
clean:
	rm -rf $(TARGET1)

