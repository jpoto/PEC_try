/*
 * pot.h
 *
 *  Created on: Jan 9, 2018
 *      Author: pototschnig
 */

#include <iostream>
#include <cstdlib>
#include <vector>

#ifndef POT_H_
#define POT_H_

class pot {
	int stat;
	int mult;
	int ord1;
	int ord2;
	std::vector<int> m1;
	std::vector<int> m2;

public:
	pot();
	virtual ~pot();
	void print_data()
	{
		std::cout << "State:" << stat << std::endl;
		std::cout << "Multiplicity:" << mult << std::endl;
		std::cout << "Ordnungszahl 1:" << ord1 << std::endl;
		std::cout << "Ordnungszahl 2:" << ord2 << std::endl;
		if (m1.empty()){
			std::cout << "Masse 1: empty" << std::endl;
		}
		else{
			std::cout << "Masse 1:" << m1[0] << std::endl;
		}
		if (m2.empty()){
			std::cout << "Masse 2: empty" << std::endl;
		}
		else{
			std::cout << "Masse 2:" << m1[0] << std::endl;
		}
	}
	void set_mass1(int m){
		m1.push_back(m);
	}
};

#endif /* POT_H_ */
