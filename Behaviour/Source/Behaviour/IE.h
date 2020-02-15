// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Personality.h"

/**
 *
 */
class BEHAVIOUR_API IE : public Personality
{
public:
	IE();
	void EstablishPersonality(bool);
	virtual ~IE();


	void adjustDistribution(double distributionMean_, double distributionOffset_);
};
