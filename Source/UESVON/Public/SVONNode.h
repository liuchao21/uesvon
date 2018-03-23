#pragma once

#include "CoreMinimal.h"
#include "SVONLink.h"

struct UESVON_API SVONNode
{
	FVector myPosition;
	uint_fast64_t myCode;
	
	//SVONLink myParent;
	//SVONLink myFirstChild;

	uint_fast32_t myParentIndex;
	uint_fast32_t myFirstChildIndex;

	SVONLink myNeighbours[6];

	SVONNode(uint8 aLayer) :
		myPosition(FVector(0.f)),
		myParentIndex(0),
		myFirstChildIndex(0) {}
		//myParent(SVONLink(aLayer, 0, 0)),
		//myFirstChild(SVONLink(aLayer, 0, 0)) {}

	SVONNode() :
		myPosition(FVector(0.f)),
		myParentIndex(0),
		myFirstChildIndex(0) {}
		//myParent(SVONLink(0, 0, 0)),
		//myFirstChild(SVONLink(0, 0, 0)) {}
};