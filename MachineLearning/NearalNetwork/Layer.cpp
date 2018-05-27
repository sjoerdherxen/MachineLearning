#include "Layer.h"



Layer::Layer(const int size)
{
	NodesCount = size;
	Nodes = new Node[NodesCount];
}


Layer::~Layer()
{
	delete[] Nodes;
}
