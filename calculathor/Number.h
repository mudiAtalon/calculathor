#pragma once
#include "pch.h"
#include "Node.h"

class Number : public Node
{
public:
	Number(double value)
	{
		this->value = value;
	}

	double Node::calc() override;

	~Number() override;

private:
	double value;
};