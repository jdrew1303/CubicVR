/*
    This file is part of CubicVR.

    Copyright (C) 2003 by Charles J. Cliffe

		Permission is hereby granted, free of charge, to any person obtaining a copy
		of this software and associated documentation files (the "Software"), to deal
		in the Software without restriction, including without limitation the rights
		to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
		copies of the Software, and to permit persons to whom the Software is
		furnished to do so, subject to the following conditions:

		The above copyright notice and this permission notice shall be included in
		all copies or substantial portions of the Software.

		THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
		IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
		FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
		AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
		LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
		OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
		THE SOFTWARE.
*/

#ifndef CUBICVR_SCENELWS_H
#define CUBICVR_SCENELWS_H


#include <CubicVR/cvr_defines.h>
#include <CubicVR/map_string.h>

#define NO_MOTION 0
#define OBJECT_MOTION 1
#define LIGHT_MOTION 2
#define CAMERA_MOTION 3
#define BONE_MOTION 4

#include <CubicVR/Scene.h>
#include <CubicVR/Camera.h>
#include <CubicVR/Mesh.h>
#include <CubicVR/Light.h>
#include <CubicVR/objectLWO.h>

#include <vector>
#include <fstream>
#include <cstdlib>

IMPEXP void loadLWS(Scene &scene, const std::string fn, MapString *mapStr=NULL);


#endif

