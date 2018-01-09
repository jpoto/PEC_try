/*
 * main.cpp
 *
 *  Created on: Jan 9, 2018
 *      Author: pototschnig
 */

#include "pot.h"

pot::pot() {
	stat=0;
	mult=0;
	ord1=0;
	ord2=0;

}

pot::~pot() {
	// TODO Auto-generated destructor stub
}

int main()
{
	pot gs1;
	gs1.set_mass1(20);
    gs1.print_data();

}





