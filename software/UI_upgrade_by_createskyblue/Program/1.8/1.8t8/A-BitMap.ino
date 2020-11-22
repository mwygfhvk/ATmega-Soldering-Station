
//关于界面-项目页面二维码
const unsigned char QRCode[] PROGMEM = { 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0x00,0x1f,0x0c,0x78,0x70,0x00,0x1f,0xf0,0x00,0x1f,0x0c,0x78,0x70,0x00,0x1f,0xf3,0xff,0x9f,0xc3,0x98,0x73,0xff,0x9f,0xf3,0xff,0x9f,0xc3,0x98,0x73,0xff,0x9f,0xf3,0x01,0x9c,0x03,0xe6,0x73,0x01,0x9f,0xf3,0x01,0x9c,0x03,0xe6,0x73,0x01,0x9f,0xf3,0x01,0x9c,0x03,0xe6,0x73,0x01,0x9f,0xf3,0x01,0x9f,0x0f,0xe0,0x73,0x01,0x9f,0xf3,0x01,0x9f,0x0f,0xe0,0x73,0x01,0x9f,0xf3,0x01,0x9f,0xc3,0xe0,0x73,0x01,0x9f,0xf3,0x01,0x9f,0xc3,0xe0,0x73,0x01,0x9f,0xf3,0xff,0x9f,0x30,0x60,0x73,0xff,0x9f,0xf3,0xff,0x9f,0x30,0x60,0x73,0xff,0x9f,0xf0,0x00,0x1c,0xcc,0x66,0x70,0x00,0x1f,0xf0,0x00,0x1c,0xcc,0x66,0x70,0x00,0x1f,0xff,0xff,0xfc,0x03,0x86,0x7f,0xff,0xff,0xff,0xff,0xfc,0x03,0x86,0x7f,0xff,0xff,0xff,0xff,0xfc,0x03,0x86,0x7f,0xff,0xff,0xf0,0x18,0x00,0xc3,0x98,0x03,0xf1,0xff,0xf0,0x18,0x00,0xc3,0x98,0x03,0xf1,0xff,0xf0,0xf9,0xe3,0xcc,0x7e,0x70,0xff,0x9f,0xf0,0xf9,0xe3,0xcc,0x7e,0x70,0xff,0x9f,0xff,0x00,0x1f,0x3c,0x07,0x83,0xf0,0x1f,0xff,0x00,0x1f,0x3c,0x07,0x83,0xf0,0x1f,0xfc,0x19,0xe3,0xfc,0x06,0x00,0xfe,0x7f,0xfc,0x19,0xe3,0xfc,0x06,0x00,0xfe,0x7f,0xf3,0x18,0x1c,0xfc,0x18,0x70,0xce,0x1f,0xf3,0x18,0x1c,0xfc,0x18,0x70,0xce,0x1f,0xf3,0x18,0x1c,0xfc,0x18,0x70,0xce,0x1f,0xfc,0xe6,0x7c,0xf0,0x07,0xf3,0xcf,0x9f,0xfc,0xe6,0x7c,0xf0,0x07,0xf3,0xcf,0x9f,0xf3,0xe0,0x1c,0xcf,0xe6,0x70,0x30,0x1f,0xf3,0xe0,0x1c,0xcf,0xe6,0x70,0x30,0x1f,0xfc,0x07,0xff,0xc3,0x86,0x7c,0xce,0x7f,0xfc,0x07,0xff,0xc3,0x86,0x7c,0xce,0x7f,0xf3,0x00,0x1c,0x0c,0x00,0x00,0x0f,0xff,0xf3,0x00,0x1c,0x0c,0x00,0x00,0x0f,0xff,0xff,0xff,0xfc,0x3c,0x78,0x7f,0x00,0x1f,0xff,0xff,0xfc,0x3c,0x78,0x7f,0x00,0x1f,0xff,0xff,0xfc,0x3c,0x78,0x7f,0x00,0x1f,0xf0,0x00,0x1c,0xcc,0x18,0x73,0x3e,0x1f,0xf0,0x00,0x1c,0xcc,0x18,0x73,0x3e,0x1f,0xf3,0xff,0x9c,0x03,0x86,0x7f,0x0f,0xff,0xf3,0xff,0x9c,0x03,0x86,0x7f,0x0f,0xff,0xf3,0x01,0x9c,0xf3,0x9e,0x00,0x3e,0x7f,0xf3,0x01,0x9c,0xf3,0x9e,0x00,0x3e,0x7f,0xf3,0x01,0x9f,0xff,0x86,0x0f,0x31,0xff,0xf3,0x01,0x9f,0xff,0x86,0x0f,0x31,0xff,0xf3,0x01,0x9c,0xfc,0x66,0x7c,0x0f,0x9f,0xf3,0x01,0x9c,0xfc,0x66,0x7c,0x0f,0x9f,0xf3,0x01,0x9c,0xfc,0x66,0x7c,0x0f,0x9f,0xf3,0xff,0x9c,0xfc,0x00,0x73,0x0e,0x7f,0xf3,0xff,0x9c,0xfc,0x00,0x73,0x0e,0x7f,0xf0,0x00,0x1c,0xfc,0x18,0x7c,0xfe,0x1f,0xf0,0x00,0x1c,0xfc,0x18,0x7c,0xfe,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff };
//ICO
//width:16,height:16
const unsigned char Tag[] PROGMEM = { 0x00, 0x00, 0x3b, 0xec, 0x7b, 0xee, 0x63, 0xe6, 0x63, 0xe6, 0x63, 0xe6, 0x63, 0xe6, 0x63, 0xe6, 0x63, 0xe6, 0x63, 0x66, 0x62, 0x26, 0x60, 0x06, 0x60, 0x06, 0x7f, 0xfe, 0x3f, 0xfc, 0x00, 0x00 };
const unsigned char Chip[] PROGMEM = { 0x14, 0xa0, 0x3f, 0xf0, 0x7f, 0xf8, 0xe0, 0x1c, 0x6e, 0x18, 0xec, 0x1c, 0x68, 0x18, 0x60, 0x18, 0xe0, 0x1c, 0x60, 0x58, 0xe0, 0x1c, 0x7f, 0xf8, 0x3f, 0xf0, 0x14, 0xa0 };
//const unsigned char HeatPipe[] PROGMEM  = { 0x00, 0x00, 0x09, 0x90, 0x11, 0x88, 0x21, 0x84, 0x11, 0x88, 0x09, 0x90, 0x11, 0x88, 0x21, 0x84, 0x11, 0x88, 0x09, 0x90, 0x11, 0x88, 0x21, 0x84, 0x11, 0x88, 0x09, 0x90, 0x01, 0x80, 0x00, 0x00 };
const unsigned char Lightning[] PROGMEM = { 0x0f, 0xe0, 0x1f, 0xc0, 0x1f, 0xc0, 0x3f, 0x80, 0x3f, 0xf8, 0x7f, 0xf0, 0x7f, 0xe0, 0x07, 0xc0, 0x07, 0x80, 0x0f, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x10, 0x00 };
//const unsigned char Thermometer[] PROGMEM = { 0x01, 0x80, 0x02, 0x40, 0x03, 0x40, 0x02, 0x40, 0x03, 0x40, 0x02, 0x40, 0x03, 0x40, 0x02, 0x40, 0x03, 0x40, 0x03, 0xc0, 0x03, 0xc0, 0x03, 0xc0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x03, 0xc0 };
const unsigned char Pointer[] PROGMEM = { 0x20, 0x20, 0x70, 0xf8 };

