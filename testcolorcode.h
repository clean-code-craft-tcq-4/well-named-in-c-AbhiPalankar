#ifndef TESTCOLORCODE_H
#define TESTCOLORCODE_H

#include <stdio.h>
#include <assert.h>
#include "Colorcode.h"

void testNumberToPair( int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber( enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif


