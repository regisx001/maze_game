////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
// ImageAsCode exporter v1.0 - Image pixel data exported as an array of bytes         //
//                                                                                    //
// more info and bugs-report:  github.com/raysan5/raylib                              //
// feedback and support:       ray[at]raylib.com                                      //
//                                                                                    //
// Copyright (c) 2018-2024 Ramon Santamaria (@raysan5)                                //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

// Image data information
#define LEFT_WALL_WIDTH    16
#define LEFT_WALL_HEIGHT   16
#define LEFT_WALL_FORMAT   7          // raylib internal pixel format

static unsigned char LEFT_WALL_DATA[1024] = { 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50,
0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x50, 0x24, 0x28, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x6c,
0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0xa9, 0x55, 0x3f, 0xff, 0xa9, 0x55, 0x3f, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x51,
0x24, 0x28, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50,
0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x50, 0x24, 0x28, 0xff, 0x6c,
0x30, 0x2d, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0xa9, 0x55, 0x3f, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x51, 0x24, 0x28, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x51, 0x24, 0x28, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62,
0x29, 0x2b, 0xff, 0x50, 0x24, 0x28, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x79, 0x36, 0x31, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x50,
0x24, 0x28, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0xa9, 0x55, 0x3f, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62,
0x29, 0x2b, 0xff, 0x50, 0x24, 0x28, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0xa9, 0x55, 0x3f, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50,
0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x63, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x50,
0x24, 0x28, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x51, 0x24, 0x28, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x51, 0x24, 0x28, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62,
0x29, 0x2b, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0xa9, 0x55, 0x3f, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x51, 0x24, 0x28, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62,
0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x50, 0x24, 0x28, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x79,
0x36, 0x31, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x50, 0x24, 0x28, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x79, 0x36, 0x31, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82,
0x3d, 0x33, 0xff, 0xa9, 0x55, 0x3f, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62,
0x29, 0x2b, 0xff, 0x50, 0x24, 0x28, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0xa9, 0x55, 0x3f, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50, 0x24, 0x28, 0xff, 0x50,
0x24, 0x28, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x50, 0x24, 0x28, 0xff, 0x6c, 0x30, 0x2d, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82,
0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x82, 0x3d, 0x33, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e,
0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x63,
0x29, 0x2b, 0xff, 0x63, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x62, 0x29, 0x2b, 0xff, 0x3e, 0x21, 0x26, 0xff, 0x51,
0x24, 0x28, 0xff };