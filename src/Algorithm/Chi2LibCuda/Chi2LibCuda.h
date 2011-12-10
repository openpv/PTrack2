/*
 * Chi2LibCuda.h
 *
 *  Created on: 18/11/2011
 *      Author: juanin
 */

#ifndef CHI2LIBCUDA_H_
#define CHI2LIBCUDA_H_

#include <cmath>
#include "Container/cuMyMatrix.h"
#include "Chi2Libcu.h"
#include "../Chi2Lib/Chi2Lib.h"
#include "Container/cuMyPeak.h"

#include "../MyPeak.h"
#include "../../Utils/MyLogger.h"
#include "../../Container/MyMatrix.h"

class Chi2LibCuda {
private:
	static cuMyPeakArray convertPeaks(vector<MyPeak>* peaks);
public:
	/**
	 * Establece los valores necesarios dentro del dispositivo acorde a los datos entregados
	 */
	static cuMyMatrix initializeData(MyMatrix<double>* data);

	/**
	 * Obtiene los valores maximos y minimos (en orden) de una matriz
	 */
	static pair<float, float> getHighLow(cuMyMatrix* arr);

	/**
	 * Normaliza la imágen y retorna el valor máximo y mínimo una vez normalizado.
	 */
	static void normalizeImage(cuMyMatrix* arr, double maximum = -1, double minimum = -1);

	/**
	 * Obtener imagen de la particula ideal
	 */
	static cuMyMatrix generateKernel(unsigned int ss, unsigned int os, double d, double w);

	/**
	 *
	 */
	static cuMyPeakArray getPeaks(cuMyMatrix* arr, int threshold, int mindistance, int minsep);
};

#endif /* CHI2LIBCUDA_H_ */