//状态提示图标
//width:14,height:14
const unsigned char c1[] PROGMEM = { 0x03, 0x00, 0x07, 0x80, 0x0f, 0xc0, 0x0c, 0xc0, 0x1c, 0xe0, 0x1c, 0xe0, 0x3c, 0xf0, 0x3c, 0xf0, 0x7f, 0xf8, 0x7f, 0xf8, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xfc, 0x7f, 0xf8 };
const unsigned char c2[] PROGMEM = { 0x7f, 0xf8, 0xff, 0xfc, 0xc0, 0x0c, 0xc3, 0x0c, 0xcb, 0x4c, 0xdb, 0x6c, 0xdb, 0x6c, 0xd8, 0x6c, 0xdc, 0xec, 0xcf, 0xcc, 0xc7, 0x8c, 0xc0, 0x0c, 0xff, 0xfc, 0x7f, 0xf8 };
const unsigned char c3[] PROGMEM = { 0x00, 0x00, 0x06, 0x00, 0x0c, 0x00, 0x18, 0xf8, 0x38, 0xf0, 0x30, 0x30, 0x70, 0x60, 0x70, 0x78, 0x78, 0xf8, 0x78, 0x00, 0x3c, 0x02, 0x3f, 0x0c, 0x1f, 0xf8, 0x0f, 0xf0, 0x03, 0xc0, 0x00, 0x00 };
const unsigned char c5[] PROGMEM = { 0x7f, 0xf0, 0xff, 0xe0, 0xc0, 0x08, 0xc0, 0x1c, 0xc0, 0x38, 0xc8, 0x70, 0xdc, 0xe4, 0xcf, 0xcc, 0xc7, 0x8c, 0xc3, 0x0c, 0xc0, 0x0c, 0xc0, 0x0c, 0xff, 0xfc, 0x7f, 0xf8 };
const unsigned char c6[] PROGMEM = { 0x1e, 0x10, 0x33, 0x38, 0x2d, 0x7c, 0x25, 0x38, 0x2d, 0x38, 0x25, 0x38, 0x2d, 0x38, 0x6d, 0x80, 0xde, 0xc0, 0xbf, 0x40, 0xbf, 0x40, 0xde, 0xc0, 0x61, 0x80, 0x3f, 0x00 };
const unsigned char c7[] PROGMEM = { 0x1f, 0xe0, 0x3f, 0xf0, 0x70, 0x38, 0x60, 0x18, 0x60, 0x18, 0x60, 0x18, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xf8, 0x7c, 0xf8, 0x7c, 0xfc, 0xfc, 0x7f, 0xf8 };
const unsigned char c_NO[] PROGMEM  = { 0x80, 0x04, 0x00, 0x00, 0x3f, 0xf0, 0x37, 0xb0, 0x23, 0x10, 0x30, 0x30, 0x38, 0x70, 0x38, 0x70, 0x30, 0x30, 0x23, 0x10, 0x37, 0xb0, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char *C_table[] = {c1, c2, c3, Lightning, c5, c6, c7};

//设置图标
// width: 14, height: 14
const unsigned char QRC[] PROGMEM = { 0x05, 0x80, 0x74, 0xb8, 0x57, 0xa8, 0x76, 0xb8, 0x05, 0x80, 0xf9, 0x7c, 0x46, 0x94, 0xaa, 0xa8, 0xf9, 0x7c, 0x06, 0x88, 0x74, 0xa8, 0x57, 0x8c, 0x75, 0x74, 0x06, 0x98 };
const unsigned char Set0[] PROGMEM = { 0x88, 0x24, 0x08, 0x20, 0x38, 0x30, 0x38, 0x30, 0x38, 0x30, 0x38, 0x30, 0x38, 0x30, 0x38, 0x30, 0x39, 0x30, 0x3b, 0xb0, 0x3f, 0xf0, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Set1[] PROGMEM = { 0xf8, 0x7c, 0xf3, 0x3c, 0xf4, 0xbc, 0xf6, 0xbc, 0xf4, 0xbc, 0xf6, 0xbc, 0xf4, 0xbc, 0xe4, 0x9c, 0xc8, 0x4c, 0xd0, 0x2c, 0xd0, 0x2c, 0xc8, 0x4c, 0xe7, 0x9c, 0xf0, 0x3c };
const unsigned char Set2[] PROGMEM = { 0x8f, 0xc4, 0x10, 0x20, 0x20, 0x10, 0x4c, 0xc8, 0x9f, 0xe4, 0x3d, 0xf0, 0x3d, 0xf0, 0x1d, 0xe0, 0x3e, 0xf0, 0x3f, 0x70, 0x9f, 0xe4, 0x8c, 0xc4, 0x00, 0x00, 0x30, 0x30 };
const unsigned char Set3[] PROGMEM = { 0xc3, 0xfc, 0x18, 0x00, 0x18, 0x00, 0xc3, 0xfc, 0xff, 0xfc, 0xff, 0x0c, 0x00, 0x60, 0x00, 0x60, 0xff, 0x0c, 0xff, 0xfc, 0xf0, 0xfc, 0x06, 0x00, 0x06, 0x00, 0xf0, 0xfc };
const unsigned char Set4[] PROGMEM = { 0x80, 0x04, 0x00, 0x00, 0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x10, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Set4F[] PROGMEM = { 0x80, 0x04, 0x00, 0x00, 0x3f, 0xf0, 0x38, 0x30, 0x33, 0x10, 0x3f, 0x90, 0x38, 0x10, 0x33, 0x90, 0x27, 0x90, 0x26, 0x10, 0x30, 0x90, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Set4FF[] PROGMEM  = { 0x80, 0x04, 0x00, 0x00, 0x3f, 0xf0, 0x24, 0x30, 0x21, 0x90, 0x27, 0x90, 0x27, 0x30, 0x20, 0x70, 0x27, 0xf0, 0x23, 0x30, 0x30, 0x70, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Set5[] PROGMEM = { 0xfc, 0xfc, 0xf8, 0x7c, 0xe0, 0x1c, 0xc0, 0x0c, 0xc0, 0x0c, 0xc0, 0x0c, 0xc0, 0x0c, 0xc0, 0x0c, 0xc0, 0x0c, 0x80, 0x04, 0x80, 0x04, 0xff, 0xfc, 0xf8, 0x7c, 0xfc, 0xfc };
const unsigned char Set5_1[] PROGMEM = { 0xfc, 0xf4, 0xf8, 0x60, 0xe0, 0x44, 0xc0, 0x8c, 0xc1, 0x1c, 0xc2, 0x2c, 0xc4, 0x4c, 0xc8, 0x8c, 0xd1, 0x0c, 0xa2, 0x04, 0xc4, 0x04, 0x8f, 0xfc, 0x18, 0x7c, 0xbc, 0xfc };
const unsigned char Set6[] PROGMEM = { 0xf8,0x7c,0xc0,0x0c,0xc0,0x0c,0xcf,0xcc,0xcf,0xcc,0xcf,0xcc,0xcf,0xcc,0xcf,0xcc,0xcf,0xcc,0xc8,0x4c,0xc8,0x4c,0xcf,0xcc,0xc0,0x0c,0xc0,0x0c };
const unsigned char Set_LANG[] PROGMEM  = { 0xf0, 0x3c, 0xce, 0x4c, 0xbc, 0x34, 0xb8, 0x14, 0x18, 0x80, 0x10, 0x80, 0x42, 0x30, 0x60, 0x78, 0x60, 0xf8, 0x44, 0xc0, 0x80, 0x04, 0xb8, 0x84, 0xcf, 0xcc, 0xf0, 0x3c };
const unsigned char Set7[] PROGMEM = { 0x80, 0x0c, 0x00, 0x1c, 0x3f, 0xf4, 0x3f, 0xe0, 0x3f, 0xc4, 0x37, 0x8c, 0x23, 0x18, 0x30, 0x30, 0x38, 0x70, 0x3c, 0xf0, 0x3f, 0xf0, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Set11[] PROGMEM = { 0xf3, 0xfc, 0xe7, 0xfc, 0xce, 0x0c, 0x8e, 0x1c, 0x9f, 0x9c, 0x1f, 0x3c, 0x1f, 0x0c, 0x0e, 0x0c, 0x0f, 0xfc, 0x87, 0xf8, 0x81, 0xe4, 0xc0, 0x0c, 0xe0, 0x1c, 0xf8, 0x7c };
const unsigned char Set8[] PROGMEM = { 0x81, 0xdc, 0x55, 0x9c, 0x29, 0x04, 0x55, 0x00, 0x29, 0x90, 0x55, 0xd0, 0x03, 0xfc, 0xff, 0x00, 0x2e, 0x00, 0x26, 0x70, 0x02, 0x50, 0x82, 0x70, 0xe6, 0x00, 0xee, 0x04 };
const unsigned char Set9[] PROGMEM = { 0xf0, 0x3c, 0xce, 0x0c, 0xbf, 0x04, 0xb3, 0x04, 0x73, 0x00, 0x7f, 0x00, 0x7e, 0x00, 0x7c, 0x00, 0x7c, 0x00, 0x7c, 0x60, 0xbc, 0x64, 0xbe, 0x04, 0xcf, 0x0c, 0xf0, 0x3c };
const unsigned char Set10[] PROGMEM = { 0xf8, 0x7c, 0xf7, 0xbc, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0xbf, 0xf4, 0xab, 0x54, 0xab, 0x54, 0xab, 0x54, 0xab, 0x54, 0xab, 0x54, 0xab, 0x54, 0xbf, 0xf4, 0xc0, 0x0c };
const unsigned char Set13[] PROGMEM = { 0x80, 0x04, 0x00, 0x00, 0x3f, 0xf0, 0x3c, 0xf0, 0x34, 0xb0, 0x24, 0x90, 0x24, 0x90, 0x27, 0x90, 0x23, 0x10, 0x30, 0x30, 0x38, 0x70, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Set12[] PROGMEM = { 0x80, 0x04, 0x00, 0x00, 0x3f, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x20, 0x10, 0x20, 0x10, 0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Set14[] PROGMEM = { 0xff, 0x7c, 0xfe, 0x7c, 0xfc, 0xec, 0xe8, 0xdc, 0xc8, 0x4c, 0x98, 0x4c, 0x88, 0x24, 0x08, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0xe0, 0x1c };
const unsigned char Set15[] PROGMEM = { 0x15, 0x54, 0x3f, 0xfc, 0x15, 0x54, 0x3f, 0xfc, 0x15, 0x54, 0x3c, 0x04, 0x14, 0x04, 0x3c, 0xfc, 0x14, 0x54, 0x3c, 0xfc, 0x00, 0x54, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x00 };
const unsigned char Set16[] PROGMEM = { 0x15, 0x54, 0x3f, 0xf8, 0x15, 0x50, 0x3f, 0xf0, 0x15, 0x50, 0x38, 0x70, 0x10, 0x20, 0x31, 0x04, 0x13, 0x8c, 0x22, 0xa8, 0x17, 0xfc, 0x2a, 0xa8, 0x00, 0x00, 0x00, 0x00 };
const unsigned char Set17[] PROGMEM = { 0x80, 0x00, 0xbf, 0xf8, 0x1f, 0xf8, 0xb0, 0x08, 0x18, 0x08, 0xb9, 0xe8, 0x19, 0xb8, 0xb8, 0x38, 0x18, 0x38, 0xb9, 0xb8, 0xb9, 0xf8, 0xb0, 0xf8, 0xbf, 0xf8, 0x80, 0x00 };
const unsigned char Set18[] PROGMEM = { 0x80, 0x00, 0xbf, 0xf8, 0x1f, 0xf8, 0xb0, 0x28, 0x1f, 0xf8, 0xb4, 0x08, 0x1f, 0xf8, 0xb1, 0x08, 0x1f, 0xf8, 0xb0, 0x48, 0xbf, 0xf8, 0xb2, 0x88, 0xbf, 0xf8, 0x80, 0x00 };
const unsigned char Lang_CN[] PROGMEM = { 0x80, 0x04, 0x00, 0x00, 0x3f, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x20, 0x10, 0x24, 0x90, 0x24, 0x90, 0x20, 0x10, 0x3c, 0xf0, 0x3c, 0xf0, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Lang_EN[] PROGMEM = { 0x80, 0x04, 0x00, 0x00, 0x3f, 0xf0, 0x38, 0x70, 0x30, 0x30, 0x23, 0x10, 0x27, 0x90, 0x20, 0x10, 0x20, 0x10, 0x27, 0x90, 0x27, 0x90, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Lang_JP[] PROGMEM = { 0x80, 0x04, 0x00, 0x00, 0x3f, 0xf0, 0x3d, 0xf0, 0x20, 0x10, 0x3b, 0xf0, 0x3b, 0x70, 0x30, 0x30, 0x2b, 0x50, 0x2a, 0xd0, 0x31, 0xb0, 0x3f, 0xf0, 0x00, 0x00, 0x80, 0x04 };
const unsigned char Save[] PROGMEM = { 0x00, 0x04, 0x58, 0x08, 0x58, 0x08, 0x58, 0x08, 0x40, 0x08, 0x7f, 0xf8, 0x60, 0x18, 0x5f, 0xe8, 0x5b, 0x68, 0x5f, 0xe8, 0x5b, 0x68, 0x1c, 0xe8, 0x5f, 0xe8, 0x00, 0x00 };
const unsigned char Lock[] PROGMEM = { 0xe0, 0x1c, 0xc0, 0x0c, 0x8f, 0xc4, 0x9f, 0xe4, 0x9f, 0xe4, 0x9f, 0xe4, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x07, 0x80, 0x07, 0x80, 0x03, 0x00, 0x80, 0x04 };
const unsigned char Set19[] PROGMEM = { 0xf8, 0x7c, 0x80, 0x04, 0xbc, 0xf4, 0x3f, 0xf0, 0x38, 0x70, 0xb7, 0xb4, 0xb6, 0xb4, 0xb5, 0xb4, 0xb7, 0xb4, 0x38, 0x70, 0x3f, 0xf0, 0xbc, 0xf4, 0x80, 0x04, 0xf8, 0x7c };
#if LANG_JP_State
const unsigned char *Ico_table[] = {
  Set0, Set1, Set2, Set3, Set4, Set5, Set19, Set6, Lock, Set_LANG, QRC, Set7,
  Set8, Set9, Set0, Set10, Set12, Set7,
  Set0, Set11, Set14, Save,
  Set11, Set13, Set14, Save,
  Set15, Set16,
  Set17, Set18, //5
  Set5_1, Set5,
  c_NO, Set7,
  Lang_CN, Lang_EN, Lang_JP, //8
  Set4, Set4F, Save,
};
#else
const unsigned char *Ico_table[] = {
  Set0, Set1, Set2, Set3, Set4, Set5, Set19, Set6, Lock, Set_LANG, QRC, Set7,
  Set8, Set9, Set0, Set10, Set12, Set7,
  Set0, Set11, Set14, Save,
  Set11, Set13, Set14, Save,
  Set15, Set16,
  Set17, Set18, //5
  Set5_1, Set5,
  c_NO, Set7,
  Lang_CN, Lang_EN,c_NO, //8
  Set4, Set4F, Save,
};
#endif
const byte Menu_table[] = {12, 6, 4, 4, 2, 2, 2, 2, 3, 3}; //菜单 标签 温控 定时 控制方式 首页 蜂鸣器 标签删除确认界面 语言菜单 翻转 显示
byte MenuLevel = 0; //菜单层级
