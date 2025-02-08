unsigned char sine_pred[] = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00,
  0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x98, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x14, 0x07, 0x00, 0x00,
  0x24, 0x07, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f,
  0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x90, 0xff, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x6f, 0x75, 0x74, 0x70,
  0x75, 0x74, 0x5f, 0x30, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xba, 0xf9, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x6b, 0x65, 0x72, 0x61, 0x73, 0x5f, 0x74, 0x65,
  0x6e, 0x73, 0x6f, 0x72, 0x5f, 0x34, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff,
  0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x4d,
  0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00, 0x08, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f,
  0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73,
  0x69, 0x6f, 0x6e, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x06, 0x00, 0x00,
  0x18, 0x06, 0x00, 0x00, 0xc8, 0x05, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00,
  0x9c, 0x01, 0x00, 0x00, 0x4c, 0x01, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00,
  0xac, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
  0x94, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x6a, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xea, 0x03, 0x00, 0x00,
  0x0c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0xec, 0xb7, 0xa8, 0x9a, 0xd0, 0xf4, 0x0a, 0xe3,
  0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x38, 0x2e, 0x30, 0x00, 0x00,
  0xd6, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xd8, 0xf5, 0xff, 0xff, 0xdc, 0xf5, 0xff, 0xff,
  0xe0, 0xf5, 0xff, 0xff, 0xfe, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x40, 0x00, 0x00, 0x00, 0xb7, 0x70, 0x96, 0x3e, 0x4a, 0x20, 0x0f, 0xbf,
  0x18, 0xc5, 0xb9, 0xbd, 0xc0, 0xc6, 0x67, 0xbd, 0x1a, 0x31, 0x9c, 0x3e,
  0x14, 0xda, 0x99, 0x3e, 0x8d, 0xc1, 0xda, 0x3e, 0x32, 0x00, 0x04, 0xbf,
  0x3e, 0x83, 0xe4, 0x3e, 0x80, 0xac, 0x1b, 0xbe, 0xaa, 0x29, 0xc2, 0x3d,
  0x7c, 0x24, 0x84, 0x3e, 0xce, 0xb9, 0x77, 0xbe, 0x7c, 0x76, 0x2d, 0xbe,
  0xda, 0x7f, 0x10, 0xbf, 0xa6, 0xcf, 0x83, 0xbd, 0x4a, 0xfb, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0c, 0xd8, 0x02, 0x3e,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0d, 0x1c, 0x78, 0xbe, 0xe9, 0x4e, 0x48, 0xbf, 0x98, 0x97, 0x61, 0xbf,
  0x00, 0x00, 0x00, 0x00, 0x1d, 0x67, 0x7c, 0x3d, 0x00, 0x00, 0x00, 0x00,
  0xc9, 0x7f, 0x46, 0x3f, 0x7d, 0xf0, 0xad, 0x3e, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x77, 0xd2, 0x3e,
  0x96, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0xa9, 0x33, 0x4e, 0xbb, 0x2b, 0xe3, 0x4c, 0x3f, 0x9a, 0x1e, 0x1a, 0xbe,
  0x78, 0x19, 0x5c, 0xbe, 0xff, 0x00, 0xcd, 0xbc, 0x2b, 0x7b, 0x90, 0x3e,
  0x00, 0x00, 0x00, 0x00, 0x47, 0xc5, 0x20, 0xbf, 0xe6, 0x08, 0x9b, 0x3e,
  0x08, 0x69, 0x6f, 0x3e, 0x0b, 0x33, 0x4e, 0xbb, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xb1, 0x13, 0x7e, 0xbc, 0x6e, 0xd5, 0x02, 0x3e,
  0x8a, 0xdf, 0xa9, 0xbe, 0xe2, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x8c, 0x38, 0x36, 0xbe, 0xf2, 0xfb, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x6c, 0x72, 0x9c, 0xbd,
  0x3d, 0x24, 0xd5, 0x3e, 0xa5, 0xdd, 0xa8, 0x3e, 0x04, 0xfa, 0x9a, 0xbe,
  0x8b, 0x2b, 0x96, 0xbe, 0x8e, 0xcb, 0x70, 0x3e, 0x83, 0x7f, 0xd0, 0xbe,
  0x45, 0xdc, 0xca, 0xbe, 0xcc, 0xd9, 0x9b, 0xbd, 0xb8, 0x0e, 0x06, 0xbe,
  0xdf, 0xd3, 0x66, 0xbe, 0xea, 0x6b, 0xbf, 0xbb, 0xd1, 0x28, 0xd8, 0xbe,
  0x35, 0x00, 0xa1, 0x3e, 0x8a, 0xda, 0x02, 0x3e, 0x63, 0x3b, 0x6e, 0x3e,
  0x99, 0xab, 0x9e, 0xbf, 0x83, 0x82, 0xb5, 0xbe, 0x67, 0x32, 0x8c, 0x3e,
  0x17, 0x5d, 0xc4, 0x3e, 0x09, 0x7c, 0x17, 0x3f, 0x67, 0xd5, 0xaf, 0x3d,
  0x93, 0xc5, 0x40, 0xbf, 0x8c, 0x7c, 0xe1, 0x3d, 0x45, 0x74, 0xc7, 0xbf,
  0x9a, 0x60, 0x4c, 0x3e, 0x80, 0x88, 0x3e, 0x3f, 0x11, 0xa6, 0x0f, 0xbe,
  0x69, 0x6b, 0xdc, 0x3e, 0x27, 0xff, 0xda, 0x3e, 0x3f, 0x94, 0xc6, 0xbe,
  0xb5, 0xf9, 0x59, 0x3f, 0x70, 0x16, 0x8c, 0x3e, 0x00, 0xd2, 0x5e, 0x3c,
  0x88, 0x48, 0xd2, 0xbe, 0x80, 0xb4, 0xd5, 0x3b, 0x21, 0x3e, 0xe0, 0xbd,
  0x22, 0x51, 0xbd, 0x3e, 0xd3, 0xeb, 0xb5, 0xbe, 0xad, 0x75, 0xb1, 0x3e,
  0xd5, 0x48, 0x0a, 0x3e, 0x68, 0x00, 0x5f, 0x3d, 0x7f, 0x26, 0x90, 0xbd,
  0xef, 0x2b, 0x0f, 0xbe, 0x58, 0xbb, 0xbd, 0xbe, 0x97, 0x05, 0xae, 0xbe,
  0xc0, 0x4b, 0x8e, 0xbb, 0x76, 0xdb, 0x63, 0x3e, 0x85, 0x56, 0xa5, 0x3e,
  0xde, 0xdc, 0x29, 0x3e, 0x62, 0xa3, 0x2c, 0xbe, 0x00, 0x2b, 0x18, 0xbd,
  0x40, 0x9b, 0x85, 0xbd, 0x24, 0xf2, 0x85, 0x3d, 0x68, 0xe9, 0x05, 0xbd,
  0x00, 0x96, 0xc9, 0x3c, 0x2b, 0x8f, 0xcf, 0xbe, 0x61, 0x0f, 0x3c, 0xbe,
  0xd0, 0xbc, 0xff, 0x3d, 0x81, 0x17, 0x97, 0x3e, 0x16, 0x3a, 0x19, 0x3e,
  0xa5, 0x23, 0x8f, 0xbe, 0xa0, 0xe5, 0xbb, 0xbc, 0xa1, 0x45, 0xe8, 0xbb,
  0x1f, 0x69, 0x52, 0xbe, 0x9d, 0x4e, 0xc1, 0xbe, 0x6c, 0xa6, 0xc4, 0xbe,
  0xf9, 0xd6, 0x9a, 0x3e, 0x3a, 0x0b, 0x02, 0xbe, 0x9e, 0xe1, 0x6a, 0x3d,
  0x6a, 0xe0, 0x2a, 0xbc, 0x2b, 0x61, 0xa0, 0xbe, 0xc9, 0x77, 0x44, 0x3e,
  0x00, 0x28, 0x08, 0x3d, 0x05, 0xa7, 0xf4, 0xbc, 0x2b, 0xb5, 0xf2, 0x3e,
  0x15, 0xa9, 0xaf, 0x3e, 0xa8, 0x31, 0x86, 0xbd, 0xd6, 0x32, 0x4f, 0x3e,
  0xe6, 0x6a, 0x9a, 0x3e, 0xcf, 0x4d, 0xc3, 0x3d, 0x5b, 0xcd, 0xa6, 0x3e,
  0x1a, 0xd0, 0x0d, 0x3e, 0x20, 0x7c, 0x1b, 0xbe, 0x4b, 0xbc, 0x49, 0x3e,
  0x41, 0xf1, 0x08, 0xbe, 0x36, 0x85, 0x4b, 0xbf, 0x11, 0x9e, 0x82, 0x3e,
  0x22, 0x40, 0xd2, 0xbd, 0x9c, 0x4e, 0xa3, 0x3d, 0x7a, 0xc7, 0xf5, 0x3c,
  0x08, 0x06, 0x6c, 0x3e, 0xdc, 0x00, 0x9c, 0x3d, 0x40, 0xfc, 0x1d, 0xbd,
  0x55, 0x4a, 0x82, 0x3e, 0xac, 0x84, 0x66, 0x3d, 0x3c, 0x57, 0x4c, 0xbe,
  0x96, 0xd5, 0x37, 0x3e, 0xcd, 0x8c, 0x95, 0x3e, 0xd0, 0x9c, 0xc8, 0xbc,
  0x1a, 0x82, 0x4d, 0x3e, 0xfc, 0x22, 0x9c, 0xbe, 0xff, 0x8f, 0x4e, 0xbe,
  0x94, 0xde, 0xf3, 0x3d, 0xc1, 0xcb, 0x92, 0x3e, 0x8f, 0xa3, 0xcb, 0x3e,
  0xde, 0xd0, 0x9a, 0xbe, 0x6e, 0x7a, 0xb2, 0xbe, 0x94, 0x7c, 0x39, 0xbe,
  0x05, 0xb9, 0xb8, 0x3e, 0xc8, 0x4f, 0xe4, 0xbd, 0x9c, 0x5b, 0x9b, 0xbe,
  0x84, 0xf0, 0xa4, 0xbe, 0xf8, 0xff, 0x4d, 0x3d, 0xf1, 0x39, 0xd2, 0x3e,
  0xca, 0x3b, 0x49, 0xbe, 0x14, 0x82, 0x25, 0x3e, 0x17, 0x4d, 0x30, 0x3f,
  0xcc, 0x00, 0x2f, 0x3f, 0x60, 0x51, 0xbc, 0xbe, 0x50, 0x46, 0x16, 0x3e,
  0xc4, 0x21, 0x80, 0xbe, 0x71, 0x60, 0x04, 0xbf, 0x82, 0x6a, 0xb6, 0xbd,
  0x6d, 0xa8, 0xc9, 0x3e, 0x38, 0x6e, 0xba, 0xbd, 0x47, 0x19, 0x9b, 0x3e,
  0xd2, 0x80, 0x36, 0xbe, 0xc1, 0x41, 0xbc, 0xbe, 0x1d, 0x95, 0x8b, 0xbe,
  0xae, 0x1a, 0x54, 0x3e, 0xc0, 0xf5, 0x23, 0xbd, 0xae, 0x0d, 0xd0, 0xbe,
  0x46, 0x8d, 0x3a, 0xbf, 0xa1, 0xf2, 0x11, 0xbf, 0x50, 0xc0, 0xd7, 0xbe,
  0x8a, 0x08, 0x49, 0x3d, 0x90, 0x2d, 0xa1, 0x3c, 0x5d, 0x9c, 0x11, 0x3f,
  0xaf, 0x64, 0xef, 0x3e, 0xe8, 0x12, 0x1f, 0xbd, 0xd0, 0x5d, 0x20, 0x3d,
  0x96, 0xdd, 0x58, 0x3e, 0xcc, 0xce, 0xbe, 0x3e, 0x03, 0x28, 0xcf, 0xbd,
  0x98, 0x30, 0x0f, 0xbd, 0x7c, 0x85, 0x8b, 0x3d, 0x98, 0x4b, 0x6a, 0xbe,
  0xf6, 0x2d, 0xc2, 0xbe, 0xf7, 0xc6, 0x3a, 0x3d, 0xfe, 0xd4, 0x0a, 0x3e,
  0x01, 0xe7, 0xc9, 0x3e, 0xb0, 0x48, 0x80, 0xbd, 0xb0, 0xa5, 0x36, 0xbd,
  0x9b, 0xf7, 0x17, 0xbe, 0xa1, 0x15, 0x92, 0x3e, 0xa8, 0x66, 0x0f, 0xbe,
  0xf8, 0x6c, 0x99, 0xbe, 0x63, 0x46, 0xc2, 0x3e, 0xd7, 0x43, 0xf4, 0xbe,
  0x72, 0x79, 0xbf, 0x3e, 0x94, 0x23, 0x92, 0xbe, 0x72, 0x2a, 0xbf, 0xbe,
  0xdf, 0x3d, 0xac, 0x3e, 0x5e, 0x2a, 0xba, 0xbe, 0xb0, 0xcc, 0xdb, 0xbc,
  0xf3, 0x42, 0x9a, 0x3e, 0x41, 0x10, 0xcb, 0x3e, 0x92, 0x41, 0xdd, 0xbe,
  0x78, 0x93, 0x4b, 0x3d, 0x6f, 0xc0, 0x8d, 0xbd, 0x43, 0xc6, 0x39, 0xbd,
  0x96, 0x66, 0x56, 0x3e, 0x15, 0x01, 0xd1, 0x3e, 0xbb, 0xf6, 0xaf, 0x3e,
  0xa8, 0xa3, 0xc1, 0x3d, 0x70, 0xb0, 0x07, 0xbe, 0x46, 0x76, 0x8d, 0xbe,
  0xf6, 0xbe, 0x46, 0x3e, 0x6d, 0xc1, 0xc3, 0xbe, 0xe0, 0xd1, 0x1b, 0x3d,
  0x4d, 0xbf, 0x8d, 0x3e, 0xc4, 0x1e, 0xb1, 0x3d, 0x5a, 0xd6, 0xc7, 0xbe,
  0x3a, 0x7c, 0x83, 0xbe, 0xfa, 0x78, 0x0c, 0xbe, 0x7e, 0xf9, 0x71, 0x3e,
  0xfc, 0x3c, 0xa5, 0xbe, 0xf3, 0xa8, 0x88, 0x3e, 0xc5, 0x18, 0xa5, 0x3e,
  0x8a, 0x7c, 0x8d, 0xbe, 0x1f, 0xd2, 0x74, 0xbe, 0xe6, 0x42, 0xc2, 0xbe,
  0xba, 0xea, 0x1b, 0x3e, 0xa3, 0x78, 0x91, 0x3e, 0xb8, 0xb4, 0xc1, 0xbd,
  0x48, 0x9e, 0x2e, 0xbe, 0xa0, 0x5c, 0x79, 0xbe, 0x10, 0xe1, 0x8b, 0xbd,
  0xc0, 0x9a, 0x2b, 0xbd, 0xcd, 0x00, 0x9e, 0x3e, 0xc5, 0x2a, 0x63, 0xbe,
  0x37, 0x39, 0x8f, 0xbe, 0xd4, 0x47, 0x0c, 0xbe, 0xec, 0x68, 0x1d, 0xbe,
  0xa4, 0x2d, 0xd3, 0x3d, 0xa9, 0xd5, 0x83, 0x3e, 0x50, 0x9c, 0xcb, 0xbc,
  0xba, 0x88, 0xfa, 0x3e, 0xc8, 0x33, 0x9e, 0xbd, 0x9f, 0x4f, 0xd5, 0x3e,
  0x58, 0xde, 0x2d, 0xbd, 0x3a, 0xbf, 0x01, 0x3f, 0x7e, 0x6b, 0x14, 0xbe,
  0xae, 0xd2, 0x3f, 0xbe, 0xc3, 0x0c, 0x8c, 0xbe, 0x2f, 0x69, 0x4b, 0x3e,
  0x3a, 0x09, 0x4b, 0x3e, 0x1d, 0x68, 0x41, 0xbe, 0x0b, 0xf4, 0xfa, 0xbc,
  0x64, 0x1e, 0x30, 0xbe, 0x1d, 0xdc, 0x83, 0x3e, 0xdc, 0x02, 0xac, 0xbe,
  0x78, 0xb6, 0x1f, 0x3c, 0xca, 0xc6, 0xa2, 0xbd, 0x3c, 0x54, 0xdf, 0x3d,
  0xb0, 0x91, 0x0f, 0xbd, 0x2f, 0xb3, 0xab, 0x3e, 0xbd, 0x03, 0x9d, 0x3e,
  0xe8, 0x90, 0x55, 0xbd, 0xf6, 0x2f, 0x24, 0xbe, 0x34, 0xed, 0xb4, 0x3d,
  0x56, 0x62, 0x50, 0x3e, 0x79, 0x97, 0xbd, 0x3e, 0xad, 0x99, 0xd9, 0x3e,
  0x13, 0x23, 0xbb, 0x3e, 0x0a, 0x23, 0x14, 0xbe, 0x10, 0xe2, 0xc0, 0xbe,
  0xc0, 0x8d, 0x0d, 0x3d, 0xc4, 0xf6, 0x00, 0x3d, 0x57, 0x1d, 0x14, 0x3e,
  0x25, 0xa4, 0xce, 0xbe, 0x06, 0xb9, 0x2d, 0x3e, 0x08, 0x67, 0x54, 0xbd,
  0x77, 0x41, 0x34, 0xbd, 0xd0, 0x71, 0x5c, 0x3c, 0xa9, 0xed, 0xcd, 0x3d,
  0xaf, 0x80, 0xbd, 0x3e, 0x15, 0xfa, 0x88, 0x3e, 0x68, 0xbb, 0x79, 0xbd,
  0x49, 0x50, 0xa8, 0xbd, 0x95, 0xf7, 0x9b, 0xbd, 0x58, 0x84, 0x30, 0x3d,
  0x3c, 0x08, 0xdb, 0x3d, 0x12, 0x2c, 0x42, 0xbe, 0x1b, 0x83, 0x3a, 0xbf,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x11, 0x39, 0xfe, 0x3e,
  0xa2, 0x47, 0x4b, 0xbf, 0x74, 0xee, 0xee, 0x3b, 0x10, 0x6d, 0x33, 0xbb,
  0xe0, 0x8f, 0x5c, 0xbe, 0xaf, 0x20, 0x04, 0x3f, 0x5a, 0x82, 0x0a, 0xbf,
  0x2b, 0x2f, 0xf3, 0x3f, 0x99, 0xd3, 0xa2, 0x3f, 0xb4, 0x78, 0x64, 0x3a,
  0x7b, 0x2d, 0xe4, 0x3e, 0x78, 0xaa, 0x5e, 0x3e, 0xe7, 0x46, 0x88, 0xbe,
  0xd2, 0x92, 0xce, 0xbe, 0x8e, 0xfb, 0x2a, 0xbe, 0xee, 0xf3, 0xdb, 0x3e,
  0x38, 0xfb, 0xff, 0xff, 0x3c, 0xfb, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00,
  0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74,
  0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00,
  0xe0, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0xb4, 0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x74, 0x03, 0x00, 0x00, 0x1c, 0x03, 0x00, 0x00, 0xc4, 0x02, 0x00, 0x00,
  0x88, 0x02, 0x00, 0x00, 0x4c, 0x02, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00,
  0xa0, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xca, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xb4, 0xfc, 0xff, 0xff,
  0x1b, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c,
  0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43,
  0x61, 0x6c, 0x6c, 0x5f, 0x31, 0x3a, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x22, 0xfd, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x0c, 0xfd, 0xff, 0xff, 0x5e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x5f, 0x31, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74,
  0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x31, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x5f, 0x33, 0x5f, 0x31, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65,
  0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x5f, 0x31, 0x2f, 0x42,
  0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xbe, 0xfd, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0xa8, 0xfd, 0xff, 0xff, 0x5e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x5f, 0x31, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74,
  0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x31, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x5f, 0x32, 0x5f, 0x31, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65,
  0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x5f, 0x31,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x5f, 0x31, 0x2f, 0x42,
  0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xae, 0xfe, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x34, 0xfe, 0xff, 0xff,
  0x1f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x31, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x5f, 0x32, 0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xfa, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x80, 0xfe, 0xff, 0xff, 0x2f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x5f, 0x31, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61,
  0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72,
  0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x52, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0xd8, 0xfe, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00,
  0x61, 0x72, 0x69, 0x74, 0x68, 0x2e, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61,
  0x6e, 0x74, 0x33, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x8a, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x10, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x61, 0x72, 0x69, 0x74,
  0x68, 0x2e, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x32, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xc2, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x48, 0xff, 0xff, 0xff,
  0x0f, 0x00, 0x00, 0x00, 0x61, 0x72, 0x69, 0x74, 0x68, 0x2e, 0x63, 0x6f,
  0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x31, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00,
  0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x9c, 0xff, 0xff, 0xff,
  0x0e, 0x00, 0x00, 0x00, 0x61, 0x72, 0x69, 0x74, 0x68, 0x2e, 0x63, 0x6f,
  0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00,
  0x1c, 0x00, 0x18, 0x00, 0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61,
  0x75, 0x6c, 0x74, 0x5f, 0x6b, 0x65, 0x72, 0x61, 0x73, 0x5f, 0x74, 0x65,
  0x6e, 0x73, 0x6f, 0x72, 0x5f, 0x34, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x0c, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09
};
unsigned int model_quant_tflite_len = 3164;
