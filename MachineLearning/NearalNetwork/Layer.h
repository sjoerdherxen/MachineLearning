#pragma once

#include "Node.h"

class Layer
{
public:
	Layer(const int size);
	~Layer();

private:
	Node *Nodes;
	int NodesCount;
	
};

