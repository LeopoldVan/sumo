/****************************************************************************/
/// @file    MSSOTLPolicyStimulus.cpp
/// @author  Riccardo Belletti
/// @date    Mar 2014
/// @version $Id: MSSOTLPolicy3DStimulus.cpp 19612 2015-12-15 08:14:49Z behrisch $
///
// The class for Swarm-based low-level policy
/****************************************************************************/
// SUMO, Simulation of Urban MObility; see http://sumo.dlr.de/
// Copyright 2001-2013 DLR (http://www.dlr.de/) and contributors
/****************************************************************************/
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
/****************************************************************************/

#include "MSSOTLPolicy3DStimulus.h"

MSSOTLPolicy3DStimulus::MSSOTLPolicy3DStimulus(std::string keyPrefix,
        const std::map<std::string, std::string>& parameters) :
    MSSOTLPolicy5DStimulus(keyPrefix, parameters) {

    setStimCoxExpDispersionInDefVal(0);
    setStimCoxExpDispersionOutDefVal(0);
}
