// ScalarEncoder.h
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


#ifndef _ScalarEncoder_
#define _ScalarEncoder_
typedef struct {
    int w;
    int n;
    float minval;
    float maxval;
    int periodic;
    float radius;
    float resolution;
    char * name;
    int verbosity;
    int clipInput;
    int forced;
    int padding;
    float srange;
} ScalarEncoder;
#endif

