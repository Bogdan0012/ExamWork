#pragma once
#include "S_Position.h"
#include <iostream>

class C_2D {
private:
	S_Position _positionA;
	S_Position _positionB;
public:
	C_2D() {
		this->_positionA.x = 0;
		this->_positionB.x = 0;
		this->_positionA.y = 0;
		this->_positionB.y = 0;
	}

	C_2D(S_Position _positionA, S_Position _positionB) {
		this->_positionA = _positionA;
		this->_positionB = _positionB;
	}

	void printPosition(S_Position _positionA, S_Position _positionB) {
		if (_positionB.x != _positionA.x) {
			if (_positionB.x < _positionA.x) std::cout << "\nPoint B is to the left";
			else                             std::cout << "\nPoint B is to the right";
		}
		else std::cout << "\nPoint B on the same position of X";

		if (_positionB.y != _positionA.y) {
			if (_positionB.y > _positionA.y) std::cout << " and up of point A\n";
			else                             std::cout << " and down of point A\n";
		}
		else std::cout << " and has same position on Y of point A\n";
	}
};