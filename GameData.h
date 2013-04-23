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

const s32 tieFighterModel[] = {126, //total number of vertices
	216, //total number of line end points
	2,
	//Distinct vertices
	280,280,0,-280,280,0,280,-280,0,-280,-280,0
	,0,280,280,0,-280,280,0,280,-280,0,-280,-280
	,280,0,280,-280,0,280,280,0,-280,-280,0,-280
	,400,0,0,-400,0,0,0,400,0,0,-400,0
	,0,0,400,0,0,-400,-800,-1144,840,-800,0,1680
	,-800,1144,840,-800,1144,-840,-800,0,-1680,-800,-1144,-840
	,-800,0,0,800,-1144,840,800,0,1680,800,1144,840
	,800,1144,-840,800,0,-1680,800,-1144,-840,800,0,0
	,-256,-88,0,-256,88,0,-792,88,0,-792,-88,0
	,-520,0,0,792,-88,0,792,88,0,256,88,0
	,256,-88,0,520,0,0
	//Vertex indexes
	,12,0,0,8,8,8,0,14,14,4,4,4,0,4,4,8
	,4,16,16,16,13,9,9,1,1,1,1,4,14,14,9,4
	,9,16,13,3,3,9,9,9,3,15,15,5,5,5,3,5
	,5,9,5,16,12,8,8,2,2,2,2,5,15,15,8,5
	,8,16,12,10,10,0,0,0,0,6,6,14,10,6,6,6
	,10,17,17,6,13,1,1,11,11,11,1,14,1,6,6,11
	,17,17,13,11,11,3,3,3,3,7,7,15,11,7,7,7
	,11,17,17,7,12,2,2,10,10,10,2,15,2,7,7,10
	,23,18,18,24,24,24,18,19,19,24,19,20,20,24,20,21
	,21,24,21,22,22,24,22,23,23,24,30,25,25,31,31,31
	,25,26,26,31,26,27,27,31,27,28,28,31,28,29,29,31
	,29,30,30,31,35,32,32,36,36,36,32,33,33,36,33,34
	,34,36,34,35,35,36,40,37,37,41,41,41,37,38,38,41
	,38,39,39,41,39,40,40,41};
	
