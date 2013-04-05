#include "GameTypes.h"
#ifndef __GameData_H
#define __GameData_H

/*********************
Cosine and Sine tables in degrees
multiplied by a factor of 8
Example to multiply 25 by cos(8) (degrees)
Take (25*cosine[8])>>3.
*********************/

const s32 cosine[360]={
	8,8,8,8,8,8,8,8,
	8,8,8,8,8,8,8,8,
	8,8,8,8,8,7,7,7,
	7,7,7,7,7,7,7,7,
	7,7,7,7,6,6,6,6,
	6,6,6,6,6,6,6,5,
	5,5,5,5,5,5,5,5,
	4,4,4,4,4,4,4,4,
	4,3,3,3,3,3,3,3,
	2,2,2,2,2,2,2,2,
	1,1,1,1,1,1,1,0,
	0,0,0,-0,-0,-0,-1,-1,
	-1,-1,-1,-1,-1,-2,-2,-2,
	-2,-2,-2,-2,-2,-3,-3,-3,
	-3,-3,-3,-3,-4,-4,-4,-4,
	-4,-4,-4,-4,-4,-5,-5,-5,
	-5,-5,-5,-5,-5,-5,-6,-6,
	-6,-6,-6,-6,-6,-6,-6,-6,
	-6,-7,-7,-7,-7,-7,-7,-7,
	-7,-7,-7,-7,-7,-7,-7,-7,
	-8,-8,-8,-8,-8,-8,-8,-8,
	-8,-8,-8,-8,-8,-8,-8,-8,
	-8,-8,-8,-8,-8,-8,-8,-8,
	-8,-8,-8,-8,-8,-8,-8,-8,
	-8,-8,-8,-8,-8,-8,-8,-8,
	-8,-7,-7,-7,-7,-7,-7,-7,
	-7,-7,-7,-7,-7,-7,-7,-7,
	-6,-6,-6,-6,-6,-6,-6,-6,
	-6,-6,-6,-5,-5,-5,-5,-5,
	-5,-5,-5,-5,-4,-4,-4,-4,
	-4,-4,-4,-4,-4,-3,-3,-3,
	-3,-3,-3,-3,-2,-2,-2,-2,
	-2,-2,-2,-2,-1,-1,-1,-1,
	-1,-1,-1,-0,-0,-0,-0,0,
	0,0,1,1,1,1,1,1,
	1,2,2,2,2,2,2,2,
	2,3,3,3,3,3,3,3,
	4,4,4,4,4,4,4,4,
	4,5,5,5,5,5,5,5,
	5,5,6,6,6,6,6,6,
	6,6,6,6,6,7,7,7,
	7,7,7,7,7,7,7,7,
	7,7,7,7,8,8,8,8,
	8,8,8,8,8,8,8,8,
	8,8,8,8,8,8,8,8
};
const s32 sine[360]={
	0,0,0,0,1,1,1,1,
	1,1,1,2,2,2,2,2,
	2,2,2,3,3,3,3,3,
	3,3,4,4,4,4,4,4,
	4,4,4,5,5,5,5,5,
	5,5,5,5,6,6,6,6,
	6,6,6,6,6,6,6,7,
	7,7,7,7,7,7,7,7,
	7,7,7,7,7,7,8,8,
	8,8,8,8,8,8,8,8,
	8,8,8,8,8,8,8,8,
	8,8,8,8,8,8,8,8,
	8,8,8,8,8,8,8,8,
	8,8,8,8,8,8,8,7,
	7,7,7,7,7,7,7,7,
	7,7,7,7,7,7,6,6,
	6,6,6,6,6,6,6,6,
	6,5,5,5,5,5,5,5,
	5,5,4,4,4,4,4,4,
	4,4,4,3,3,3,3,3,
	3,3,2,2,2,2,2,2,
	2,2,1,1,1,1,1,1,
	1,0,0,0,0,-0,-0,-0,
	-1,-1,-1,-1,-1,-1,-1,-2,
	-2,-2,-2,-2,-2,-2,-2,-3,
	-3,-3,-3,-3,-3,-3,-4,-4,
	-4,-4,-4,-4,-4,-4,-4,-5,
	-5,-5,-5,-5,-5,-5,-5,-5,
	-6,-6,-6,-6,-6,-6,-6,-6,
	-6,-6,-6,-7,-7,-7,-7,-7,
	-7,-7,-7,-7,-7,-7,-7,-7,
	-7,-7,-8,-8,-8,-8,-8,-8,
	-8,-8,-8,-8,-8,-8,-8,-8,
	-8,-8,-8,-8,-8,-8,-8,-8,
	-8,-8,-8,-8,-8,-8,-8,-8,
	-8,-8,-8,-8,-8,-8,-8,-8,
	-8,-8,-8,-7,-7,-7,-7,-7,
	-7,-7,-7,-7,-7,-7,-7,-7,
	-7,-7,-6,-6,-6,-6,-6,-6,
	-6,-6,-6,-6,-6,-5,-5,-5,
	-5,-5,-5,-5,-5,-5,-4,-4,
	-4,-4,-4,-4,-4,-4,-4,-3,
	-3,-3,-3,-3,-3,-3,-2,-2,
	-2,-2,-2,-2,-2,-2,-1,-1,
	-1,-1,-1,-1,-1,-0,-0,-0
};

const s32 myLine[]={
	18,
	2,
	0,0,0, 100,100,0,
	100,100,0, -100,100,0,
	-100,100,0, 0,0,0
};

const s32 tieFighter[]={
	60,//total size of vertices
	4,//number of vertices used at a time
	-20,0,-20, -20,0,20, 20,0,20, 20,0,-20,
	-20,0,-20, 0,-20,-20, 0,-20,20, -20,0,20,
	0,-20,-20, 0,-20,20, 20,0,20, 20,0,-20,
	-20,0,-20, 0,20,-20, 0,20,20, -20,0,20,
	0,20,-20, 0,20,20, 20,0,20, 20,0,-20
};

const s32 tieFighterWings[]={
	36,//total size
	6,//number of vertices
	-50,50,-40, -50,50,40, -50,0,50, -50,-50,40, -50,-50,-40, -50,0,-50,
	50,50,-40, 50,50,40, 50,0,50, 50,-50,40, 50,-50,-40, 50,0,-50
};

