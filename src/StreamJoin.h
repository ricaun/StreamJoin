/**
 StreamJoin.h
*/

#ifndef STREAMJOIN_H_
#define STREAMJOIN_H_

class StreamJoin: public Stream
{
private:
  Stream * stream_begin;
  Stream * stream_end;
public:
    StreamJoin();
    StreamJoin(Stream * sbegin, Stream * send);

    void begin(Stream * sbegin, Stream * send);

    void dump(Stream * stream);
    
    size_t write(const uint8_t *buffer, size_t size) override;
    size_t write(uint8_t data) override;

    int available() override;
    int read() override;
    int peek() override;
    void flush() override;
};


#endif /* STREAMJOIN_H_ */
