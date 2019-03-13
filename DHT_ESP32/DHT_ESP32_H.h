/* DHT library
MIT license
written by Coingaming
*/
#ifndef DHT_ESP32_H
#define DHT_ESP32_H

// Uncomment to enable printing out nice debug messages.
#define DHT_DEBUG

// Setup debug printing macros.
#ifdef DHT_DEBUG
#define DEBUG_PRINT(...)              \
  {                                   \
    printf(__VA_ARGS__); \
  }
#define DEBUG_PRINTLN(...)              \
  {                                     \
    printf(__VA_ARGS__); \
  }
#else
#define DEBUG_PRINT(...) \
  {                      \
  }
#define DEBUG_PRINTLN(...) \
  {                        \
  }
#endif

// Define types of sensors.
#define DHT22 22

#include <stdint.h>

class DHT
{
public:
  DHT(uint8_t pin);
  void begin(uint8_t usec = 55);
  float readTemperature(bool S = false, bool force = false);
  float readHumidity(bool force = false);

private:
  uint8_t data[5];
  uint8_t _pin, _type;
#ifdef __AVR
  // Use direct GPIO access on an 8-bit AVR so keep track of the port and bitmask
  // for the digital pin connected to the DHT.  Other platforms will use digitalRead.
  uint8_t _bit, _port;
#endif
  uint32_t _lastreadtime, _maxcycles;
  bool _lastresult;
  uint8_t pullTime; // Time (in usec) to pull up data line before reading

  uint32_t expectPulse(bool level);
};

class InterruptLock
{
public:
  InterruptLock()
  {
  }
  ~InterruptLock()
  {
  }
};

#endif