const s32 trench[] = {3936, //total number of vertex points
	2,
	-1360,2376,3832,-1360,1904,3832,
	-1360,1904,3832,-888,1904,3832,
	-888,1904,3832,-888,2136,3832,
	-888,2136,3832,-888,2376,3832,
	-888,2376,3832,-1360,2376,3832,
	-416,1432,3832,-416,1904,3832,
	-416,1904,3832,-648,1904,3832,
	-648,1904,3832,-888,1904,3832,
	-888,1904,3832,-888,1432,3832,
	-888,1432,3832,-416,1432,3832,
	-416,2376,3832,-648,2376,3832,
	-648,2376,3832,-648,2136,3832,
	-648,2136,3832,-416,2136,3832,
	-416,2136,3832,-416,2376,3832,
	-888,2136,3832,-648,2136,3832,
	-648,2376,3832,-888,2376,3832,
	-648,1904,3832,-648,2136,3832,
	-416,1904,3832,-416,2136,3832,
	-416,2376,2888,-416,1904,2888,
	-416,1904,2888,-888,1904,2888,
	-888,1904,2888,-888,2136,2888,
	-888,2136,2888,-888,2376,2888,
	-888,2376,2888,-416,2376,2888,
	-1360,1432,2888,-1360,1904,2888,
	-1360,1904,2888,-1120,1904,2888,
	-1120,1904,2888,-888,1904,2888,
	-888,1904,2888,-888,1432,2888,
	-888,1432,2888,-1120,1432,2888,
	-1120,1432,2888,-1360,1432,2888,
	-1360,2376,2888,-1120,2376,2888,
	-1120,2376,2888,-1120,2136,2888,
	-1120,2136,2888,-1360,2136,2888,
	-1360,2136,2888,-1360,2376,2888,
	-1120,1904,2888,-1120,2136,2888,
	-1120,2136,2888,-888,2136,2888,
	-1360,1904,2888,-1360,2136,2888,
	-1120,1432,2888,-1120,1432,3128,
	-1120,1432,3128,-1360,1432,3128,
	-1360,1432,3128,-1360,1432,2888,
	-888,1432,2888,-888,1432,3128,
	-888,1432,3128,-1120,1432,3128,
	-1360,1432,3360,-1360,1432,3128,
	-1120,1432,3128,-1120,1432,3360,
	-1120,1432,3360,-1360,1432,3360,
	-416,1432,2888,-416,1432,3360,
	-416,1432,3360,-888,1432,3360,
	-888,1432,3360,-888,1432,3128,
	-888,1432,2888,-416,1432,2888,
	-888,1432,3832,-888,1432,3360,
	-416,1432,3360,-416,1432,3832,
	-1360,1432,3832,-1360,1432,3360,
	-1120,1432,3360,-888,1432,3360,
	-888,1432,3832,-1360,1432,3832,
	-416,2376,3832,-888,2376,3832,
	-888,2376,3832,-888,2376,4304,
	-888,2376,4304,-648,2376,4304,
	-648,2376,4304,-416,2376,4304,
	-416,2376,4304,-416,2376,3832,
	-1360,2376,3832,-1360,2376,4304,
	-1360,2376,4304,-888,2376,4304,
	-1360,2376,4776,-888,2376,4776,
	-888,2376,4776,-888,2376,4544,
	-888,2376,4544,-888,2376,4304,
	-1360,2376,4304,-1360,2376,4776,
	-416,2376,4776,-416,2376,4544,
	-416,2376,4544,-648,2376,4544,
	-648,2376,4544,-648,2376,4776,
	-648,2376,4776,-416,2376,4776,
	-648,2376,4304,-648,2376,4544,
	-416,2376,4544,-416,2376,4304,
	-888,2376,4776,-648,2376,4776,
	-648,2376,4544,-888,2376,4544,
	-416,2376,1944,-888,2376,1944,
	-888,2376,1944,-888,2376,2416,
	-888,2376,2416,-416,2376,2416,
	-416,2376,2416,-416,2376,1944,
	-1360,2376,1944,-1360,2376,2416,
	-1360,2376,2416,-888,2376,2416,
	-888,2376,1944,-1360,2376,1944,
	-1360,2376,2888,-888,2376,2888,
	-888,2376,2888,-888,2376,2416,
	-1360,2376,2416,-1360,2376,2888,
	-416,2376,2888,-416,2376,2416,
	-648,2376,4544,-648,2400,4544,
	-648,2400,4544,-888,2400,4544,
	-888,2400,4544,-888,2376,4544,
	-888,2400,4544,-888,2400,4304,
	-888,2400,4304,-888,2376,4304,
	-888,2400,4304,-648,2400,4304,
	-648,2400,4304,-648,2376,4304,
	-648,2400,4304,-648,2400,4544,
	-888,1432,3128,-888,1464,3128,
	-888,1464,3128,-1120,1464,3128,
	-1120,1464,3128,-1120,1432,3128,
	-1120,1464,3128,-1120,1464,3360,
	-1120,1464,3360,-1120,1432,3360,
	-1120,1464,3360,-888,1464,3360,
	-888,1464,3360,-888,1432,3360,
	-888,1464,3360,-888,1464,3128,
	-1120,2136,2888,-1120,2136,2920,
	-1120,2136,2920,-888,2136,2920,
	-888,2136,2920,-888,2136,2888,
	-888,2136,2920,-888,2376,2920,
	-888,2376,2920,-888,2376,2888,
	-888,2376,2920,-1120,2376,2920,
	-1120,2376,2920,-1120,2376,2888,
	-1120,2376,2888,-888,2376,2888,
	-1120,2376,2920,-1120,2136,2920,
	-888,1904,2888,-888,1904,2936,
	-888,1904,2936,-888,1432,2936,
	-888,1432,2936,-888,1432,2888,
	-888,1432,2936,-416,1432,2936,
	-416,1432,2936,-416,1432,2888,
	-416,1432,2936,-416,1904,2936,
	-416,1904,2936,-416,1904,2888,
	-416,1904,2888,-416,1432,2888,
	-416,1904,2936,-888,1904,2936,
	-888,1904,3832,-888,1904,3792,
	-888,1904,3792,-888,1432,3792,
	-888,1432,3792,-888,1432,3832,
	-888,1432,3792,-1360,1432,3792,
	-1360,1432,3792,-1360,1432,3832,
	-1360,1432,3792,-1360,1904,3792,
	-1360,1904,3792,-1360,1904,3832,
	-1360,1904,3832,-1360,1432,3832,
	-1360,1904,3792,-888,1904,3792,
	2888,2376,3832,2888,1904,3832,
	2888,1904,3832,2416,1904,3832,
	2416,1904,3832,2416,2376,3832,
	2416,2376,3832,2888,2376,3832,
	2888,1432,3832,2888,1904,3832,
	2888,1904,3832,3360,1904,3832,
	3360,1904,3832,3360,1432,3832,
	3360,1432,3832,2888,1432,3832,
	2888,2376,2888,2888,2136,2888,
	2888,2136,2888,3120,2136,2888,
	3120,2136,2888,3120,2376,2888,
	3120,2376,2888,2888,2376,2888,
	2888,1904,2888,3120,1904,2888,
	3120,1904,2888,3120,2136,2888,
	2888,2136,2888,2888,1904,2888,
	3360,2376,2888,3120,2376,2888,
	3120,2136,2888,3360,2136,2888,
	3360,2136,2888,3360,2376,2888,
	2888,1904,2888,2888,1664,2888,
	2888,1664,2888,3120,1664,2888,
	3120,1664,2888,3120,1904,2888,
	2888,1432,2888,3120,1432,2888,
	3120,1432,2888,3120,1664,2888,
	2888,1664,2888,2888,1432,2888,
	2416,1904,2888,2888,1904,2888,
	2888,2376,2888,2416,2376,2888,
	2416,2376,2888,2416,1904,2888,
	2416,1432,3360,2888,1432,3360,
	2888,1432,3360,2888,1432,2888,
	2888,1432,2888,2416,1432,2888,
	2416,1432,2888,2416,1432,3360,
	2888,1432,3360,3360,1432,3360,
	3360,1432,3360,3360,1432,2888,
	3360,1432,2888,3120,1432,2888,
	2888,1432,3360,2888,1432,3832,
	3360,1432,3832,3360,1432,3360,
	2416,1432,3360,2416,1432,3832,
	2416,1432,3832,2888,1432,3832,
	3360,2376,3832,2888,2376,3832,
	2888,2376,3832,2888,2376,4304,
	2888,2376,4304,3360,2376,4304,
	3360,2376,4304,3360,2376,3832,
	2416,2376,3832,2416,2376,4304,
	2416,2376,4304,2648,2376,4304,
	2648,2376,4304,2888,2376,4304,
	2416,2376,4776,2648,2376,4776,
	2648,2376,4776,2648,2376,4544,
	2648,2376,4544,2416,2376,4544,
	2416,2376,4544,2416,2376,4776,
	2888,2376,4776,2888,2376,4544,
	2888,2376,4544,2648,2376,4544,
	2648,2376,4776,2888,2376,4776,
	2416,2376,4304,2416,2376,4544,
	2648,2376,4544,2648,2376,4304,
	3360,2376,4776,3360,2376,4304,
	2888,2376,4304,2888,2376,4544,
	2888,2376,4776,3360,2376,4776,
	3360,2376,1944,3120,2376,1944,
	3120,2376,1944,3120,2376,2176,
	3120,2376,2176,3360,2376,2176,
	3360,2376,2176,3360,2376,1944,
	2888,2376,1944,2888,2376,2176,
	2888,2376,2176,3120,2376,2176,
	3120,2376,1944,2888,2376,1944,
	3360,2376,2416,3360,2376,2176,
	3120,2376,2176,3120,2376,2416,
	3120,2376,2416,3360,2376,2416,
	2416,2376,1944,2416,2376,2416,
	2416,2376,2416,2888,2376,2416,
	2888,2376,2416,2888,2376,2176,
	2888,2376,1944,2416,2376,1944,
	2888,2376,2888,2888,2376,2416,
	2416,2376,2416,2416,2376,2888,
	3360,2376,2888,3360,2376,2416,
	3120,2376,2416,2888,2376,2416,
	2888,1432,3832,2752,1568,3832,
	2752,1568,3832,2752,1768,3832,
	2752,1768,3832,2888,1904,3832,
	2416,1432,3832,2552,1568,3832,
	2552,1568,3832,2752,1568,3832,
	2416,1904,3832,2552,1768,3832,
	2552,1768,3832,2552,1568,3832,
	2416,1432,3832,2416,1904,3832,
	2752,1768,3832,2552,1768,3832,
	2752,1568,3832,2752,1568,3640,
	2752,1568,3640,2752,1768,3640,
	2752,1768,3640,2752,1768,3832,
	2552,1568,3832,2552,1568,3640,
	2552,1568,3640,2752,1568,3640,
	2552,1768,3832,2552,1768,3640,
	2552,1768,3640,2552,1568,3640,
	2752,1768,3640,2552,1768,3640,
	2752,1568,3640,2704,1608,3608,
	2704,1608,3608,2704,1720,3608,
	2704,1720,3608,2752,1768,3640,
	2552,1568,3640,2592,1608,3608,
	2592,1608,3608,2704,1608,3608,
	2552,1768,3640,2592,1720,3608,
	2592,1720,3608,2592,1608,3608,
	2704,1720,3608,2592,1720,3608,
	2888,1904,2888,2752,1768,2888,
	2752,1768,2888,2752,1568,2888,
	2752,1568,2888,2888,1432,2888,
	2416,1904,2888,2552,1768,2888,
	2552,1768,2888,2752,1768,2888,
	2416,1432,2888,2552,1568,2888,
	2552,1568,2888,2552,1768,2888,
	2416,1904,2888,2416,1432,2888,
	2752,1568,2888,2552,1568,2888,
	2752,1768,2888,2752,1768,3080,
	2752,1768,3080,2752,1568,3080,
	2752,1568,3080,2752,1568,2888,
	2552,1768,2888,2552,1768,3080,
	2552,1768,3080,2752,1768,3080,
	2552,1568,2888,2552,1568,3080,
	2552,1568,3080,2552,1768,3080,
	2752,1568,3080,2552,1568,3080,
	2752,1768,3080,2704,1720,3112,
	2704,1720,3112,2704,1608,3112,
	2704,1608,3112,2752,1568,3080,
	2552,1768,3080,2592,1720,3112,
	2592,1720,3112,2704,1720,3112,
	2552,1568,3080,2592,1608,3112,
	2592,1608,3112,2592,1720,3112,
	2704,1608,3112,2592,1608,3112,
	2704,1608,3608,2704,1608,3472,
	2704,1608,3472,2704,1608,3248,
	2704,1608,3248,2704,1608,3112,
	2704,1720,3112,2704,1720,3248,
	2704,1720,3248,2704,1720,3472,
	2704,1720,3472,2704,1720,3608,
	2592,1720,3112,2592,1720,3248,
	2592,1720,3248,2592,1720,3472,
	2592,1720,3472,2592,1720,3608,
	2592,1608,3608,2592,1608,3472,
	2592,1608,3472,2592,1608,3248,
	2592,1608,3248,2592,1608,3112,
	3120,1432,2888,3120,1432,2912,
	3120,1432,2912,3120,1664,2912,
	3120,1664,2912,3120,1664,2888,
	3120,1664,2912,3120,1904,2912,
	3120,1904,2912,3120,1904,2888,
	3120,1904,2912,3120,2136,2912,
	3120,2136,2912,3120,2136,2888,
	3120,2136,2912,3360,2136,2912,
	3360,2136,2912,3360,2136,2888,
	3360,2136,2912,3360,1904,2912,
	3360,1904,2912,3360,1904,2888,
	3360,1904,2888,3360,2136,2888,
	3360,1904,2912,3360,1664,2912,
	3360,1664,2912,3360,1664,2888,
	3360,1664,2888,3360,1904,2888,
	3360,1664,2912,3360,1432,2912,
	3360,1432,2912,3360,1432,2888,
	3360,1432,2888,3360,1664,2888,
	3360,1432,2912,3120,1432,2912,
	3120,1904,2912,3360,1904,2912,
	3120,1664,2912,3360,1664,2912,
	2888,1904,3832,2888,1904,3808,
	2888,1904,3808,3360,1904,3808,
	3360,1904,3808,3360,1904,3832,
	3360,1904,3808,3360,2376,3808,
	3360,2376,3808,3360,2376,3832,
	3360,2376,3832,3360,1904,3832,
	3360,2376,3808,2888,2376,3808,
	2888,2376,3808,2888,2376,3832,
	2888,2376,3808,2888,1904,3808,
	2888,2376,4544,2888,2392,4544,
	2888,2392,4544,2648,2392,4544,
	2648,2392,4544,2648,2376,4544,
	2648,2392,4544,2648,2392,4304,
	2648,2392,4304,2648,2376,4304,
	2648,2392,4304,2888,2392,4304,
	2888,2392,4304,2888,2376,4304,
	2888,2392,4304,2888,2392,4544,
	2888,2376,2176,2888,2392,2176,
	2888,2392,2176,3120,2392,2176,
	3120,2392,2176,3120,2376,2176,
	3120,2392,2176,3120,2392,2416,
	3120,2392,2416,3120,2376,2416,
	3120,2392,2416,2888,2392,2416,
	2888,2392,2416,2888,2376,2416,
	2888,2392,2416,2888,2392,2176,
	1464,1904,3832,1944,1904,3832,
	1944,1904,3832,1944,1432,3832,
	1944,1432,3832,1464,1432,3832,
	1464,1432,3832,1464,1904,3832,
	1944,1904,3832,2416,1904,3832,
	2416,1432,3832,2176,1432,3832,
	2176,1432,3832,1944,1432,3832,
	1944,1904,3832,1944,2376,3832,
	1944,2376,3832,2176,2376,3832,
	2176,2376,3832,2416,2376,3832,
	1944,2376,2888,1944,1904,2888,
	1944,1904,2888,2416,1904,2888,
	2416,2376,2888,2176,2376,2888,
	2176,2376,2888,1944,2376,2888,
	1944,1904,2888,1944,1432,2888,
	1944,1432,2888,2416,1432,2888,
	1464,1432,3360,1944,1432,3360,
	1944,1432,3360,1944,1432,2888,
	1944,1432,2888,1464,1432,2888,
	1464,1432,2888,1464,1432,3360,
	1944,1432,3360,2176,1432,3360,
	2176,1432,3360,2416,1432,3360,
	2176,1432,3360,2176,1432,3600,
	2176,1432,3600,2416,1432,3600,
	2416,1432,3600,2416,1432,3360,
	2176,1432,3832,2176,1432,3600,
	2176,1432,3600,1944,1432,3600,
	1944,1432,3600,1944,1432,3832,
	2416,1432,3832,2416,1432,3600,
	1944,1432,3600,1944,1432,3360,
	1464,1432,3360,1464,1432,3832,
	1944,2376,3832,1944,2376,4072,
	1944,2376,4072,2176,2376,4072,
	2176,2376,4072,2176,2376,3832,
	1944,2376,4304,2176,2376,4304,
	2176,2376,4304,2176,2376,4072,
	1944,2376,4072,1944,2376,4304,
	2416,2376,4304,2416,2376,4072,
	2416,2376,4072,2176,2376,4072,
	2176,2376,4304,2416,2376,4304,
	1464,2376,3832,1464,2376,4304,
	1464,2376,4304,1944,2376,4304,
	1944,2376,3832,1464,2376,3832,
	1464,2376,4776,1944,2376,4776,
	1944,2376,4776,1944,2376,4304,
	1464,2376,4304,1464,2376,4776,
	2416,2376,4776,2416,2376,4304,
	1944,2376,4776,2416,2376,4776,
	2416,2376,1944,1944,2376,1944,
	1944,2376,1944,1944,2376,2416,
	1944,2376,2416,2176,2376,2416,
	2176,2376,2416,2416,2376,2416,
	1464,2376,1944,1464,2376,2416,
	1464,2376,2416,1944,2376,2416,
	1944,2376,1944,1464,2376,1944,
	1464,2376,2888,1944,2376,2888,
	1944,2376,2888,1944,2376,2648,
	1944,2376,2648,1944,2376,2416,
	1464,2376,2416,1464,2376,2888,
	2416,2376,2888,2416,2376,2648,
	2416,2376,2648,2176,2376,2648,
	2176,2376,2648,2176,2376,2888,
	1944,2376,2648,2176,2376,2648,
	2176,2376,2648,2176,2376,2416,
	1464,1904,3832,1616,2048,3832,
	1616,2048,3832,1792,2048,3832,
	1792,2048,3832,1944,1904,3832,
	1464,2376,3832,1616,2232,3832,
	1616,2232,3832,1616,2048,3832,
	1464,1904,3832,1464,2376,3832,
	1944,2376,3832,1792,2232,3832,
	1792,2232,3832,1616,2232,3832,
	1792,2048,3832,1792,2232,3832,
	1616,2048,3832,1616,2048,3640,
	1616,2048,3640,1792,2048,3640,
	1792,2048,3640,1792,2048,3832,
	1616,2232,3832,1616,2232,3640,
	1616,2232,3640,1616,2048,3640,
	1792,2232,3832,1792,2232,3640,
	1792,2232,3640,1616,2232,3640,
	1792,2048,3640,1792,2232,3640,
	1616,2048,3640,1656,2088,3640,
	1656,2088,3640,1752,2088,3640,
	1752,2088,3640,1792,2048,3640,
	1616,2232,3640,1656,2184,3640,
	1656,2184,3640,1656,2088,3640,
	1792,2232,3640,1752,2184,3640,
	1752,2184,3640,1656,2184,3640,
	1752,2088,3640,1752,2184,3640,
	1944,1904,2888,1792,2048,2888,
	1792,2048,2888,1616,2048,2888,
	1616,2048,2888,1464,1904,2888,
	1464,1904,2888,1944,1904,2888,
	1944,2376,2888,1792,2232,2888,
	1792,2232,2888,1792,2048,2888,
	1464,2376,2888,1616,2232,2888,
	1616,2232,2888,1792,2232,2888,
	1616,2048,2888,1616,2232,2888,
	1464,2376,2888,1464,1904,2888,
	1792,2048,2888,1792,2048,3080,
	1792,2048,3080,1616,2048,3080,
	1616,2048,3080,1616,2048,2888,
	1792,2232,2888,1792,2232,3080,
	1792,2232,3080,1792,2048,3080,
	1616,2232,2888,1616,2232,3080,
	1616,2232,3080,1792,2232,3080,
	1616,2048,3080,1616,2232,3080,
	1792,2048,3080,1752,2088,3080,
	1752,2088,3080,1656,2088,3080,
	1656,2088,3080,1616,2048,3080,
	1792,2232,3080,1752,2184,3080,
	1752,2184,3080,1752,2088,3080,
	1616,2232,3080,1656,2184,3080,
	1656,2184,3080,1752,2184,3080,
	1656,2088,3080,1656,2184,3080,
	2176,2376,2648,2176,2400,2648,
	2176,2400,2648,2176,2400,2416,
	2176,2400,2416,2176,2376,2416,
	2176,2400,2416,2416,2400,2416,
	2416,2400,2416,2416,2376,2416,
	2416,2400,2416,2416,2400,2648,
	2416,2400,2648,2416,2376,2648,
	2416,2376,2648,2416,2376,2416,
	2416,2400,2648,2176,2400,2648,
	2176,1432,3360,2176,1456,3360,
	2176,1456,3360,2176,1456,3600,
	2176,1456,3600,2176,1432,3600,
	2176,1456,3600,1944,1456,3600,
	1944,1456,3600,1944,1432,3600,
	1944,1456,3600,1944,1456,3360,
	1944,1456,3360,1944,1432,3360,
	1944,1456,3360,2176,1456,3360,
	2416,2376,4072,2416,2400,4072,
	2416,2400,4072,2176,2400,4072,
	2176,2400,4072,2176,2376,4072,
	2176,2400,4072,2176,2400,3832,
	2176,2400,3832,2176,2376,3832,
	2176,2400,3832,2416,2400,3832,
	2416,2400,3832,2416,2376,3832,
	2416,2400,3832,2416,2400,4072,
	2416,2376,4072,2416,2376,3832,
	1464,1904,2888,1464,1904,2928,
	1464,1904,2928,1944,1904,2928,
	1944,1904,2928,1944,1904,2888,
	1944,1904,2928,1944,1432,2928,
	1944,1432,2928,1944,1432,2888,
	1944,1432,2928,1464,1432,2928,
	1464,1432,2928,1464,1432,2888,
	1464,1432,2928,1464,1904,2928,
	1464,1904,2888,1464,1432,2888,
	1752,2088,3640,1752,2088,3504,
	1752,2088,3504,1752,2088,3216,
	1752,2088,3216,1752,2088,3080,
	1752,2184,3080,1752,2184,3216,
	1752,2184,3216,1752,2184,3504,
	1752,2184,3504,1752,2184,3640,
	1656,2184,3080,1656,2184,3216,
	1656,2184,3216,1656,2184,3504,
	1656,2184,3504,1656,2184,3640,
	1656,2088,3080,1656,2088,3216,
	1656,2088,3216,1656,2088,3504,
	1656,2088,3504,1656,2088,3640,
	-416,2376,3832,-416,1904,3832,
	-416,1904,3832,48,1904,3832,
	48,1904,3832,48,2376,3832,
	48,2376,3832,-416,2376,3832,
	-416,1432,3832,-176,1432,3832,
	-176,1432,3832,48,1432,3832,
	48,1432,3832,48,1904,3832,
	520,1432,3832,520,1904,3832,
	520,1904,3832,48,1904,3832,
	48,1432,3832,520,1432,3832,
	520,2376,2888,520,1904,2888,
	520,1904,2888,48,1904,2888,
	48,1904,2888,48,2376,2888,
	48,2376,2888,520,2376,2888,
	520,1432,2888,48,1432,2888,
	48,1432,2888,48,1904,2888,
	520,1904,2888,520,1432,2888,
	-416,1904,2888,48,1904,2888,
	48,1432,2888,-416,1432,2888,
	-416,2376,2888,48,2376,2888,
	48,1432,2888,48,1432,3360,
	48,1432,3360,-176,1432,3360,
	-176,1432,3360,-416,1432,3360,
	520,1432,2888,520,1432,3360,
	520,1432,3360,48,1432,3360,
	48,1432,3832,48,1432,3600,
	48,1432,3600,48,1432,3360,
	520,1432,3360,520,1432,3832,
	-416,1432,3832,-416,1432,3600,
	-416,1432,3600,-176,1432,3600,
	-176,1432,3600,-176,1432,3832,
	-176,1432,3360,-176,1432,3600,
	-416,1432,3600,-416,1432,3360,
	-176,1432,3600,48,1432,3600,
	48,2376,3832,48,2376,4072,
	48,2376,4072,288,2376,4072,
	288,2376,4072,288,2376,3832,
	288,2376,3832,48,2376,3832,
	48,2376,4304,288,2376,4304,
	288,2376,4304,288,2376,4072,
	48,2376,4072,48,2376,4304,
	520,2376,4304,520,2376,4072,
	520,2376,4072,288,2376,4072,
	288,2376,4304,520,2376,4304,
	-416,2376,4304,48,2376,4304,
	-416,2376,4776,48,2376,4776,
	48,2376,4776,48,2376,4304,
	-416,2376,4304,-416,2376,4776,
	520,2376,4776,520,2376,4304,
	48,2376,4776,520,2376,4776,
	-416,2376,2416,-176,2376,2416,
	-176,2376,2416,48,2376,2416,
	48,2376,2416,48,2376,1944,
	48,2376,1944,-416,2376,1944,
	48,2376,2888,48,2376,2648,
	48,2376,2648,-176,2376,2648,
	-176,2376,2648,-176,2376,2888,
	-176,2376,2888,48,2376,2888,
	-176,2376,2416,-176,2376,2648,
	48,2376,2648,48,2376,2416,
	-416,2376,2416,-416,2376,2648,
	-416,2376,2648,-176,2376,2648,
	520,2376,2888,520,2376,2416,
	520,2376,2416,48,2376,2416,
	-176,1432,3360,-176,1456,3360,
	-176,1456,3360,-176,1456,3600,
	-176,1456,3600,-176,1432,3600,
	-176,1456,3600,48,1456,3600,
	48,1456,3600,48,1432,3600,
	48,1456,3600,48,1456,3360,
	48,1456,3360,48,1432,3360,
	48,1456,3360,-176,1456,3360,
	520,2376,4072,520,2408,4072,
	520,2408,4072,288,2408,4072,
	288,2408,4072,288,2376,4072,
	288,2408,4072,288,2408,3832,
	288,2408,3832,288,2376,3832,
	288,2408,3832,520,2408,3832,
	520,2408,3832,520,2376,3832,
	520,2376,3832,288,2376,3832,
	520,2408,3832,520,2408,4072,
	520,2376,4072,520,2376,3832,
	-416,2376,2648,-416,2408,2648,
	-416,2408,2648,-176,2408,2648,
	-176,2408,2648,-176,2376,2648,
	-176,2408,2648,-176,2408,2888,
	-176,2408,2888,-176,2376,2888,
	-176,2408,2888,-416,2408,2888,
	-416,2408,2888,-416,2376,2888,
	-416,2376,2888,-176,2376,2888,
	-416,2408,2888,-416,2408,2648,
	-416,2376,2648,-416,2376,2888,
	48,2376,2416,48,2416,2416,
	48,2416,2416,48,2416,1944,
	48,2416,1944,48,2376,1944,
	48,2416,1944,520,2416,1944,
	520,2416,1944,520,2376,1944,
	520,2376,1944,48,2376,1944,
	520,2416,1944,520,2416,2416,
	520,2416,2416,520,2376,2416,
	520,2376,2416,520,2376,1944,
	520,2416,2416,48,2416,2416,
	520,1904,3832,520,1904,3800,
	520,1904,3800,48,1904,3800,
	48,1904,3800,48,1904,3832,
	48,1904,3800,48,2376,3800,
	48,2376,3800,48,2376,3832,
	48,2376,3800,520,2376,3800,
	520,2376,3800,520,2376,3832,
	520,2376,3832,48,2376,3832,
	520,2376,3800,520,1904,3800,
	520,1904,3832,520,2376,3832,
	520,1904,3832,992,1904,3832,
	992,1904,3832,992,2376,3832,
	992,2376,3832,520,2376,3832,
	1464,1904,3832,992,1904,3832,
	992,1904,3832,992,1432,3832,
	992,1432,3832,1464,1432,3832,
	1464,1432,2888,992,1432,2888,
	992,1432,2888,992,1904,2888,
	992,1904,2888,1464,1904,2888,
	520,1904,2888,992,1904,2888,
	992,1432,2888,520,1432,2888,
	520,2376,2888,992,2376,2888,
	992,2376,2888,992,1904,2888,
	992,1432,2888,992,1432,3360,
	992,1432,3360,520,1432,3360,
	1464,1432,3360,992,1432,3360,
	992,1432,3832,992,1432,3360,
	992,1432,3832,520,1432,3832,
	992,1904,2888,992,1904,2960,
	992,1904,2960,1464,1904,2960,
	1464,1904,2960,1464,1904,2888,
	1464,1904,2960,1464,2376,2960,
	1464,2376,2960,1464,2376,2888,
	1464,2376,2960,992,2376,2960,
	992,2376,2960,992,2376,2888,
	992,2376,2888,1464,2376,2888,
	992,2376,2960,992,1904,2960,
	992,1904,3832,992,1904,3720,
	992,1904,3720,992,1432,3720,
	992,1432,3720,992,1432,3832,
	992,1432,3720,520,1432,3720,
	520,1432,3720,520,1432,3832,
	520,1432,3720,520,1904,3720,
	520,1904,3720,520,1904,3832,
	520,1904,3720,992,1904,3720,
	1464,1904,3832,1464,1904,3816,
	1464,1904,3816,992,1904,3816,
	992,1904,3816,992,1904,3832,
	992,1904,3816,992,2376,3816,
	992,2376,3816,992,2376,3832,
	992,2376,3816,1464,2376,3816,
	1464,2376,3816,1464,2376,3832,
	1464,2376,3832,992,2376,3832,
	1464,2376,3816,1464,1904,3816,
	1464,2376,4304,992,2376,4304,
	992,2376,4304,992,2376,3832,
	992,2376,4304,520,2376,4304,
	520,2376,4304,520,2376,3832,
	992,2376,4776,992,2376,4304,
	1464,2376,4776,992,2376,4776,
	992,2376,1944,992,2376,2416,
	992,2376,2416,520,2376,2416,
	520,2376,1944,992,2376,1944,
	992,2376,2416,992,2376,2888,
	992,2376,2416,1464,2376,2416,
	992,2376,4304,992,2408,4304,
	992,2408,4304,520,2408,4304,
	520,2408,4304,520,2376,4304,
	992,2376,4776,992,2408,4776,
	992,2408,4776,992,2408,4304,
	520,2376,4776,520,2408,4776,
	520,2408,4776,992,2408,4776,
	992,2376,4776,520,2376,4776,
	520,2408,4304,520,2408,4776,
	992,2376,1944,992,2432,1944,
	992,2432,1944,992,2432,2416,
	992,2432,2416,992,2376,2416,
	1464,2376,1944,1464,2432,1944,
	1464,2432,1944,992,2432,1944,
	992,2376,1944,1464,2376,1944,
	1464,2376,2416,1464,2432,2416,
	1464,2432,2416,1464,2432,1944,
	992,2432,2416,1464,2432,2416};


