CC      = g++
CLAGS   = -O4 -Wall -std=c++17 -I/usr/local/include
DEST    = /usr/local/bin
LDFLAGS = -L/usr/local/lib
LIBS    =
OBJS    = src/main.o
PROGRAM = cubefair

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROGRAM) $(OBJS) $(LIBS)

$(OBJS): $(OBJS:.o=.cpp)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(PROGRAM)

install: $(PROGRAM)
	install -s $(PROGRAM) $(DEST)
