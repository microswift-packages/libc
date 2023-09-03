#include <math.h>
#include <time.h>
#include <util/crc16.h>
// we don't include delay.h because it requires the F_CPU macro
// which we cannot generalise appropriately
// (a developer may be running the MCU at any clock speed they choose)
//#include <util/delay.h>
#include <util/delay_basic.h>
#include <util/parity.h>
// likewise everything in the avr folder is unavailable because it
// requires device type to be defined, which clang doesn't natively support
// #include <avr/io.h>