const s32 destroyer[] = {1014, //total number of vertex points
	2,
	-1472,440,-760,-1472,216,3144,
	-1472,216,3144,-2136,216,3144,
	-2136,216,3144,-1472,440,-760,
	-2136,216,3144,-2792,216,3144,
	-2792,216,3144,-1472,440,-760,
	-2792,216,3144,-2792,800,3144,
	-2792,800,3144,-2624,752,2656,
	-2624,752,2656,-2464,712,2168,
	-2464,712,2168,-2136,624,1192,
	-2136,624,1192,-1472,440,-760,
	-2136,800,3144,-2056,920,3064,
	-2056,920,3064,-1992,920,2072,
	-1992,920,2072,-2048,800,2032,
	-2048,800,2032,-2136,800,3144,
	-1992,920,2072,-1472,920,2072,
	-1472,920,2072,-1472,800,2032,
	-1472,800,2032,-2048,800,2032,
	-1712,1024,2992,-1936,1024,2992,
	-1936,1024,2992,-1944,912,2992,
	-1944,912,2992,-1712,912,2992,
	-1712,912,2992,-1712,1024,2992,
	-1936,1024,2992,-1920,1024,2576,
	-1920,1024,2576,-1904,1024,2152,
	-1904,1024,2152,-1904,912,2160,
	-1904,912,2160,-1944,912,2992,
	-1904,1024,2152,-1472,1024,2152,
	-1472,1024,2152,-1472,912,2160,
	-1472,912,2160,-1904,912,2160,
	-1712,1016,2584,-1472,1016,2592,
	-1472,1016,2592,-1472,1024,2152,
	-1920,1024,2576,-1712,1016,2584,
	-1712,1024,2992,-1712,1024,2784,
	-1712,1024,2784,-1712,1016,2584,
	-1712,912,3064,-1712,1024,2992,
	-1712,912,2992,-1712,912,3064,
	-2056,920,3064,-1712,912,3064,
	-1472,912,2160,-1472,920,2072,
	-2792,800,3144,-2136,800,3144,
	-2048,800,2032,-1472,440,-760,
	-1472,800,2032,-1472,712,2168,
	-1472,712,2168,-1472,624,1192,
	-1472,624,1192,-1472,440,-760,
	-1712,1016,2584,-1712,1152,2584,
	-1712,1152,2584,-1712,1280,2592,
	-1712,1280,2592,-1472,1280,2592,
	-1472,1280,2592,-1472,1016,2592,
	-1712,1280,2592,-2032,1256,2592,
	-1712,1280,2792,-1472,1280,2800,
	-1472,1280,2800,-1472,1280,2592,
	-1712,1280,2592,-1712,1280,2792,
	-1472,1024,2992,-1472,1280,2800,
	-1472,1280,2800,-1712,1280,2800,
	-1712,1280,2800,-1712,1152,2896,
	-1712,1152,2896,-1712,1024,2992,
	-2136,800,3144,-1472,800,3144,
	-1472,800,3144,-1472,1024,2992,
	-1712,1024,2784,-1712,1152,2736,
	-1712,1152,2736,-1712,1152,2696,
	-1712,1152,2696,-1712,1152,2584,
	-1712,1152,2896,-1712,1152,2736,
	-1712,1280,2800,-1712,1280,2696,
	-1712,1280,2696,-1712,1152,2736,
	-1712,1280,2696,-1712,1152,2696,
	-2032,1176,2584,-2032,1256,2592,
	-1712,1152,2584,-2032,1176,2584,
	-2032,1176,2584,-2040,1176,2688,
	-2040,1176,2688,-2040,1256,2696,
	-2040,1256,2696,-2032,1256,2592,
	-2040,1176,2688,-1712,1152,2696,
	-1712,1280,2696,-2040,1256,2696,
	-1968,1264,2592,-1968,1264,2696,
	-1968,1264,2696,-1712,1280,2696,
	-1712,1280,2696,-1712,1280,2592,
	-1712,1280,2592,-1968,1264,2592,
	-1968,1264,2592,-2032,1256,2592,
	-2040,1256,2696,-1968,1264,2696,
	-816,216,3144,-1472,216,3144,
	-1472,440,-760,-816,216,3144,
	-1472,440,-760,-152,216,3144,
	-152,216,3144,-816,216,3144,
	-816,624,1192,-480,712,2168,
	-480,712,2168,-320,752,2656,
	-320,752,2656,-152,800,3144,
	-152,800,3144,-152,216,3144,
	-1472,440,-760,-816,624,1192,
	-896,800,2032,-952,920,2072,
	-952,920,2072,-888,920,3064,
	-888,920,3064,-816,800,3144,
	-816,800,3144,-896,800,2032,
	-1472,920,2072,-952,920,2072,
	-896,800,2032,-1472,800,2032,
	-1232,912,2992,-1000,912,2992,
	-1000,912,2992,-1008,1024,2992,
	-1008,1024,2992,-1232,1024,2992,
	-1232,1024,2992,-1232,912,2992,
	-1040,912,2160,-1040,1024,2152,
	-1040,1024,2152,-1024,1024,2576,
	-1024,1024,2576,-1008,1024,2992,
	-1000,912,2992,-1040,912,2160,
	-1472,1024,2152,-1040,1024,2152,
	-1040,912,2160,-1472,912,2160,
	-1472,1016,2592,-1232,1016,2584,
	-1232,1016,2584,-1024,1024,2576,
	-1232,1024,2784,-1232,1024,2992,
	-1232,1016,2584,-1232,1024,2784,
	-1232,1024,2992,-1232,912,3064,
	-1232,912,3064,-1232,912,2992,
	-1232,912,3064,-888,920,3064,
	-816,800,3144,-152,800,3144,
	-1472,440,-760,-896,800,2032,
	-1472,1280,2592,-1232,1280,2592,
	-1232,1280,2592,-1232,1152,2584,
	-1232,1152,2584,-1232,1016,2584,
	-1232,1280,2592,-912,1256,2592,
	-1472,1280,2800,-1232,1280,2792,
	-1232,1280,2792,-1232,1280,2592,
	-1472,800,3144,-816,800,3144,
	-1232,1024,2992,-1232,1152,2896,
	-1232,1152,2896,-1232,1280,2800,
	-1232,1280,2800,-1472,1280,2800,
	-1232,1152,2584,-1232,1152,2696,
	-1232,1152,2696,-1232,1152,2736,
	-1232,1152,2736,-1232,1024,2784,
	-1232,1152,2736,-1232,1152,2896,
	-1232,1152,2736,-1232,1280,2696,
	-1232,1280,2696,-1232,1280,2800,
	-1232,1152,2696,-1232,1280,2696,
	-912,1256,2592,-912,1176,2584,
	-912,1176,2584,-1232,1152,2584,
	-912,1256,2592,-912,1256,2696,
	-912,1256,2696,-912,1176,2688,
	-912,1176,2688,-912,1176,2584,
	-912,1256,2696,-1232,1280,2696,
	-1232,1152,2696,-912,1176,2688,
	-1232,1280,2592,-1232,1280,2696,
	-1232,1280,2696,-976,1264,2696,
	-976,1264,2696,-976,1264,2592,
	-976,1264,2592,-1232,1280,2592,
	-976,1264,2696,-912,1256,2696,
	-912,1256,2592,-976,1264,2592,
	-2136,800,3144,-2136,776,3216,
	-2136,776,3216,-1760,776,3216,
	-1760,776,3216,-1728,800,3144,
	-1728,800,3144,-2136,800,3144,
	-1760,776,3216,-1472,776,3216,
	-1472,776,3216,-1472,800,3144,
	-1472,800,3144,-1728,800,3144,
	-1472,216,3144,-1472,240,3216,
	-1472,240,3216,-2136,240,3216,
	-2136,240,3216,-2136,216,3144,
	-2136,240,3216,-2736,240,3216,
	-2736,240,3216,-2792,216,3144,
	-2736,240,3216,-2736,776,3216,
	-2736,776,3216,-2792,800,3144,
	-2736,776,3216,-2136,776,3216,
	-1472,240,3216,-1472,776,3216,
	-1216,800,3144,-1184,776,3216,
	-1184,776,3216,-816,776,3216,
	-816,776,3216,-816,800,3144,
	-816,800,3144,-1216,800,3144,
	-816,776,3216,-216,776,3216,
	-216,776,3216,-152,800,3144,
	-216,776,3216,-216,240,3216,
	-216,240,3216,-152,216,3144,
	-216,240,3216,-816,240,3216,
	-816,240,3216,-816,216,3144,
	-816,240,3216,-1472,240,3216,
	-1472,776,3216,-1184,776,3216,
	-1216,800,3144,-1472,800,3144};

