Lights1 piplup_Yellow_lights = gdSPDefLights1(
	0x7F, 0x78, 0x2A,
	0xFE, 0xF1, 0x54, 0x28, 0x28, 0x28);

Lights1 piplup_Light_Blue_lights = gdSPDefLights1(
	0x4A, 0x70, 0x7F,
	0x94, 0xE0, 0xFE, 0x28, 0x28, 0x28);

Lights1 piplup_White_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 piplup_Dark_Blue_lights = gdSPDefLights1(
	0x25, 0x43, 0x7F,
	0x4A, 0x86, 0xFE, 0x28, 0x28, 0x28);

Lights1 piplup_Eye_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx piplup_Eye_ci8_aligner[] = {gsSPEndDisplayList()};
u8 piplup_Eye_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x02, 0x03, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x02, 
	0x06, 0x08, 0x09, 0x0a, 0x0b, 0x07, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x02, 0x06, 
	0x08, 0x0c, 0x0d, 0x0e, 0x09, 0x04, 0x07, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x07, 0x02, 0x02, 0x0f, 
	0x10, 0x11, 0x12, 0x11, 0x13, 0x01, 0x06, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x05, 0x02, 0x02, 0x03, 0x14, 
	0x15, 0x12, 0x16, 0x11, 0x17, 0x01, 0x18, 0x07, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0b, 0x02, 0x02, 0x02, 0x0f, 0x19, 
	0x12, 0x16, 0x16, 0x1a, 0x1b, 0x04, 0x02, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x06, 0x02, 0x02, 0x1c, 0x1d, 0x0d, 
	0x16, 0x16, 0x16, 0x1e, 0x1d, 0x1c, 0x02, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1f, 0x02, 0x02, 0x02, 0x20, 0x1b, 0x21, 
	0x16, 0x16, 0x22, 0x23, 0x24, 0x06, 0x02, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x06, 0x02, 0x02, 0x02, 0x04, 0x25, 0x22, 
	0x16, 0x16, 0x0d, 0x09, 0x07, 0x02, 0x02, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1f, 0x02, 0x02, 0x26, 0x02, 0x04, 0x27, 0x22, 
	0x16, 0x1a, 0x25, 0x28, 0x02, 0x02, 0x02, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x06, 0x29, 0x2a, 0x2b, 0x26, 0x07, 0x09, 0x1e, 
	0x0d, 0x2c, 0x2d, 0x2e, 0x26, 0x26, 0x26, 0x26, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x2a, 0x2f, 0x30, 0x2f, 0x29, 0x06, 0x31, 0x09, 
	0x09, 0x0b, 0x32, 0x29, 0x2a, 0x2a, 0x29, 0x32, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 
	0x34, 0x30, 0x35, 0x2f, 0x26, 0x18, 0x18, 0x07, 
	0x1c, 0x26, 0x26, 0x2a, 0x30, 0x30, 0x34, 0x36, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 
	0x30, 0x38, 0x35, 0x2f, 0x26, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x26, 0x2f, 0x38, 0x38, 0x2f, 0x39, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 
	0x30, 0x38, 0x35, 0x30, 0x29, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x2a, 0x30, 0x38, 0x30, 0x30, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 
	0x30, 0x38, 0x35, 0x38, 0x2b, 0x02, 0x02, 0x02, 
	0x02, 0x2a, 0x30, 0x35, 0x38, 0x30, 0x3b, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 
	0x30, 0x38, 0x38, 0x38, 0x30, 0x2a, 0x2a, 0x2a, 
	0x34, 0x38, 0x3c, 0x3c, 0x38, 0x30, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 
	0x30, 0x38, 0x38, 0x38, 0x38, 0x30, 0x30, 0x38, 
	0x35, 0x35, 0x35, 0x35, 0x30, 0x3b, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 
	0x30, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 
	0x38, 0x38, 0x38, 0x30, 0x3d, 0x3e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 
	0x38, 0x35, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 
	0x38, 0x38, 0x38, 0x30, 0x3f, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 
	0x40, 0x3c, 0x35, 0x38, 0x38, 0x38, 0x38, 0x38, 
	0x38, 0x38, 0x38, 0x30, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 
	0x42, 0x43, 0x35, 0x35, 0x35, 0x38, 0x38, 0x38, 
	0x38, 0x38, 0x30, 0x41, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 
	0x45, 0x46, 0x42, 0x3c, 0x35, 0x38, 0x38, 0x47, 
	0x40, 0x3b, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x3b, 0x48, 0x48, 0x48, 0x42, 0x35, 0x35, 0x40, 
	0x40, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x49, 0x4a, 0x4b, 0x4c, 0x4c, 0x4c, 0x4c, 0x41, 
	0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x36, 0x2a, 0x4d, 0x3f, 0x3f, 0x3f, 0x49, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x33, 0x33, 0x4e, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx piplup_Eye_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 piplup_Eye_ci8_pal_rgba16[] = {
	0x00, 0x00, 0x21, 0x09, 0x00, 0x01, 0x08, 0x83, 
	0x18, 0xc7, 0x10, 0xc5, 0x08, 0x43, 0x10, 0x85, 
	0x42, 0x11, 0x73, 0x9d, 0x6b, 0x5b, 0x29, 0x4b, 
	0xa5, 0x29, 0xde, 0xf7, 0xce, 0xb3, 0x31, 0x8d, 
	0x9d, 0x27, 0xe7, 0x79, 0xf7, 0xbd, 0x8c, 0x63, 
	0x73, 0xdd, 0xdf, 0x37, 0xf7, 0xfd, 0x94, 0xa5, 
	0x08, 0x03, 0xbd, 0xef, 0xe7, 0x39, 0x84, 0x21, 
	0x10, 0x45, 0x63, 0x19, 0xd6, 0xf5, 0x19, 0x07, 
	0x18, 0x87, 0xef, 0x7b, 0xef, 0xbb, 0xb5, 0xad, 
	0x39, 0x8f, 0x94, 0xe5, 0x00, 0x03, 0x9c, 0xe7, 
	0x39, 0xcf, 0x00, 0x43, 0x00, 0x45, 0x00, 0x47, 
	0xa5, 0x69, 0x3a, 0x11, 0x08, 0x85, 0x00, 0x89, 
	0x00, 0xcb, 0x29, 0x0b, 0x08, 0x45, 0x19, 0x09, 
	0x00, 0x87, 0x01, 0x0d, 0x10, 0xc7, 0x10, 0xc9, 
	0x00, 0xcd, 0x21, 0x4f, 0x08, 0x89, 0x08, 0xcb, 
	0x01, 0x0f, 0x00, 0xc9, 0x19, 0x4d, 0x08, 0xc9, 
	0x09, 0x0d, 0x11, 0x0b, 0x09, 0x0f, 0x09, 0x4f, 
	0x19, 0x0d, 0x11, 0x0d, 0x11, 0x51, 0x08, 0xcd, 
	0x11, 0x4f, 0x19, 0x0b, 0x08, 0x87, 0x09, 0x0b, 
	0x11, 0x4d, 0x08, 0xc7, 0x21, 0x4d, 
};

