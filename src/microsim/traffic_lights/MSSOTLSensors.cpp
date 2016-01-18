/****************************************************************************/
/// @file    MSSOTLSensors.cpp
/// @author  Gianfilippo Slager
/// @date    Feb 2010
/// @version $Id: MSSOTLSensors.cpp 19610 2015-12-14 21:03:17Z behrisch $
///
// The base abstract class for SOTL sensors
/****************************************************************************/
// SUMO, Simulation of Urban MObility; see http://sumo.dlr.de/
// Copyright 2001-2009 DLR (http://www.dlr.de/) and contributors
/****************************************************************************/
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
/****************************************************************************/
#include "MSSOTLSensors.h"

MSSOTLSensors::MSSOTLSensors(std::string tlLogicID, const MSTrafficLightLogic::Phases* phases) {
    this->tlLogicID = tlLogicID;
    this->myPhases = phases;
}

//MSSOTLSensors does not handle directly any data structure
MSSOTLSensors::~MSSOTLSensors() {}


/****************************************************************************/