const s32 cannons[] = {774, //total number of vertex points
	2,
	-1608,1544,856,-1680,1552,856,
	-1680,1552,856,-1680,1480,856,
	-1680,1480,856,-1608,1480,856,
	-1608,1480,856,-1608,1544,856,
	-1608,1544,896,-1680,1552,896,
	-1680,1552,896,-1680,1552,856,
	-1608,1544,856,-1608,1544,896,
	-1608,1480,896,-1680,1480,896,
	-1680,1480,896,-1680,1552,896,
	-1608,1544,896,-1608,1480,896,
	-1680,1480,856,-1680,1480,896,
	-1608,1480,896,-1608,1480,856,
	-1680,1552,856,-1712,1528,856,
	-1712,1528,856,-1720,1496,856,
	-1720,1496,856,-1680,1480,856,
	-1680,1552,896,-1712,1528,896,
	-1712,1528,896,-1712,1528,856,
	-1680,1480,896,-1720,1496,896,
	-1720,1496,896,-1712,1528,896,
	-1720,1496,856,-1720,1496,896,
	-1712,1528,856,-1800,1536,856,
	-1800,1536,856,-1800,1496,856,
	-1800,1496,856,-1720,1496,856,
	-1712,1528,896,-1800,1536,896,
	-1800,1536,896,-1800,1536,856,
	-1720,1496,896,-1800,1496,896,
	-1800,1496,896,-1800,1536,896,
	-1800,1496,856,-1800,1496,896,
	-1800,1496,856,-1808,1504,864,
	-1808,1504,864,-1808,1504,888,
	-1808,1504,888,-1800,1496,896,
	-1808,1504,888,-1808,1528,888,
	-1808,1528,888,-1800,1536,896,
	-1808,1528,888,-1808,1528,864,
	-1808,1528,864,-1800,1536,856,
	-1808,1528,864,-1808,1504,864,
	-1808,1504,864,-1928,1504,864,
	-1928,1504,864,-1928,1504,888,
	-1928,1504,888,-1808,1504,888,
	-1928,1504,888,-1928,1528,888,
	-1928,1528,888,-1808,1528,888,
	-1928,1528,888,-1928,1528,864,
	-1928,1528,864,-1808,1528,864,
	-1928,1528,864,-1928,1504,864,
	-1608,1480,760,-1680,1480,760,
	-1680,1480,760,-1680,1552,760,
	-1680,1552,760,-1608,1544,760,
	-1608,1544,760,-1608,1480,760,
	-1680,1552,760,-1680,1552,712,
	-1680,1552,712,-1608,1544,712,
	-1608,1544,712,-1608,1544,760,
	-1680,1552,712,-1680,1480,712,
	-1680,1480,712,-1608,1480,712,
	-1608,1480,712,-1608,1544,712,
	-1680,1480,712,-1680,1480,760,
	-1608,1480,760,-1608,1480,712,
	-1680,1480,760,-1720,1496,752,
	-1720,1496,752,-1712,1528,752,
	-1712,1528,752,-1680,1552,760,
	-1712,1528,752,-1712,1528,720,
	-1712,1528,720,-1680,1552,712,
	-1712,1528,720,-1720,1496,720,
	-1720,1496,720,-1680,1480,712,
	-1720,1496,720,-1720,1496,752,
	-1720,1496,752,-1800,1496,752,
	-1800,1496,752,-1800,1536,752,
	-1800,1536,752,-1712,1528,752,
	-1800,1536,752,-1800,1536,720,
	-1800,1536,720,-1712,1528,720,
	-1800,1536,720,-1800,1496,720,
	-1800,1496,720,-1720,1496,720,
	-1800,1496,720,-1800,1496,752,
	-1800,1496,720,-1808,1504,728,
	-1808,1504,728,-1808,1504,752,
	-1808,1504,752,-1800,1496,752,
	-1800,1536,720,-1808,1528,728,
	-1808,1528,728,-1808,1504,728,
	-1800,1536,752,-1808,1528,752,
	-1808,1528,752,-1808,1528,728,
	-1808,1504,752,-1808,1528,752,
	-1808,1504,728,-1928,1504,728,
	-1928,1504,728,-1928,1504,752,
	-1928,1504,752,-1808,1504,752,
	-1808,1528,728,-1928,1528,728,
	-1928,1528,728,-1928,1504,728,
	-1808,1528,752,-1928,1528,752,
	-1928,1528,752,-1928,1528,728,
	-1928,1504,752,-1928,1528,752,
	-1360,1584,664,-1304,1312,624,
	-1304,1312,624,-1656,1312,624,
	-1656,1312,624,-1632,1448,640,
	-1632,1448,640,-1624,1480,648,
	-1624,1480,648,-1624,1512,648,
	-1624,1512,648,-1616,1544,656,
	-1616,1544,656,-1608,1584,664,
	-1608,1584,664,-1360,1584,664,
	-1608,1584,952,-1616,1544,952,
	-1616,1544,952,-1624,1512,960,
	-1624,1512,960,-1624,1480,968,
	-1624,1480,968,-1632,1448,968,
	-1632,1448,968,-1656,1312,992,
	-1656,1312,992,-1304,1312,992,
	-1304,1312,992,-1360,1584,952,
	-1360,1584,952,-1608,1584,952,
	-1360,1584,808,-1360,1584,952,
	-1304,1312,992,-1304,1312,808,
	-1304,1312,808,-1304,1312,624,
	-1360,1584,664,-1360,1584,808,
	-1608,1584,736,-1608,1584,808,
	-1608,1584,808,-1608,1584,880,
	-1608,1584,880,-1608,1584,952,
	-1608,1584,664,-1608,1584,736,
	-1304,1312,624,-1304,1312,992,
	-1656,1312,992,-1656,1312,624,
	-1656,1312,992,-1608,1584,952,
	-1608,1584,952,-1608,1584,664,
	-1608,1584,664,-1656,1312,624,
	-1304,1312,624,-1272,1176,600,
	-1272,1176,600,-1680,1176,600,
	-1680,1176,600,-1656,1312,624,
	-1656,1312,992,-1680,1176,1008,
	-1680,1176,1008,-1272,1176,1008,
	-1272,1176,1008,-1304,1312,992,
	-1680,1176,808,-1680,1176,1008,
	-1656,1312,992,-1656,1312,808,
	-1656,1312,808,-1656,1312,624,
	-1680,1176,600,-1680,1176,808,
	-1272,1176,1008,-1272,1176,808,
	-1272,1176,808,-1272,1176,600};

