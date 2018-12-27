#include "pch.h"
#include <math.h>
#include "BinaryOperation.h"

double BinaryOperation::calc()
{
	switch (op)
	{
	case Operation::ADD:
		return left->calc() + right->calc();
	
	case Operation::SUB:
		return left->calc() - right->calc();

	case Operation::MUL:
		return left->calc() * right->calc();
	
	case Operation::DIV:
		return left->calc() / right->calc();

	case Operation::POW:
		return pow(left->calc(), right->calc());

	}
	throw "wow you've invented a new operation!";
	return NULL;
}

BinaryOperation::~BinaryOperation()
{
	delete left;
	delete right;
}
