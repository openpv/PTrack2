/*
 * Normalize.h
 *
 *  Created on: 12-06-2011
 *      Author: juanin
 */
#include "../AlgorithmStepHandler.h"
#include "../../Container/Array2D.h"

#ifndef NORMALIZESTEP
#define NORMALIZESTEP

class NormalizeStep: public AlgorithmStepHandler {
public:
	void handleData(ParameterContainer *pc);
	void printDescription();
};

#endif