Vtx piplup_Piplup_mesh_layer_1_vtx_0[20] = {
	{{{-16, 0, -14},0, {444, -424},{0x47, 0xA0, 0xD5, 0xFF}}},
	{{{-22, 0, -14},0, {49, -424},{0xB9, 0xA0, 0xD5, 0xFF}}},
	{{{-19, 0, -19},0, {246, -670},{0x0, 0xAC, 0xA0, 0xFF}}},
	{{{-19, 0, 18},0, {246, 1165},{0x0, 0xF5, 0x7F, 0xFF}}},
	{{{-13, 0, -9},0, {641, -178},{0x63, 0xB1, 0x5, 0xFF}}},
	{{{-19, 6, -5},0, {246, 22},{0xFD, 0x1C, 0x7C, 0xFF}}},
	{{{-25, 0, -9},0, {-148, -178},{0x9C, 0xB2, 0x5, 0xFF}}},
	{{{15, 0, -9},0, {641, -178},{0x9D, 0xB1, 0x5, 0xFF}}},
	{{{21, 0, -19},0, {246, -670},{0x0, 0xAC, 0xA0, 0xFF}}},
	{{{27, 0, -9},0, {-148, -178},{0x64, 0xB2, 0x5, 0xFF}}},
	{{{21, 0, 18},0, {246, 1165},{0x0, 0xF5, 0x7F, 0xFF}}},
	{{{21, 6, -5},0, {246, 22},{0x3, 0x1C, 0x7C, 0xFF}}},
	{{{1, 78, 28},0, {-16, 1008},{0x0, 0x8A, 0x2F, 0xFF}}},
	{{{1, 80, 34},0, {-16, 1008},{0x0, 0xCC, 0x74, 0xFF}}},
	{{{-8, 82, 28},0, {-16, 1008},{0xB6, 0xE9, 0x65, 0xFF}}},
	{{{10, 82, 28},0, {-16, 1008},{0x4A, 0xE9, 0x65, 0xFF}}},
	{{{1, 80, 34},0, {-16, 1008},{0x0, 0xCC, 0x74, 0xFF}}},
	{{{10, 82, 28},0, {-16, 1008},{0x4A, 0xE9, 0x65, 0xFF}}},
	{{{1, 94, 30},0, {-16, 1008},{0x0, 0x22, 0x7A, 0xFF}}},
	{{{-8, 82, 28},0, {-16, 1008},{0xB6, 0xE9, 0x65, 0xFF}}},
};

