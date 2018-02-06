// DateEncoder.h
//  ----------------------------------------------------------------------
//  wut izit implementation and framework for Hierarchical Temporal Memory
// 
//  Copyright (C) 2018, Charles Perkins.  Unless you have an agreement
//  with Charles Perkins for a separate license for this software code, the
//  following terms and conditions apply:
// 
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Affero Public License version 3 as
//  published by the Free Software Foundation.
// 
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//  See the GNU Affero Public License for more details.
// 
//  You should have received a copy of the GNU Affero Public License
//  along with this program.  If not, see http://www.gnu.org/licenses.
// 
//  ----------------------------------------------------------------------
// 


#ifndef _DateEncoder_
#define _DateEncoder_

#include "ScalarEncoder.h"

typedef struct {
    int w;
    int n;
    int season;
    int dayOfWeek;
    int weekend;
    int holiday;
    int timeOfDay;
    int customDays;
    char * name;
    int forced;
    ScalarEncoder sE;
    int sEo;
    ScalarEncoder dE;
    int dEo;
    ScalarEncoder wE;
    int wEo;
    ScalarEncoder hE;
    int hEo;
    ScalarEncoder tE;
    int tEo;
    ScalarEncoder cE;
    int cEo;
} DateEncoder;

#endif
