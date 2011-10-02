/*
 * Normalize.cpp
 *
 *  Created on: 12-06-2011
 *      Author: juanin
 */

#include "NormalizeStep.h"

/**
 *******************************
 * Metodos
 *******************************
 */
void NormalizeStep::handleData(ParameterContainer *pc){
	MyImage *img = (MyImage *)pc->popParam("image")->getData();
	img->normalize();
	pc->addParam("normal_image", new Container(img), "[MyImage] Imagen normalizada (Invertidos los colores)");

	nextStep(pc);
}

void NormalizeStep::printDescription(){
	cout << "1.- Normalizar la imagen (invertir colores)" << endl;
}