const s32 tieFighterModel[] = {1254, //total number of vertex points
	2,
	48,616,-256,152,-288,-288,
	152,-288,-288,-112,-288,-1112,
	-112,-288,-1112,32,640,-304,
	32,640,-304,48,616,-256,
	64,640,-208,416,-288,520,
	416,-288,520,152,-288,-288,
	48,616,-256,64,640,-208,
	72,696,-184,568,696,976,
	568,696,976,416,-288,520,
	64,640,-208,72,696,-184,
	64,744,-208,416,1512,520,
	416,1512,520,568,696,976,
	72,696,-184,64,744,-208,
	48,784,-256,152,1512,-288,
	152,1512,-288,416,1512,520,
	64,744,-208,48,784,-256,
	32,744,-304,-112,1512,-1112,
	-112,1512,-1112,152,1512,-288,
	48,784,-256,32,744,-304,
	24,696,-328,-264,696,-1568,
	-264,696,-1568,-112,1512,-1112,
	32,744,-304,24,696,-328,
	-112,-288,-1112,-264,696,-1568,
	24,696,-328,32,640,-304,
	152,-288,-288,368,696,-368,
	368,696,-368,-112,-288,-1112,
	416,-288,520,368,696,-368,
	568,696,976,368,696,-368,
	416,1512,520,368,696,-368,
	152,1512,-288,368,696,-368,
	-112,1512,-1112,368,696,-368,
	-264,696,-1568,368,696,-368,
	-664,1040,-232,-536,1040,-144,
	-536,1040,-144,-736,1120,0,
	-736,1120,0,-664,1040,-232,
	-736,1120,0,-816,1040,-232,
	-816,1040,-232,-736,1040,-232,
	-736,1040,-232,-736,1120,0,
	-736,1040,-232,-664,1040,-232,
	-536,1040,144,-656,1040,232,
	-656,1040,232,-736,1120,0,
	-736,1120,0,-536,1040,144,
	-488,1040,0,-536,1040,144,
	-736,1120,0,-488,1040,0,
	-536,1040,-144,-488,1040,0,
	-664,1040,-232,-616,832,-376,
	-616,832,-376,-416,832,-232,
	-416,832,-232,-536,1040,-144,
	-816,1040,-232,-864,832,-376,
	-864,832,-376,-736,832,-376,
	-736,832,-376,-736,1040,-232,
	-736,832,-376,-616,832,-376,
	-536,1040,144,-408,832,232,
	-408,832,232,-608,832,376,
	-608,832,376,-656,1040,232,
	-488,1040,0,-336,832,0,
	-336,832,0,-408,832,232,
	-416,832,-232,-376,832,-112,
	-376,832,-112,-336,832,0,
	-616,832,-376,-616,568,-376,
	-616,568,-376,-416,568,-232,
	-416,568,-232,-416,696,-232,
	-416,696,-232,-416,832,-232,
	-864,832,-376,-864,568,-376,
	-864,568,-376,-736,568,-376,
	-736,568,-376,-736,832,-376,
	-736,568,-376,-616,568,-376,
	-408,832,232,-408,568,232,
	-408,568,232,-608,568,376,
	-608,568,376,-608,832,376,
	-336,832,0,-336,696,0,
	-336,696,0,-336,568,0,
	-336,568,0,-408,568,232,
	-616,568,-376,-664,360,-232,
	-664,360,-232,-536,360,-144,
	-536,360,-144,-416,568,-232,
	-864,568,-376,-816,360,-232,
	-816,360,-232,-736,360,-232,
	-736,360,-232,-736,568,-376,
	-736,360,-232,-664,360,-232,
	-408,568,232,-536,360,144,
	-536,360,144,-656,360,232,
	-656,360,232,-608,568,376,
	-336,568,0,-488,360,0,
	-488,360,0,-536,360,144,
	-376,568,-112,-416,568,-232,
	-536,360,-144,-488,360,0,
	-336,568,0,-376,568,-112,
	-664,360,-232,-736,280,0,
	-736,280,0,-536,360,-144,
	-736,360,-232,-736,280,0,
	-816,360,-232,-736,280,0,
	-536,360,144,-736,280,0,
	-736,280,0,-656,360,232,
	-488,360,0,-736,280,0,
	-336,832,0,88,776,-192,
	88,776,-192,88,624,-192,
	88,624,-192,-336,568,0,
	-336,568,0,-336,832,0,
	-416,832,-232,40,776,-328,
	40,776,-328,88,776,-192,
	-336,832,0,-416,832,-232,
	-416,568,-232,40,624,-328,
	40,624,-328,40,776,-328,
	-416,832,-232,-416,568,-232,
	88,624,-192,40,624,-328,
	-416,568,-232,-336,568,0,
	-1528,616,256,-1624,-288,288,
	-1624,-288,288,-1896,-288,-528,
	-1896,-288,-528,-1544,640,208,
	-1544,640,208,-1528,616,256,
	-1512,640,304,-1360,-288,1104,
	-1360,-288,1104,-1624,-288,288,
	-1528,616,256,-1512,640,304,
	-1504,696,328,-1216,696,1568,
	-1216,696,1568,-1360,-288,1104,
	-1512,640,304,-1504,696,328,
	-1512,744,304,-1360,1512,1104,
	-1360,1512,1104,-1216,696,1568,
	-1504,696,328,-1512,744,304,
	-1528,784,256,-1624,1512,288,
	-1624,1512,288,-1360,1512,1104,
	-1512,744,304,-1528,784,256,
	-1544,744,208,-1896,1512,-528,
	-1896,1512,-528,-1624,1512,288,
	-1528,784,256,-1544,744,208,
	-1552,696,176,-2040,696,-984,
	-2040,696,-984,-1896,1512,-528,
	-1544,744,208,-1552,696,176,
	-1896,-288,-528,-2040,696,-984,
	-1552,696,176,-1544,640,208,
	-1624,-288,288,-1680,696,296,
	-1680,696,296,-1896,-288,-528,
	-1360,-288,1104,-1680,696,296,
	-1216,696,1568,-1680,696,296,
	-1360,1512,1104,-1680,696,296,
	-1624,1512,288,-1680,696,296,
	-1896,1512,-528,-1680,696,296,
	-2040,696,-984,-1680,696,296,
	-736,1120,0,-984,1040,0,
	-984,1040,0,-936,1040,-144,
	-936,1040,-144,-736,1120,0,
	-872,1040,-184,-808,1040,-232,
	-808,1040,-232,-736,1120,0,
	-736,1120,0,-872,1040,-184,
	-936,1040,-144,-872,1040,-184,
	-656,1040,232,-808,1040,232,
	-808,1040,232,-736,1120,0,
	-808,1040,232,-936,1040,144,
	-936,1040,144,-736,1120,0,
	-936,1040,144,-984,1040,0,
	-984,1040,0,-1136,832,0,
	-1136,832,0,-1056,832,-232,
	-1056,832,-232,-936,1040,-144,
	-960,832,-304,-856,832,-376,
	-856,832,-376,-808,1040,-232,
	-872,1040,-184,-960,832,-304,
	-1056,832,-232,-960,832,-304,
	-608,832,376,-856,832,376,
	-856,832,376,-808,1040,232,
	-856,832,376,-1056,832,232,
	-1056,832,232,-936,1040,144,
	-1056,832,232,-1096,832,112,
	-1096,832,112,-1136,832,0,
	-1136,832,0,-1136,696,0,
	-1136,696,0,-1136,568,0,
	-1136,568,0,-1056,568,-232,
	-1056,568,-232,-1056,832,-232,
	-960,568,-304,-856,568,-376,
	-856,568,-376,-856,832,-376,
	-960,832,-304,-960,568,-304,
	-1056,568,-232,-960,568,-304,
	-608,568,376,-856,568,376,
	-856,568,376,-856,832,376,
	-856,568,376,-1056,568,232,
	-1056,568,232,-1056,696,232,
	-1056,696,232,-1056,832,232,
	-1136,568,0,-984,360,0,
	-984,360,0,-936,360,-144,
	-936,360,-144,-1056,568,-232,
	-872,360,-184,-808,360,-232,
	-808,360,-232,-856,568,-376,
	-960,568,-304,-872,360,-184,
	-936,360,-144,-872,360,-184,
	-656,360,232,-808,360,232,
	-808,360,232,-856,568,376,
	-808,360,232,-936,360,144,
	-936,360,144,-1056,568,232,
	-936,360,144,-984,360,0,
	-1136,568,0,-1096,568,112,
	-1096,568,112,-1056,568,232,
	-984,360,0,-736,280,0,
	-736,280,0,-936,360,-144,
	-736,280,0,-872,360,-184,
	-736,280,0,-808,360,-232,
	-736,280,0,-808,360,232,
	-736,280,0,-936,360,144,
	-1056,832,232,-1520,776,328,
	-1520,776,328,-1520,624,328,
	-1520,624,328,-1056,568,232,
	-1056,568,232,-1056,832,232,
	-1136,832,0,-1568,776,192,
	-1568,776,192,-1520,776,328,
	-1056,832,232,-1136,832,0,
	-1136,568,0,-1568,624,192,
	-1568,624,192,-1568,776,192,
	-1136,832,0,-1136,568,0,
	-1520,624,328,-1568,624,192,
	-1136,568,0,-1056,568,232};


#endif
