# StreamJoin

StreamJoin is used to join two Stream in one. 

Some times you need to add some bytes in from of a Stream or File and you need to send this Stream to the internet.

# Reference

## Include Library

```c
#include <StreamJoin.h>
```

### Method: StreamJoin

Create a StreamJoin with or without two streams.

```c
StreamJoin join;
```

```c
StreamJoin join(&initial, &final);
```

### Method: begin

Insert the two streams to join.

```c
join.begin(&initial, &final);
```

### Method: dump

Dump all the bytes from the StreamJoin on the Stream.

```c
join.dump(&Serial);
```

### Method: Stream

The available, read, peek methods works as a joined.

```c
int a = join.available();
int r = join.read();
int p = join.peek();
```


Do you like this library? Please [star this project on GitHub](https://github.com/ricaun/StreamJoin/stargazers)!
