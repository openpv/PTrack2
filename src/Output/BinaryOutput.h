/*
 * BinaryOutput.h
 *
 *  Created on: 13-06-2011
 *      Author: juanin
 */
#include "Output.h"

#ifndef BINARYOUTPUT
#define BINARYOUTPUT

class BinaryOutput: public Output {
public:
	BinaryOutput();
	virtual ~BinaryOutput();
	static string name();
	void writeData(void* data);
};

#endif