Gfx piplup_Piplup_mesh_layer_1_tri_0[] = {
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(3, 6, 1, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(7, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_0 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx piplup_Piplup_mesh_layer_1_vtx_1[93] = {
	{{{-19, 10, -3},0, {-16, 1008},{0xDC, 0xBA, 0x64, 0xFF}}},
	{{{-32, 24, -8},0, {-16, 1008},{0xB7, 0xDC, 0x62, 0xFF}}},
	{{{-27, 14, -8},0, {-148, -351},{0x8A, 0xDA, 0x1D, 0xFF}}},
	{{{-13, 0, -9},0, {641, 112},{0x63, 0xB1, 0x5, 0xFF}}},
	{{{-11, 11, -8},0, {641, -351},{0x23, 0x86, 0x1, 0xFF}}},
	{{{-19, 6, -5},0, {246, -192},{0xFD, 0x1C, 0x7C, 0xFF}}},
	{{{-19, 10, -3},0, {246, -406},{0xDC, 0xBA, 0x64, 0xFF}}},
	{{{-25, 0, -9},0, {-148, 112},{0x9C, 0xB2, 0x5, 0xFF}}},
	{{{15, 0, -9},0, {641, 112},{0x9D, 0xB1, 0x5, 0xFF}}},
	{{{21, 6, -5},0, {246, -192},{0x3, 0x1C, 0x7C, 0xFF}}},
	{{{13, 11, -8},0, {641, -351},{0xBC, 0x99, 0x1E, 0xFF}}},
	{{{21, 10, -3},0, {246, -406},{0xD, 0xCC, 0x73, 0xFF}}},
	{{{29, 14, -8},0, {-148, -351},{0x79, 0xE7, 0x1E, 0xFF}}},
	{{{27, 0, -9},0, {-148, 112},{0x64, 0xB2, 0x5, 0xFF}}},
	{{{27, 0, -9},0, {307, 112},{0x64, 0xB2, 0x5, 0xFF}}},
	{{{21, 10, -22},0, {939, -380},{0x26, 0xA9, 0xAB, 0xFF}}},
	{{{29, 14, -8},0, {245, -351},{0x79, 0xE7, 0x1E, 0xFF}}},
	{{{21, 0, -19},0, {799, 112},{0x0, 0xAC, 0xA0, 0xFF}}},
	{{{15, 0, -9},0, {307, 112},{0x9D, 0xB1, 0x5, 0xFF}}},
	{{{13, 11, -8},0, {245, -351},{0xBC, 0x99, 0x1E, 0xFF}}},
	{{{1, 10, -8},0, {-16, 1008},{0x0, 0x81, 0xA, 0xFF}}},
	{{{1, 9, -22},0, {-16, 1008},{0x0, 0x93, 0xBF, 0xFF}}},
	{{{-19, 10, -22},0, {939, -380},{0xD3, 0xBF, 0x9C, 0xFF}}},
	{{{-11, 11, -8},0, {245, -351},{0x23, 0x86, 0x1, 0xFF}}},
	{{{-19, 10, -3},0, {246, -406},{0xDC, 0xBA, 0x64, 0xFF}}},
	{{{1, 12, 5},0, {-16, 1008},{0xF7, 0x98, 0x48, 0xFF}}},
	{{{-32, 24, -8},0, {-16, 1008},{0x88, 0xD7, 0xA, 0xFF}}},
	{{{1, 23, 16},0, {-16, 1008},{0xFE, 0xD1, 0x76, 0xFF}}},
	{{{21, 10, -3},0, {246, -406},{0x3A, 0xB4, 0x54, 0xFF}}},
	{{{1, 10, -8},0, {-16, 1008},{0x1, 0x81, 0x8, 0xFF}}},
	{{{21, 10, -3},0, {246, -406},{0x3A, 0xB4, 0x54, 0xFF}}},
	{{{1, 10, -8},0, {-16, 1008},{0x1, 0x81, 0x8, 0xFF}}},
	{{{13, 11, -8},0, {245, -351},{0xB, 0x86, 0xDD, 0xFF}}},
	{{{-36, 41, -8},0, {-16, 1008},{0x82, 0xC, 0x2, 0xFF}}},
	{{{-32, 24, -8},0, {-16, 1008},{0x88, 0xD7, 0xA, 0xFF}}},
	{{{1, 23, 16},0, {-16, 1008},{0xFE, 0xD1, 0x76, 0xFF}}},
	{{{-19, 22, -25},0, {-16, 1008},{0xB8, 0xE6, 0x9B, 0xFF}}},
	{{{-19, 10, -22},0, {939, -380},{0xD3, 0xBF, 0x9C, 0xFF}}},
	{{{1, 21, -29},0, {-16, 1008},{0x0, 0xB1, 0x9C, 0xFF}}},
	{{{1, 9, -22},0, {-16, 1008},{0x0, 0x93, 0xBF, 0xFF}}},
	{{{21, 22, -25},0, {-16, 1008},{0x45, 0xD3, 0x9F, 0xFF}}},
	{{{21, 10, -22},0, {-16, 1008},{0x26, 0xA9, 0xAB, 0xFF}}},
	{{{29, 14, -8},0, {-148, -351},{0x5B, 0xB3, 0x2C, 0xFF}}},
	{{{33, 24, -8},0, {-16, 1008},{0x6F, 0xC9, 0x1C, 0xFF}}},
	{{{37, 41, -8},0, {-16, 1008},{0x7E, 0xC, 0x2, 0xFF}}},
	{{{1, 31, 20},0, {-16, 1008},{0x0, 0xF3, 0x7E, 0xFF}}},
	{{{37, 41, -8},0, {-16, 1008},{0x7E, 0xC, 0x2, 0xFF}}},
	{{{1, 56, 19},0, {-16, 1008},{0x4C, 0x5, 0x66, 0xFF}}},
	{{{1, 31, 20},0, {-16, 1008},{0x0, 0xF3, 0x7E, 0xFF}}},
	{{{28, 64, -2},0, {-16, 1008},{0x5C, 0x56, 0x12, 0xFF}}},
	{{{-36, 41, -8},0, {-16, 1008},{0x82, 0xC, 0x2, 0xFF}}},
	{{{1, 23, 16},0, {-16, 1008},{0xFE, 0xD1, 0x76, 0xFF}}},
	{{{-26, 64, -2},0, {-16, 1008},{0xA4, 0x56, 0x12, 0xFF}}},
	{{{1, 56, 19},0, {-16, 1008},{0xD3, 0x41, 0x63, 0xFF}}},
	{{{29, 14, -8},0, {-148, -351},{0x5B, 0xB3, 0x2C, 0xFF}}},
	{{{1, 10, -8},0, {-16, 1008},{0x4F, 0xA1, 0xE5, 0xFF}}},
	{{{21, 10, -22},0, {-16, 1008},{0x26, 0xA9, 0xAB, 0xFF}}},
	{{{-19, 10, -22},0, {939, -380},{0xD3, 0xBF, 0x9C, 0xFF}}},
	{{{-11, 11, -8},0, {245, -351},{0x23, 0x86, 0x1, 0xFF}}},
	{{{-13, 0, -9},0, {307, 112},{0x63, 0xB1, 0x5, 0xFF}}},
	{{{-19, 5, -21},0, {869, -134},{0x0, 0xDD, 0x86, 0xFF}}},
	{{{-16, 0, -14},0, {553, 112},{0x47, 0xA0, 0xD5, 0xFF}}},
	{{{-19, 0, -19},0, {799, 112},{0x0, 0xAC, 0xA0, 0xFF}}},
	{{{-19, 5, -21},0, {869, -134},{0x0, 0xDD, 0x86, 0xFF}}},
	{{{-16, 0, -14},0, {553, 112},{0x47, 0xA0, 0xD5, 0xFF}}},
	{{{-22, 0, -14},0, {553, 112},{0xB9, 0xA0, 0xD5, 0xFF}}},
	{{{-19, 10, -22},0, {939, -380},{0xD3, 0xBF, 0x9C, 0xFF}}},
	{{{-25, 0, -9},0, {307, 112},{0x9C, 0xB2, 0x5, 0xFF}}},
	{{{-27, 14, -8},0, {245, -351},{0x8A, 0xDA, 0x1D, 0xFF}}},
	{{{-32, 24, -8},0, {-16, 1008},{0x88, 0xD7, 0xA, 0xFF}}},
	{{{21, 10, -3},0, {-16, 1008},{0x3A, 0xB4, 0x54, 0xFF}}},
	{{{29, 14, -8},0, {-148, -351},{0x5B, 0xB3, 0x2C, 0xFF}}},
	{{{33, 24, -8},0, {-16, 1008},{0x6F, 0xC9, 0x1C, 0xFF}}},
	{{{1, 23, 16},0, {-16, 1008},{0xFE, 0xD1, 0x76, 0xFF}}},
	{{{-4, 85, 23},0, {-16, 1008},{0xA9, 0xF7, 0x5C, 0xFF}}},
	{{{1, 86, 32},0, {-16, 1008},{0x0, 0xF2, 0x7E, 0xFF}}},
	{{{1, 106, 28},0, {-16, 1008},{0x0, 0x30, 0x76, 0xFF}}},
	{{{6, 85, 23},0, {-16, 1008},{0x57, 0xF7, 0x5C, 0xFF}}},
	{{{6, 85, 23},0, {-16, 1008},{0x57, 0xF7, 0x5C, 0xFF}}},
	{{{8, 109, 20},0, {-16, 1008},{0x45, 0x37, 0x5C, 0xFF}}},
	{{{1, 106, 28},0, {-16, 1008},{0x0, 0x30, 0x76, 0xFF}}},
	{{{1, 110, 24},0, {-16, 1008},{0x0, 0x60, 0x53, 0xFF}}},
	{{{1, 113, 20},0, {-16, 1008},{0x0, 0x60, 0x53, 0xFF}}},
	{{{-6, 109, 20},0, {-16, 1008},{0xBB, 0x37, 0x5C, 0xFF}}},
	{{{-4, 85, 23},0, {-16, 1008},{0xA9, 0xF7, 0x5C, 0xFF}}},
	{{{-19, 52, -12},0, {-16, 1008},{0x3A, 0xED, 0x91, 0xFF}}},
	{{{-18, 50, 2},0, {-16, 1008},{0xA1, 0xBB, 0x32, 0xFF}}},
	{{{-61, 39, -5},0, {-16, 1008},{0xC2, 0xD1, 0x9B, 0xFF}}},
	{{{-19, 60, -5},0, {-16, 1008},{0x2B, 0xF9, 0x89, 0xFF}}},
	{{{23, 52, -12},0, {-16, 1008},{0x8C, 0x31, 0xF, 0xFF}}},
	{{{65, 39, -5},0, {-16, 1008},{0x5C, 0xBF, 0x3B, 0xFF}}},
	{{{21, 50, 3},0, {-16, 1008},{0x3C, 0x11, 0x6F, 0xFF}}},
	{{{23, 60, -4},0, {-16, 1008},{0x8, 0x7F, 0x4, 0xFF}}},
};

Gfx piplup_Piplup_mesh_layer_1_tri_1[] = {
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_1 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(2, 5, 6, 0),
	gsSP1Triangle(5, 2, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 11, 9, 0),
	gsSP1Triangle(9, 13, 12, 0),
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_1 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(1, 4, 5, 0),
	gsSP1Triangle(1, 5, 6, 0),
	gsSP1Triangle(1, 6, 7, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 6, 9, 0),
	gsSP1Triangle(10, 9, 6, 0),
	gsSP1Triangle(6, 11, 10, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(14, 13, 11, 0),
	gsSP1Triangle(14, 11, 15, 0),
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_1 + 30, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 6, 4, 0),
	gsSP1Triangle(7, 4, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSP1Triangle(14, 5, 13, 0),
	gsSP1Triangle(14, 15, 5, 0),
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_1 + 46, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(6, 4, 2, 0),
	gsSP1Triangle(6, 2, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_1 + 62, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_1 + 78, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(2, 3, 5, 0),
	gsSP1Triangle(6, 2, 5, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(8, 7, 10, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 11, 14, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSPEndDisplayList(),
};

Vtx piplup_Piplup_mesh_layer_1_vtx_2[20] = {
	{{{6, 85, 23},0, {-16, 1008},{0x57, 0xF7, 0x5C, 0xFF}}},
	{{{1, 86, 32},0, {-16, 1008},{0x0, 0xF2, 0x7E, 0xFF}}},
	{{{1, 71, 25},0, {-16, 1008},{0x0, 0xB3, 0x65, 0xFF}}},
	{{{-4, 85, 23},0, {-16, 1008},{0xA9, 0xF7, 0x5C, 0xFF}}},
	{{{-38, 92, -2},0, {-16, 1008},{0x81, 0x0, 0x1, 0xFF}}},
	{{{-19, 89, 15},0, {-16, 1008},{0xAF, 0xFD, 0x62, 0xFF}}},
	{{{-6, 109, 20},0, {-16, 1008},{0xBB, 0x37, 0x5C, 0xFF}}},
	{{{-13, 112, 13},0, {-16, 1008},{0xB3, 0x17, 0x63, 0xFF}}},
	{{{-28, 117, -2},0, {-16, 1008},{0xA0, 0x54, 0x1, 0xFF}}},
	{{{-29, 71, -2},0, {-16, 1008},{0xA0, 0xAD, 0x0, 0xFF}}},
	{{{1, 62, 4},0, {-16, 1008},{0x0, 0x82, 0xC, 0xFF}}},
	{{{31, 71, -2},0, {-16, 1008},{0x60, 0xAD, 0x0, 0xFF}}},
	{{{39, 92, -2},0, {-16, 1008},{0x7F, 0x0, 0x1, 0xFF}}},
	{{{20, 89, 15},0, {-16, 1008},{0x51, 0xFD, 0x62, 0xFF}}},
	{{{15, 112, 13},0, {-16, 1008},{0x4D, 0x17, 0x63, 0xFF}}},
	{{{29, 117, -2},0, {-16, 1008},{0x60, 0x54, 0x1, 0xFF}}},
	{{{20, 89, 15},0, {-16, 1008},{0x51, 0xFD, 0x62, 0xFF}}},
	{{{15, 112, 13},0, {-16, 1008},{0x4D, 0x17, 0x63, 0xFF}}},
	{{{8, 109, 20},0, {-16, 1008},{0x45, 0x37, 0x5C, 0xFF}}},
	{{{6, 85, 23},0, {-16, 1008},{0x57, 0xF7, 0x5C, 0xFF}}},
};

Gfx piplup_Piplup_mesh_layer_1_tri_2[] = {
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 3, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(4, 5, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(4, 9, 2, 0),
	gsSP1Triangle(9, 10, 2, 0),
	gsSP1Triangle(11, 2, 10, 0),
	gsSP1Triangle(2, 11, 12, 0),
	gsSP1Triangle(12, 0, 2, 0),
	gsSP1Triangle(12, 13, 0, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_2 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx piplup_Piplup_mesh_layer_1_vtx_3[28] = {
	{{{39, 92, -2},0, {-16, 1008},{0x7F, 0x0, 0x1, 0xFF}}},
	{{{31, 71, -2},0, {-16, 1008},{0x60, 0xAD, 0x0, 0xFF}}},
	{{{1, 71, -29},0, {-16, 1008},{0x0, 0xAB, 0xA1, 0xFF}}},
	{{{1, 62, 4},0, {-16, 1008},{0x0, 0x82, 0xC, 0xFF}}},
	{{{-29, 71, -2},0, {-16, 1008},{0xA0, 0xAD, 0x0, 0xFF}}},
	{{{-38, 92, -2},0, {-16, 1008},{0x81, 0x0, 0x1, 0xFF}}},
	{{{1, 90, -37},0, {-16, 1008},{0x0, 0xFD, 0x81, 0xFF}}},
	{{{-28, 117, -2},0, {-16, 1008},{0xA0, 0x54, 0x1, 0xFF}}},
	{{{1, 105, -32},0, {-16, 1008},{0x0, 0x3D, 0x90, 0xFF}}},
	{{{1, 118, -17},0, {-16, 1008},{0x0, 0x67, 0xB5, 0xFF}}},
	{{{1, 126, -2},0, {-16, 1008},{0x0, 0x7F, 0xFF, 0xFF}}},
	{{{1, 119, 13},0, {-16, 1008},{0x0, 0x68, 0x48, 0xFF}}},
	{{{-6, 109, 20},0, {-16, 1008},{0xBB, 0x37, 0x5C, 0xFF}}},
	{{{1, 113, 20},0, {-16, 1008},{0x0, 0x60, 0x53, 0xFF}}},
	{{{8, 109, 20},0, {-16, 1008},{0x45, 0x37, 0x5C, 0xFF}}},
	{{{29, 117, -2},0, {-16, 1008},{0x60, 0x54, 0x1, 0xFF}}},
	{{{28, 64, -2},0, {-16, 1008},{0x5C, 0x56, 0x12, 0xFF}}},
	{{{37, 41, -8},0, {-16, 1008},{0x7E, 0xC, 0x2, 0xFF}}},
	{{{1, 46, -38},0, {-16, 1008},{0x0, 0x32, 0x8B, 0xFF}}},
	{{{21, 22, -25},0, {-16, 1008},{0x45, 0xD3, 0x9F, 0xFF}}},
	{{{1, 28, -39},0, {-16, 1008},{0x0, 0xD9, 0x87, 0xFF}}},
	{{{1, 21, -29},0, {-16, 1008},{0x0, 0xB1, 0x9C, 0xFF}}},
	{{{-19, 22, -25},0, {-16, 1008},{0xB8, 0xE6, 0x9B, 0xFF}}},
	{{{-36, 41, -8},0, {-16, 1008},{0x82, 0xC, 0x2, 0xFF}}},
	{{{-26, 64, -2},0, {-16, 1008},{0xA4, 0x56, 0x12, 0xFF}}},
	{{{1, 57, -25},0, {-16, 1008},{0x0, 0x60, 0xAD, 0xFF}}},
	{{{1, 71, -7},0, {-16, 1008},{0x0, 0x7E, 0xF3, 0xFF}}},
	{{{1, 56, 19},0, {-16, 1008},{0xD3, 0x41, 0x63, 0xFF}}},
};

Gfx piplup_Piplup_mesh_layer_1_tri_3[] = {
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_3 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(5, 2, 4, 0),
	gsSP1Triangle(5, 6, 2, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(10, 9, 7, 0),
	gsSP1Triangle(7, 11, 10, 0),
	gsSP1Triangle(11, 7, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSP1Triangle(14, 15, 11, 0),
	gsSP1Triangle(15, 10, 11, 0),
	gsSP1Triangle(15, 9, 10, 0),
	gsSP1Triangle(8, 9, 15, 0),
	gsSP1Triangle(15, 6, 8, 0),
	gsSP1Triangle(15, 0, 6, 0),
	gsSP1Triangle(0, 2, 6, 0),
	gsSPVertex(piplup_Piplup_mesh_layer_1_vtx_3 + 16, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 2, 4, 0),
	gsSP1Triangle(2, 6, 7, 0),
	gsSP1Triangle(8, 2, 7, 0),
	gsSP1Triangle(8, 9, 2, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(8, 11, 10, 0),
	gsSP1Triangle(10, 11, 0, 0),
	gsSP1Triangle(0, 9, 10, 0),
	gsSP1Triangle(9, 0, 2, 0),
	gsSPEndDisplayList(),
};

Vtx piplup_Piplup_mesh_layer_4_vtx_0[13] = {
	{{{-19, 106, 20},0, {670, 0},{0xB6, 0xEC, 0x66, 0xFF}}},
	{{{-25, 106, 14},0, {997, 86},{0xA9, 0xEB, 0x5A, 0xFF}}},
	{{{-22, 86, 12},0, {575, 1094},{0xA9, 0xEB, 0x5A, 0xFF}}},
	{{{-17, 86, 17},0, {298, 1021},{0xB6, 0xEC, 0x66, 0xFF}}},
	{{{-12, 106, 23},0, {343, -86},{0xC5, 0xEE, 0x6F, 0xFF}}},
	{{{-11, 86, 20},0, {21, 948},{0xC5, 0xEE, 0x6F, 0xFF}}},
	{{{18, 86, 17},0, {298, 1021},{0x4A, 0xEC, 0x66, 0xFF}}},
	{{{24, 86, 12},0, {575, 1094},{0x57, 0xEB, 0x5A, 0xFF}}},
	{{{25, 96, 13},0, {786, 590},{0x57, 0xEB, 0x5A, 0xFF}}},
	{{{27, 106, 14},0, {997, 86},{0x57, 0xEB, 0x5A, 0xFF}}},
	{{{20, 106, 20},0, {670, 0},{0x4A, 0xEC, 0x66, 0xFF}}},
	{{{14, 106, 23},0, {343, -86},{0x3B, 0xEE, 0x6F, 0xFF}}},
	{{{13, 86, 20},0, {21, 948},{0x3B, 0xEE, 0x6F, 0xFF}}},
};

Gfx piplup_Piplup_mesh_layer_4_tri_0[] = {
	gsSPVertex(piplup_Piplup_mesh_layer_4_vtx_0 + 0, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(9, 10, 6, 0),
	gsSP1Triangle(11, 6, 10, 0),
	gsSP1Triangle(11, 12, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_piplup_Yellow[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(piplup_Yellow_lights),
	gsSPEndDisplayList(),
};

Gfx mat_piplup_Light_Blue[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(piplup_Light_Blue_lights),
	gsSPEndDisplayList(),
};

Gfx mat_piplup_White[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(piplup_White_lights),
	gsSPEndDisplayList(),
};

Gfx mat_piplup_Dark_Blue[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(piplup_Dark_Blue_lights),
	gsSPEndDisplayList(),
};

Gfx mat_piplup_Eye[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, piplup_Eye_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 78),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, piplup_Eye_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(piplup_Eye_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_piplup_Eye[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx piplup_Piplup_mesh_layer_1[] = {
	gsSPDisplayList(mat_piplup_Yellow),
	gsSPDisplayList(piplup_Piplup_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_piplup_Light_Blue),
	gsSPDisplayList(piplup_Piplup_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_piplup_White),
	gsSPDisplayList(piplup_Piplup_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_piplup_Dark_Blue),
	gsSPDisplayList(piplup_Piplup_mesh_layer_1_tri_3),
	gsSPEndDisplayList(),
};

Gfx piplup_Piplup_mesh_layer_4[] = {
	gsSPDisplayList(mat_piplup_Eye),
	gsSPDisplayList(piplup_Piplup_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_piplup_Eye),
	gsSPEndDisplayList(),
};

Gfx piplup_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

