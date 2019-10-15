/*
  StreamJoin.ino

  This code show how to join 2 StreamString and dump on the Serial

  created 14 10 2019
  by Luiz H. Cassettari
*/

#include <StreamJoin.h>
#include <StreamString.h>

StreamString initial;
StreamString final;

StreamJoin join(&initial, &final);

void setup() {
  Serial.begin(115200);
  Serial.println("");

  initial += "This is on the initial stream\r\n";
  final += "This is on the final stream\r\n";

  join.dump(&Serial);
}

void loop() {

}