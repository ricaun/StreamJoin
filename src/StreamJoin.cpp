/**
  StreamJoin.cpp
*/

#include <Arduino.h>
#include "StreamJoin.h"

StreamJoin::StreamJoin() {

}

StreamJoin::StreamJoin(Stream * sbegin, Stream * send) {
  stream_begin = sbegin;
  stream_end = send;
}

void StreamJoin::begin(Stream * sbegin, Stream * send) {
  stream_begin = sbegin;
  stream_end = send;
}

void StreamJoin::dump(Stream * stream) {
  while(available())
  {
    stream->write(read());
  }
}

size_t StreamJoin::write(const uint8_t *data, size_t size) {
  return 0;
}

size_t StreamJoin::write(uint8_t data) {
  return 0;
}

int StreamJoin::available() {
  return (stream_begin->available() + stream_end->available());
}

int StreamJoin::read() {
  if (stream_begin->available())
    return stream_begin->read();
  if (stream_end->available())
    return stream_end->read();
  return -1;
}

int StreamJoin::peek() {
  if (stream_begin->available())
    return stream_begin->peek();
  if (stream_end->available())
    return stream_end->peek();
  return -1;
}

void StreamJoin::flush() {
}