const s32 trench[] = {1200, //total number of vertices
	1670, //total number of line end points
	2,
	//Distinct vertices
	-2040,3560,5752,-624,3560,5752,-624,3560,4336,-2040,3560,4336
	,-624,2144,5752,-2040,2144,4336,-1336,3560,5752,-624,2856,5752
	,-2040,2856,4336,-2040,2144,5040,-624,2144,5040,-624,3560,7168
	,-2040,3560,7168,-2040,3560,2912,-624,3560,2912,-1336,3560,3624
	,-1336,3560,5752,-2040,3560,6464,-624,3560,6464,-1336,3560,4336
	,-624,3560,3624,-2040,3560,3624,-1336,3560,7168,-1336,3560,2912
	,-976,3208,5752,-976,3560,5752,-624,3208,5752,-2040,3208,4336
	,-2040,2144,4688,-1688,2144,4336,-1336,3208,5752,-976,2856,5752
	,-1688,2856,4336,-624,3560,6816,-976,3560,7168,-1336,3608,6464
	,-1336,3608,6816,-976,3608,6464,-976,3608,6816,-1336,3560,6464
	,-1336,3560,6816,-976,3560,6464,-976,3560,6816,-1688,2200,4688
	,-1688,2200,5040,-1336,2200,4688,-1336,2200,5040,-1688,2144,4688
	,-1688,2144,5040,-1336,2144,4688,-1336,2144,5040,-1688,3208,4384
	,-1688,3560,4384,-1336,3208,4384,-1336,3560,4384,-1688,3208,4336
	,-1688,3560,4336,-1336,3208,4336,-1336,3560,4336,-1336,2144,4408
	,-1336,2856,4408,-624,2144,4408,-624,2856,4408,-1336,2144,4336
	,-1336,2856,4336,-624,2144,4336,-624,2856,4336,-2040,2144,5688
	,-2040,2856,5688,-1336,2144,5688,-1336,2856,5688,-2040,2144,5752
	,-2040,2856,5752,-1336,2144,5752,-1336,2856,5752,3624,3560,5752
	,5040,3560,4336,3624,3560,4336,5040,2144,5752,4328,2144,5040
	,4328,3560,4336,3624,2144,5040,5040,2144,5040,5040,3560,7168
	,3624,3560,7168,3624,3560,2912,5040,3560,2912,3624,3560,6464
	,5040,3560,6464,5040,3560,3624,3624,3560,3624,4328,3560,7168
	,4328,3560,2912,4128,2648,5752,4128,2352,5752,3824,2352,5752
	,3824,2648,5752,4128,2648,5464,4128,2352,5464,3824,2352,5464
	,3824,2648,5464,4056,2584,5408,4056,2416,5408,3888,2416,5408
	,3888,2584,5408,3888,2416,5216,3888,2584,5216,4056,2416,5216
	,4056,2584,5216,4128,2352,4336,4128,2648,4336,3824,2648,4336
	,3824,2352,4336,4128,2352,4616,4128,2648,4616,3824,2648,4616
	,3824,2352,4616,4056,2416,4672,4056,2584,4672,3888,2584,4672
	,3888,2416,4672,3888,2416,4872,3888,2584,4872,4056,2416,4872
	,4056,2584,4872,3624,2144,4336,3624,2144,5752,3624,2856,4336
	,3624,2856,5752,4328,2144,4336,4328,2144,5752,4328,2856,4336
	,4688,3560,4336,4328,3208,4336,4328,2496,4336,4688,2144,4376
	,4688,2496,4376,4688,2856,4376,4688,3208,4376,5040,2144,4376
	,5040,2496,4376,5040,2856,4376,5040,3208,4376,4688,2144,4336
	,4688,2496,4336,4688,2856,4336,4688,3208,4336,5040,2144,4336
	,5040,2496,4336,5040,2856,4336,5040,3208,4336,4328,2856,5712
	,4328,3560,5712,5040,2856,5712,5040,3560,5712,4328,2856,5752
	,4328,3560,5752,5040,2856,5752,5040,3560,5752,3624,3560,6816
	,3976,3560,7168,5040,3560,3272,4688,3560,2912,3976,3592,6464
	,3976,3592,6816,4328,3592,6464,4328,3592,6816,4328,3592,3272
	,4328,3592,3624,4688,3592,3272,4688,3592,3624,3976,3560,6464
	,3976,3560,6816,4328,3560,3272,4328,3560,3624,4328,3560,6464
	,4328,3560,6816,4688,3560,3272,4688,3560,3624,2200,3560,5752
	,3624,3560,4336,2200,3560,4336,2200,2144,5752,3624,2144,5752
	,3624,2144,4336,3624,2856,5752,3624,2856,4336,2912,2144,5752
	,2200,2144,5040,3624,2144,5040,3624,3560,7168,2200,3560,7168
	,2200,3560,2912,3624,3560,2912,2912,3560,6464,2912,3560,3624
	,2912,3560,5752,2200,3560,6464,3624,3560,6464,2912,3560,4336
	,2200,3560,3624,2912,3560,7168,2912,3560,2912,2696,3072,5752
	,2424,3072,5752,2424,3344,5752,2696,3344,5752,2696,3072,5464
	,2424,3072,5464,2424,3344,5464,2696,3344,5464,2632,3136,5464
	,2488,3136,5464,2488,3280,5464,2632,3280,5464,2488,3136,5256
	,2488,3280,5256,2632,3136,5256,2632,3280,5256,2424,3072,4336
	,2696,3072,4336,2696,3344,4336,2424,3344,4336,2424,3072,4616
	,2696,3072,4616,2696,3344,4616,2424,3344,4616,2488,3136,4616
	,2632,3136,4616,2632,3280,4616,2488,3280,4616,2488,3136,4824
	,2488,3280,4824,2632,3136,4824,2632,3280,4824,2200,2856,5752
	,2912,2856,5752,3264,3560,4336,3264,2144,5752,3624,2144,5400
	,2912,3560,6104,3264,3560,6464,2912,3560,3976,3264,3600,3624
	,3264,3600,3976,3624,3600,3624,3624,3600,3976,3264,3560,3624
	,3264,3560,3976,3624,3560,3624,3624,3560,3976,2912,2184,5040
	,2912,2184,5400,3264,2184,5040,3264,2184,5400,2912,2144,5040
	,2912,2144,5400,3264,2144,5040,3264,2144,5400,3264,3600,5752
	,3264,3600,6104,3624,3600,5752,3624,3600,6104,3264,3560,5752
	,3264,3560,6104,3624,3560,5752,3624,3560,6104,2200,2144,4392
	,2200,2856,4392,2912,2144,4392,2912,2856,4392,2200,2144,4336
	,2200,2856,4336,2912,2144,4336,2912,2856,4336,-624,3560,5752
	,784,3560,4336,-624,3560,4336,-624,2144,5752,784,2144,5752
	,784,2144,4336,-624,2144,4336,80,2856,4336,-624,2856,5752
	,80,3560,4336,784,2856,4336,-624,2856,4336,80,2144,5752
	,-624,2144,5040,784,2144,5040,80,2144,4336,784,3560,7168
	,-624,3560,7168,-624,3560,2912,80,3560,6464,80,3560,5752
	,-624,3560,6464,784,3560,6464,80,3560,4336,-624,3560,3624
	,80,3560,7168,-272,2144,5752,-624,2144,5400,80,3560,6104
	,432,3560,6464,80,3560,3976,-272,3560,3624,-272,2184,5040
	,-272,2184,5400,80,2184,5040,80,2184,5400,-272,2144,5040
	,-272,2144,5400,80,2144,5040,80,2144,5400,432,3608,5752
	,432,3608,6104,784,3608,5752,784,3608,6104,432,3560,5752
	,432,3560,6104,784,3560,5752,784,3560,6104,-624,3608,3976
	,-624,3608,4336,-272,3608,3976,-272,3608,4336,-624,3560,3976
	,-624,3560,4336,-272,3560,3976,-272,3560,4336,80,3624,2912
	,80,3624,3624,784,3624,2912,784,3624,3624,80,3560,2912
	,80,3560,3624,784,3560,2912,784,3560,3624,80,2856,5704
	,80,3560,5704,784,2856,5704,784,3560,5704,80,2856,5752
	,80,3560,5752,784,2856,5752,784,3560,5752,784,3560,5752
	,784,3560,4336,2200,2144,5752,2200,2144,4336,784,2144,4336
	,1496,2144,5040,784,2856,4336,784,2144,5040,2200,2144,5040
	,1496,2144,4336,1496,2856,4440,1496,3560,4440,2200,2856,4440
	,2200,3560,4440,1496,2856,4336,1496,3560,4336,2200,2856,4336
	,2200,3560,4336,784,2144,5584,784,2856,5584,1496,2144,5584
	,1496,2856,5584,784,2144,5752,784,2856,5752,1496,2144,5752
	,1496,2856,5720,1496,3560,5720,2200,2856,5720,2200,3560,5720
	,1496,2856,5752,1496,3560,5752,2200,2856,5752,2200,3560,5752
	,2200,3560,7168,784,3560,2912,2200,3560,6464,784,3560,3624
	,784,3616,6464,784,3616,7168,1496,3616,6464,1496,3616,7168
	,784,3560,6464,784,3560,7168,1496,3560,6464,1496,3560,7168
	,1496,3648,2912,1496,3648,3624,2200,3648,2912,2200,3648,3624
	,1496,3560,2912,1496,3560,3624,2200,3560,2912,2200,3560,3624
	
	//Vertex indexes
	,0,72,72,74,74,30,30,6,6,6,4,7,7,31,31,74
	,74,73,73,73,1,25,25,24,24,26,26,26,30,24,25,25
	,31,24,30,30,7,26,31,31,2,66,66,64,64,57,57,58
	,58,58,5,8,8,32,32,64,64,63,63,29,29,29,3,56
	,56,55,55,27,27,27,32,55,55,57,57,57,8,27,32,32
	,5,29,29,47,47,28,28,28,63,49,49,47,9,28,47,48
	,48,48,65,10,10,50,50,49,63,63,4,73,73,50,10,10
	,71,9,9,48,48,50,1,16,16,39,39,41,41,18,18,18
	,0,17,17,39,16,16,12,22,22,40,40,39,17,17,11,33
	,33,42,42,34,34,34,41,42,33,33,22,34,42,40,40,40
	,14,23,23,15,15,20,20,20,13,21,21,15,23,23,3,19
	,19,15,21,21,2,20,19,19,42,38,38,36,36,40,36,35
	,35,39,39,39,35,37,37,41,41,41,37,38,42,42,37,37
	,49,45,45,43,43,47,47,47,43,44,44,48,44,46,46,50
	,50,50,46,45,49,49,45,45,55,51,51,53,53,57,53,54
	,54,58,54,52,52,56,56,56,52,51,55,55,52,52,64,60
	,60,59,59,63,59,61,61,65,65,65,61,62,62,66,66,66
	,62,60,64,64,62,62,74,70,70,69,69,73,69,67,67,71
	,71,71,67,68,68,72,72,72,68,70,74,74,68,68,156,155
	,155,128,128,75,75,75,130,155,155,157,157,78,78,78,80,133
	,133,146,146,132,132,132,131,145,145,146,133,133,76,132,146,150
	,150,150,131,134,134,144,144,145,145,145,129,143,143,144,134,134
	,127,131,131,133,80,77,77,77,81,79,79,129,129,125,125,125
	,79,82,82,147,147,143,143,143,79,130,130,78,81,126,126,126
	,158,156,156,175,175,88,88,88,75,87,87,171,171,175,156,156
	,84,160,160,172,172,159,159,159,91,176,176,172,160,160,87,159
	,172,171,171,171,83,88,175,176,91,91,86,162,162,177,177,161
	,161,161,92,173,173,177,162,162,89,161,177,178,178,178,85,90
	,90,174,174,173,92,92,80,174,90,90,76,89,89,178,178,174
	,80,132,130,94,94,93,93,155,155,155,126,95,95,94,130,130
	,128,96,96,95,93,96,128,128,94,98,98,97,97,93,93,93
	,95,99,99,98,94,94,96,100,100,99,95,95,97,100,96,96
	,98,102,102,101,101,97,97,97,99,103,103,102,98,98,100,104
	,104,103,99,99,101,104,100,100,131,110,110,109,109,129,129,134
	,127,111,111,110,131,131,125,112,112,111,127,127,109,112,110,114
	,114,113,113,109,109,109,111,115,115,114,110,110,112,116,116,115
	,111,111,113,116,112,112,114,118,118,117,117,113,113,113,115,119
	,119,118,114,114,116,120,120,119,115,115,117,120,116,116,102,107
	,107,123,123,117,118,124,124,108,108,108,101,108,119,122,122,106
	,106,106,103,105,105,121,121,120,107,107,104,106,105,105,143,135
	,135,136,136,144,144,144,136,137,137,145,137,138,138,146,146,146
	,138,142,142,150,142,141,141,149,149,149,141,140,140,148,148,148
	,140,139,139,147,147,147,139,135,137,137,141,137,136,140,140,140
	,135,135,155,151,151,153,153,157,157,157,153,154,154,158,158,158
	,154,152,152,156,152,151,154,154,176,166,166,164,164,172,172,172
	,164,163,163,171,163,165,165,175,175,175,165,166,176,176,166,166
	,173,167,167,169,169,177,177,177,169,170,170,178,170,168,168,174
	,174,174,168,167,173,173,167,167,235,236,236,187,187,182,182,182
	,236,185,185,183,183,238,238,238,236,196,196,263,263,265,265,265
	,199,274,274,186,186,180,180,237,237,237,274,273,273,184,184,184
	,188,255,255,273,273,271,271,271,255,257,257,189,189,184,257,258
	,258,239,239,239,187,238,238,258,258,256,256,256,183,239,187,256
	,256,255,188,182,196,240,240,264,264,263,263,263,194,241,241,264
	,240,240,198,266,266,264,241,241,179,197,197,194,194,240,196,196
	,191,201,201,194,197,197,190,198,198,241,201,201,193,202,202,195
	,195,247,247,249,249,249,192,200,200,195,202,202,181,199,199,242
	,242,195,200,200,180,250,250,248,248,237,242,248,248,247,247,247
	,199,237,242,242,235,204,204,203,203,236,236,236,179,205,205,204
	,235,235,196,206,206,205,179,179,203,206,204,208,208,207,207,203
	,203,203,205,209,209,208,204,204,206,210,210,209,205,205,207,210
	,206,206,208,212,212,211,211,207,207,207,209,213,213,212,208,208
	,210,214,214,213,209,209,211,214,210,210,274,220,220,219,219,272
	,272,272,199,221,221,220,274,274,181,222,222,221,199,199,219,222
	,181,181,220,224,224,223,223,219,219,219,221,225,225,224,220,220
	,222,226,226,225,221,221,223,226,222,222,224,228,228,227,227,223
	,223,223,225,229,229,228,224,224,226,230,230,229,225,225,227,230
	,226,226,248,244,244,243,243,247,243,245,245,249,245,246,246,250
	,250,250,246,244,248,248,246,246,257,253,253,254,254,258,258,258
	,254,252,252,256,252,251,251,255,255,255,251,253,257,257,253,253
	,266,262,262,260,260,264,264,264,260,259,259,263,259,261,261,265
	,261,262,266,266,262,262,272,268,268,270,270,274,270,269,269,273
	,273,273,269,267,267,271,267,268,267,267,211,217,217,233,233,228
	,229,234,234,218,218,218,214,218,230,232,232,216,216,216,213,216
	,227,231,231,215,215,215,212,215,217,217,275,283,283,343,343,344
	,344,344,278,301,301,287,287,343,283,283,279,345,345,343,287,287
	,276,285,285,282,282,284,284,284,280,290,290,282,285,285,281,286
	,286,282,290,290,277,284,286,286,281,290,290,313,313,311,311,288
	,288,288,280,289,289,313,279,287,287,314,314,313,289,289,278,302
	,302,312,312,301,301,301,311,312,302,302,312,314,314,314,295,303
	,303,320,320,319,319,319,294,304,304,320,303,303,297,322,322,320
	,304,304,275,296,296,294,294,303,295,295,292,300,300,294,296,296
	,291,297,297,304,300,300,293,299,299,306,306,336,336,335,335,335
	,298,305,305,329,329,330,330,330,306,329,305,305,299,327,327,329
	,306,306,276,338,338,336,336,305,298,298,311,307,307,308,308,312
	,312,312,308,310,310,314,310,309,309,313,313,313,309,307,311,311
	,307,307,322,318,318,316,316,320,320,320,316,315,315,319,315,317
	,317,321,321,321,317,318,322,322,318,318,327,323,323,325,325,329
	,329,329,325,326,326,330,326,324,324,328,328,328,324,323,327,327
	,323,323,336,332,332,331,331,335,331,333,333,337,337,337,333,334
	,334,338,338,338,334,332,336,336,334,334,345,341,341,339,339,343
	,343,343,339,340,340,344,340,342,342,346,346,346,342,341,345,345
	,341,341,347,370,370,376,376,377,377,377,349,378,378,376,376,371
	,371,371,350,356,356,361,361,363,363,363,351,353,353,361,356,356
	,348,362,362,361,353,353,351,356,356,352,352,354,354,354,350,355
	,355,352,349,371,371,352,355,355,369,354,361,357,357,359,359,363
	,359,360,360,364,364,364,360,358,358,362,362,362,358,357,361,361
	,358,358,376,368,368,367,367,371,367,365,365,369,369,369,365,366
	,366,370,370,370,366,368,376,376,366,366,378,374,374,372,372,376
	,372,373,373,377,373,375,375,379,379,379,375,374,378,378,374,374
	,382,390,390,377,377,379,390,388,388,347,347,347,391,390,382,380
	,380,380,396,397,397,383,383,381,381,381,397,362,348,348,397,399
	,399,364,390,386,386,384,384,388,388,388,391,387,387,386,390,390
	,389,385,385,387,391,391,384,385,389,389,385,385,396,392,392,393
	,393,397,397,397,398,394,394,392,396,396,399,395,395,394,398,398
	,393,395,399,399,394,394};

#endif
