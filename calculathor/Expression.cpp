#include "pch.h"
#include <string>
#include "Expression.h"
#include "BinaryOperation.h"
#include "Number.h"

void Expression::parse()
{
	for (int ind = 0; ind < text.length(); ind++)
	{
		if (text[ind] == '+')
		{
			son = new BinaryOperation(new Expression(text.substr(0, ind)), BinaryOperation::Operation::ADD, new Expression(text.substr(ind + 1)));
			return;
		}
	}
	for (int ind = 0; ind < text.length(); ind++)
	{
		if (text[ind] == '-')
		{
			son = new BinaryOperation(new Expression(text.substr(0, ind)), BinaryOperation::Operation::SUB, new Expression(text.substr(ind + 1)));
			return;
		}
	}
	for (int ind = 0; ind < text.length(); ind++)
	{
		if (text[ind] == '*')
		{
			son = new BinaryOperation(new Expression(text.substr(0, ind)), BinaryOperation::Operation::MUL, new Expression(text.substr(ind + 1)));
			return;
		}
	}
	for (int ind = 0; ind < text.length(); ind++)
	{
		if (text[ind] == '/')
		{
			son = new BinaryOperation(new Expression(text.substr(0, ind)), BinaryOperation::Operation::DIV, new Expression(text.substr(ind + 1)));
			return;
		}
	}
	for (int ind = 0; ind < text.length(); ind++)
	{
		if (text[ind] == '^')
		{
			son = new BinaryOperation(new Expression(text.substr(0, ind)), BinaryOperation::Operation::POW, new Expression(text.substr(ind + 1)));
			return;
		}
	}
	son = new Number(std::stod(text));
}

double Expression::calc()
{
	parse();
	return son->calc();
}

Expression::~Expression()
{
	delete son;
}