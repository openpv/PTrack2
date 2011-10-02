/*
 * AddMissedPeaksStep.h
 *
 *  Created on: 26/09/2011
 *      Author: ptrack
 */
#include "../AlgorithmStepHandler.h"
#include "../Objects_Chi2/MyPeak.h"
#include "../../Image/MyImage.h"
#include "PeaksStep.h"
#include "ChiImageStep.h"
#include "ParticleGridStep.h"
#include "ChiDifferenceStep.h"
#include <vector>
#include <math.h>

#ifndef ADDMISSEDPEAKSSTEP
#define ADDMISSEDPEAKSSTEP

class AddMissedPeaks_Step: public AlgorithmStepHandler {
private:
	int _chi_cut;
	int _minsep;
	int _mindistance;
public:
	AddMissedPeaks_Step();
	void handleData(ParameterContainer *pc);

	void setChiCut(int chi_cut);
	void setMinSep(int minsep);
	void setMinDistance(int mindistance);
	void printDescription();
};

#endif /* ADDMISSEDPEAKSSTEP */
