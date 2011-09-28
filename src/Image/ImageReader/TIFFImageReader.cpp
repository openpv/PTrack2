/*
 * Image.h
 *
 *  Created on: 11-06-2011
 *      Author: juanin
 */
#include "TIFFImageReader.h"

/**
 *******************************
 * Constructores y Destructores
 *******************************
 */
TIFFImageReader::TIFFImageReader(){
	// Do Nothing
}

TIFFImageReader::~TIFFImageReader(){
	// Do Nothing
}

/**
 *******************************
 * Metodos
 *******************************
 */
MyImage *TIFFImageReader::decodeImage(string file){
	cout << ">> Decoding TIFFImageReader" << endl;

	Magick::Image my_image;
	my_image.read(file);

	unsigned int max_x = my_image.rows();
	unsigned int max_y = my_image.columns();

	MyImage *ret = new MyImage(max_x, max_y);
	Magick::ColorGray my_color;
	for(unsigned int x = 0; x < max_x; ++x)
		for(unsigned int y = 0; y < max_y; ++y){
			my_color = my_image.pixelColor(x,y);
			ret->setValue(max_y-y-1,x, (my_color.shade()*255));
		}
	ret->getHiLo();

	return ret;
}
