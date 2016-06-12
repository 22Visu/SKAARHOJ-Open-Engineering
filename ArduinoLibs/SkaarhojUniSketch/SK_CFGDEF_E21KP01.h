#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1
#define SK_DEVICES_SMARTSCOPE 1

#define SK_DEVICES 2		
		

#define SK_HWCCOUNT 13	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM,SK_DEV_SMARTSCOPE};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 1264 814\" width=\"70%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"1184\" height=\"780\" x=40 y=17 style=\"fill:url(#grad1);\" /><rect width=\"1184\" height=\"10\" x=40 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"1184\" height=\"10\" x=40 y=729 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"814\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"814\" x=1174 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16545, GZIP size: 5470 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6B, 0x73, 0x9B, 0xC8, 0xB2, 0xDF, 0xCF, 0xAF, 
	0x60, 0x49, 0x1D, 0x5B, 0x1C, 0x21, 0x99, 0x87, 0x90, 0x64, 
	0xB0, 0xEC, 0x63, 0x3B, 0xC9, 0xDA, 0xB5, 0x71, 0xE2, 0x8A, 
	0xF2, 0xD8, 0x73, 0x55, 0xAA, 0x14, 0x82, 0x91, 0x45, 0x82, 
	0x41, 0x17, 0x90, 0x6C, 0x5F, 0xC7, 0xFF, 0xFD, 0x74, 0xCF, 
	0x0C, 0x30, 0x20, 0xE4, 0x28, 0xD9, 0xBD, 0x49, 0x45, 0xC3, 
	0xBC, 0xFA, 0xDD, 0x3D, 0x3D, 0x0D, 0x59, 0xBB, 0x89, 0x74, 
	0xF1, 0xD9, 0x1B, 0x4D, 0x26, 0xBA, 0x6A, 0xE8, 0x43, 0xD5, 
	0x32, 0x7A, 0xAA, 0xAC, 0xCB, 0xAA, 0x31, 0x55, 0x61, 0xC4, 
	0x1C, 0xE8, 0x6C, 0xC4, 0xC8, 0x47, 0x2C, 0xC3, 0x62, 0x23, 
	0x66, 0x3E, 0xD2, 0x1F, 0x1C, 0xB2, 0x91, 0x5E, 0x3E, 0x32, 
	0x34, 0x0D, 0x36, 0x62, 0xE5, 0x23, 0xBA, 0x66, 0x99, 0x6C, 
	0xE8, 0xFC, 0xE3, 0x87, 0xEF, 0xA7, 0x1F, 0x3F, 0xBC, 0xCB, 
	0x67, 0x10, 0xA7, 0x69, 0x18, 0xAA, 0x7C, 0x2A, 0xE2, 0xA4, 
	0x23, 0x67, 0x22, 0x4E, 0x3A, 0x72, 0x2E, 0xE2, 0xA4, 0x23, 
	0x2F, 0xD9, 0x88, 0x89, 0x28, 0xB4, 0xA1, 0x6A, 0x0C, 0x2D, 
	0x18, 0x0B, 0xD2, 0x65, 0xE8, 0x3E, 0xC8, 0xAA, 0xA9, 0xB1, 
	0xA9, 0x43, 0x2B, 0x9F, 0x01, 0xC6, 0x06, 0x5A, 0xBE, 0xBE, 
	0x18, 0x35, 0xE8, 0xE8, 0xD4, 0xF9, 0xC7, 0x1A, 0x84, 0xE1, 
	0x93, 0xF5, 0x9B, 0x34, 0xA3, 0xF2, 0x90, 0x4F, 0x3F, 0xBC, 
	0xBA, 0x92, 0x55, 0x1D, 0x36, 0x00, 0xAA, 0xF1, 0xAD, 0x9B, 
	0x64, 0x63, 0x2F, 0x5E, 0x12, 0x36, 0xA4, 0xC3, 0xD6, 0xF1, 
	0x43, 0x9A, 0x91, 0x5B, 0x59, 0xD8, 0xFB, 0x7A, 0x15, 0xA1, 
	0x30, 0x27, 0x3A, 0x6C, 0xBF, 0x4E, 0xE2, 0x9B, 0xC4, 0xBD, 
	0x95, 0xC6, 0x89, 0x27, 0xAB, 0x1D, 0x5D, 0xED, 0x18, 0xEA, 
	0x44, 0x96, 0x55, 0xF9, 0x22, 0x0E, 0x7D, 0xE9, 0x65, 0x7C, 
	0x17, 0xC1, 0xF3, 0x87, 0xF8, 0xE6, 0x26, 0x04, 0x88, 0xF2, 
	0xF9, 0x83, 0x07, 0xED, 0x14, 0x01, 0xD3, 0xAD, 0x64, 0x1D, 
	0x90, 0xBB, 0x8D, 0xAD, 0xF5, 0x55, 0xEB, 0x83, 0xEB, 0xE4, 
	0xE6, 0x07, 0xAB, 0x4E, 0x3F, 0xFE, 0x29, 0xBD, 0x5B, 0x65, 
	0xCB, 0x55, 0xC6, 0x17, 0x9A, 0xCF, 0x53, 0x42, 0x07, 0x7F, 
	0x4F, 0xE2, 0xD5, 0x52, 0x3A, 0xAD, 0x76, 0xCF, 0x36, 0x60, 
	0x7F, 0x5C, 0xA6, 0x59, 0x42, 0x80, 0xC7, 0x3F, 0xC8, 0x03, 
	0x49, 0x18, 0x11, 0x3D, 0xB5, 0x63, 0x35, 0x4E, 0x4B, 0xAF, 
	0x83, 0x30, 0x2C, 0xD6, 0x18, 0xCD, 0x6B, 0xE0, 0x77, 0x63, 
	0x09, 0x52, 0x58, 0xC3, 0xD3, 0x2F, 0x91, 0xD4, 0x67, 0x73, 
	0x34, 0xFD, 0xED, 0x00, 0x38, 0x16, 0x61, 0xC5, 0xD5, 0xB5, 
	0x34, 0xCE, 0xD8, 0xBE, 0x01, 0xB5, 0x42, 0x9C, 0xD8, 0x45, 
	0x59, 0xC6, 0x50, 0x95, 0x5B, 0xF9, 0x6E, 0x89, 0x4E, 0x28, 
	0x25, 0x10, 0x30, 0x91, 0x0C, 0xCC, 0x46, 0x9E, 0xE6, 0xDD, 
	0x57, 0x91, 0x8F, 0x1D, 0x4D, 0xD5, 0x0D, 0x0D, 0x54, 0xB3, 
	0xCA, 0x62, 0xE9, 0x32, 0xCA, 0x48, 0xB2, 0x76, 0x43, 0x99, 
	0x63, 0x7C, 0xEF, 0x46, 0x7E, 0x7C, 0x4B, 0x7B, 0x05, 0xC2, 
	0x77, 0x88, 0xFE, 0xDD, 0x7C, 0x5E, 0x21, 0xA8, 0x82, 0xFF, 
	0x3C, 0x0C, 0x96, 0x0C, 0xB1, 0x51, 0x19, 0x8E, 0xA3, 0x2C, 
	0x89, 0x43, 0x36, 0xD3, 0x19, 0x72, 0x6E, 0xCF, 0x57, 0x19, 
	0x0A, 0x39, 0x37, 0x10, 0xA0, 0x42, 0xE8, 0xBE, 0xFE, 0x70, 
	0x26, 0xF4, 0x3E, 0x24, 0x6E, 0x94, 0x06, 0x59, 0x10, 0x47, 
	0xC0, 0xE2, 0x03, 0x12, 0x83, 0xCA, 0x39, 0xA4, 0x38, 0x2A, 
	0xB3, 0xD7, 0x71, 0x2A, 0x6C, 0xBB, 0x06, 0x0F, 0x94, 0xAE, 
	0x5C, 0x2F, 0x01, 0xC8, 0x34, 0x00, 0x20, 0x3B, 0xD7, 0xD4, 
	0x2D, 0x41, 0x24, 0xF1, 0x72, 0xC3, 0xE0, 0xB8, 0x88, 0xB9, 
	0x64, 0x99, 0x24, 0xDE, 0xC4, 0xB0, 0xB0, 0xE4, 0xF2, 0x3D, 
	0xF1, 0xE2, 0xC4, 0x67, 0x50, 0x15, 0x0A, 0xD6, 0xD0, 0xCA, 
	0xD9, 0x71, 0xBC, 0x4A, 0x3C, 0x52, 0x68, 0x60, 0x22, 0x5F, 
	0x1D, 0xBC, 0x92, 0xC0, 0xE1, 0x69, 0x0B, 0x2E, 0x4E, 0xFD, 
	0x40, 0xE7, 0x6D, 0xDE, 0x37, 0x79, 0xDB, 0xE3, 0xAD, 0xC5, 
	0xDB, 0x3E, 0x92, 0xD0, 0x11, 0xD5, 0xD7, 0xF9, 0x69, 0xE5, 
	0x41, 0xEF, 0x93, 0x9B, 0x3C, 0x48, 0x59, 0x70, 0x1B, 0x44, 
	0x37, 0x92, 0xA1, 0xFD, 0xB3, 0x36, 0x62, 0xC1, 0xC8, 0x8E, 
	0x5A, 0xA6, 0x5A, 0xF2, 0x03, 0xAA, 0x26, 0x0D, 0xFE, 0xE9, 
	0x3B, 0x19, 0xE7, 0x80, 0xEF, 0x92, 0x3E, 0xC5, 0xE1, 0xEA, 
	0x96, 0xAA, 0x4E, 0x13, 0x87, 0xCF, 0xDC, 0xD0, 0x8D, 0xBC, 
	0x62, 0x1C, 0xE3, 0x33, 0x9B, 0x78, 0x43, 0xD6, 0x24, 0x4C, 
	0x85, 0xF5, 0x82, 0x9E, 0xDF, 0xBB, 0x19, 0x33, 0x82, 0x09, 
	0xC7, 0x04, 0x12, 0x0E, 0xEE, 0x65, 0x8C, 0xBB, 0xA8, 0xD5, 
	0xCF, 0x01, 0x06, 0x48, 0xF9, 0xE5, 0xA7, 0x57, 0x32, 0x33, 
	0x25, 0x16, 0xE6, 0x2D, 0x88, 0x96, 0xAF, 0x21, 0x18, 0x92, 
	0x54, 0x50, 0xA8, 0xC2, 0xE0, 0x6C, 0x9B, 0xAE, 0x45, 0x86, 
	0x6B, 0x17, 0x16, 0xE0, 0x16, 0x88, 0x0C, 0x7A, 0x69, 0xE4, 
	0x1B, 0xBE, 0x5D, 0xAC, 0xEB, 0xF3, 0x75, 0x26, 0xC0, 0x8E, 
	0xBD, 0x15, 0xE5, 0xC7, 0x64, 0xFC, 0x5C, 0x26, 0x41, 0xD1, 
	0x85, 0xE9, 0x31, 0x89, 0xD2, 0x38, 0x91, 0x7E, 0x77, 0x83, 
	0x88, 0x8E, 0x0A, 0xBC, 0x69, 0xFE, 0x0C, 0x7E, 0xFB, 0xF4, 
	0x57, 0x37, 0x58, 0x33, 0x84, 0x66, 0xCA, 0x77, 0x2E, 0x56, 
	0x59, 0xC6, 0x22, 0x9F, 0xB8, 0x4B, 0x3F, 0xB0, 0x34, 0xDA, 
	0xF4, 0x59, 0x33, 0xB0, 0x68, 0x73, 0xC8, 0x7A, 0x70, 0x56, 
	0xB1, 0xD6, 0xE0, 0x2D, 0x5F, 0xAC, 0x0F, 0x59, 0x6B, 0xF0, 
	0xBE, 0xC9, 0x77, 0x5B, 0x7C, 0xFD, 0xC0, 0xB0, 0xF2, 0xFD, 
	0x7C, 0x43, 0x8F, 0xAF, 0x34, 0x70, 0x84, 0x93, 0xF4, 0x79, 
	0x11, 0x64, 0x44, 0xD4, 0xAD, 0x48, 0x18, 0x80, 0xD6, 0xFE, 
	0xC0, 0x76, 0xC8, 0x5A, 0x53, 0xE3, 0xAD, 0xC1, 0xDB, 0x1E, 
	0x6F, 0xFB, 0xAC, 0xED, 0xF1, 0xF9, 0x1E, 0xDF, 0xD7, 0xE3, 
	0xFB, 0x2C, 0x3E, 0x6E, 0xF1, 0x7D, 0x16, 0xDF, 0x67, 0xF1, 
	0x7D, 0x7D, 0x3E, 0xDF, 0xE7, 0xFB, 0x06, 0xBC, 0x3F, 0xE0, 
	0xFD, 0x21, 0xED, 0x73, 0x23, 0x7D, 0x13, 0xCC, 0x69, 0x3C, 
	0xEA, 0x95, 0x0A, 0xFA, 0xDD, 0xBD, 0xBD, 0x75, 0x37, 0xC6, 
	0x98, 0x7A, 0x84, 0xA1, 0x8B, 0x15, 0x11, 0xB4, 0x4A, 0x83, 
	0x9D, 0x9B, 0x66, 0xC2, 0xD0, 0xD8, 0xCD, 0x56, 0x89, 0x8B, 
	0x86, 0x9B, 0x4B, 0xE2, 0x6D, 0x9C, 0xDC, 0x82, 0xBF, 0x82, 
	0x89, 0x92, 0x94, 0x4D, 0x12, 0x5F, 0x30, 0xBA, 0x33, 0x37, 
	0x49, 0x69, 0xF8, 0xF8, 0xB1, 0x57, 0x1E, 0x82, 0x3B, 0x07, 
	0x3E, 0x89, 0xA5, 0x0F, 0x6E, 0x18, 0xE2, 0x79, 0x82, 0xA7, 
	0x2A, 0x3F, 0xF4, 0xE5, 0xE2, 0x0C, 0x97, 0x59, 0x22, 0x70, 
	0x80, 0xDD, 0x7C, 0x1B, 0xF3, 0xB2, 0x7C, 0x1B, 0x75, 0x32, 
	0x86, 0xFD, 0x7C, 0x91, 0xC4, 0xB7, 0x2E, 0x1A, 0xB2, 0x34, 
	0x26, 0x59, 0x06, 0x51, 0x82, 0x11, 0x83, 0x91, 0x85, 0x78, 
	0x2E, 0x9E, 0x4F, 0xC0, 0xD2, 0x1A, 0x23, 0x24, 0xB8, 0x01, 
	0x66, 0x42, 0x90, 0x27, 0xB9, 0xD1, 0x37, 0x81, 0x81, 0xF3, 
	0xF3, 0x8F, 0x3F, 0xDE, 0x8B, 0x92, 0x68, 0xDA, 0x7C, 0x7D, 
	0x79, 0x4D, 0x9D, 0xD2, 0x62, 0xA6, 0x44, 0xBD, 0x18, 0x78, 
	0x8A, 0x99, 0xEF, 0x23, 0x00, 0x00, 0x04, 0x90, 0xF3, 0x00, 
	0xF7, 0x3F, 0x71, 0x7C, 0x2B, 0x81, 0x39, 0x76, 0xC0, 0x0C, 
	0x20, 0x98, 0x21, 0x20, 0x94, 0xFA, 0x59, 0x12, 0xDC, 0x2C, 
	0xB2, 0x88, 0xA4, 0xD4, 0xC9, 0xD0, 0x0F, 0x07, 0x9B, 0x1A, 
	0x12, 0x86, 0xAB, 0x5A, 0xCA, 0x27, 0x30, 0xEA, 0xF1, 0x84, 
	0x8B, 0x0D, 0x0E, 0x19, 0xD2, 0x86, 0x83, 0xA3, 0xC0, 0x4C, 
	0xED, 0x1C, 0x4E, 0x2A, 0x1A, 0xA4, 0x20, 0x52, 0x83, 0xB0, 
	0xAF, 0xDC, 0x7B, 0x3E, 0x90, 0x87, 0x52, 0x10, 0x4F, 0x75, 
	0x09, 0x9F, 0xDE, 0x1A, 0x54, 0xB9, 0x67, 0x71, 0xE0, 0x0B, 
	0x30, 0x57, 0x16, 0x22, 0x65, 0x76, 0x18, 0x30, 0x1C, 0x21, 
	0x1D, 0xA9, 0xE0, 0x68, 0x58, 0xC9, 0x7A, 0xCF, 0xA3, 0xCA, 
	0xF7, 0x5F, 0x91, 0xDB, 0x38, 0x79, 0x40, 0x0D, 0x60, 0x22, 
	0x46, 0xB3, 0x2F, 0xB4, 0x5B, 0xD8, 0x8D, 0x01, 0x73, 0x2B, 
	0x04, 0x36, 0x73, 0x4D, 0x92, 0x34, 0x00, 0x49, 0x73, 0x1F, 
	0x63, 0xB4, 0x6F, 0x87, 0x08, 0xE4, 0xF1, 0x28, 0xCC, 0x8E, 
	0x2F, 0xDE, 0xFD, 0x10, 0xEF, 0x38, 0x77, 0xCA, 0xCE, 0xC6, 
	0x3A, 0x66, 0x9A, 0x50, 0x84, 0xEE, 0x0D, 0xE5, 0xBF, 0x6F, 
	0xF2, 0xCE, 0x0E, 0xA7, 0x1E, 0x03, 0xA5, 0xDF, 0xA6, 0xF8, 
	0xAB, 0xF1, 0x86, 0xB5, 0x16, 0x6F, 0x75, 0xFC, 0x31, 0x52, 
	0x46, 0x04, 0x85, 0x4D, 0x88, 0x3F, 0x73, 0xBD, 0x6F, 0x12, 
	0x43, 0x42, 0xC7, 0xE5, 0xCF, 0x6E, 0x90, 0x49, 0x18, 0x33, 
	0x53, 0x29, 0x85, 0x04, 0x02, 0xC8, 0xC4, 0xB4, 0x81, 0x4E, 
	0x9D, 0xAF, 0xD2, 0x0C, 0xEC, 0xF7, 0x02, 0xCE, 0xEC, 0x10, 
	0x62, 0x38, 0x1B, 0x7C, 0x1B, 0x4B, 0xA7, 0x1E, 0x35, 0x45, 
	0x7E, 0x24, 0xB2, 0x24, 0x1F, 0x4E, 0xFA, 0x39, 0xE5, 0x17, 
	0x39, 0xBA, 0x8C, 0x5C, 0x58, 0xB2, 0x66, 0x16, 0xB4, 0xE3, 
	0xF9, 0x8D, 0x59, 0x8F, 0x04, 0xF8, 0x23, 0xE2, 0xD1, 0x84, 
	0x62, 0x80, 0xEE, 0xE6, 0x46, 0x24, 0x94, 0x4A, 0x6F, 0x01, 
	0xDF, 0xD3, 0x39, 0x6D, 0x57, 0x41, 0x92, 0xC4, 0x78, 0x37, 
	0x3B, 0x7F, 0x81, 0x83, 0x1A, 0x87, 0xD2, 0x7A, 0x03, 0xB9, 
	0x43, 0x96, 0xD2, 0x71, 0xA5, 0x32, 0xF1, 0x3A, 0x88, 0x08, 
	0x1C, 0xCE, 0xD1, 0x0D, 0x11, 0x27, 0xF3, 0xAB, 0x09, 0xA4, 
	0x28, 0x70, 0xAD, 0x49, 0xE1, 0x6A, 0x52, 0xCB, 0x8B, 0x50, 
	0xD0, 0x67, 0x21, 0x08, 0x0D, 0xD6, 0xAB, 0x86, 0x6A, 0xAA, 
	0x3D, 0xD5, 0x82, 0xC0, 0x30, 0x50, 0x87, 0xE0, 0x18, 0x90, 
	0x6B, 0x00, 0x6C, 0x30, 0x5B, 0x88, 0x17, 0x10, 0x76, 0xE1, 
	0xCA, 0x03, 0x7E, 0xA8, 0x0F, 0x54, 0xF0, 0x44, 0xFD, 0x50, 
	0xC5, 0x24, 0x08, 0xC3, 0x25, 0x5A, 0x51, 0x1C, 0xC6, 0x89, 
	0x9E, 0x3F, 0x60, 0x76, 0x75, 0x75, 0x4D, 0x71, 0x5C, 0xE3, 
	0xF3, 0x78, 0xB5, 0x84, 0x73, 0x99, 0x25, 0x68, 0xB8, 0x26, 
	0x24, 0x6E, 0x44, 0x49, 0x60, 0x4F, 0x3F, 0x9F, 0x9C, 0x01, 
	0xE0, 0x57, 0xBA, 0x04, 0x57, 0x9F, 0xE2, 0x69, 0x4D, 0x9F, 
	0x8C, 0x62, 0xCC, 0xC8, 0xC7, 0x3E, 0x81, 0xEA, 0x79, 0x6B, 
	0xF0, 0xD6, 0xE4, 0x6D, 0x8F, 0xB7, 0x16, 0x6F, 0xFB, 0xBC, 
	0x1D, 0xF0, 0x76, 0x48, 0x5B, 0x83, 0xEF, 0x37, 0xF8, 0x7E, 
	0x83, 0xEF, 0x37, 0xF8, 0x7E, 0x83, 0xEF, 0x37, 0xF8, 0x7E, 
	0x83, 0xEF, 0x37, 0xD8, 0x7E, 0xB0, 0x9C, 0x53, 0xDE, 0x9E, 
	0xF1, 0xF6, 0x9C, 0xB7, 0xD4, 0xED, 0x7E, 0x3E, 0x2D, 0x95, 
	0x59, 0x9A, 0x83, 0x7B, 0xD8, 0x93, 0x51, 0x3C, 0x99, 0xC5, 
	0x53, 0x6F, 0x07, 0x1F, 0xE3, 0x99, 0x3F, 0x2E, 0x7C, 0x39, 
	0xFE, 0x83, 0x02, 0xC4, 0x96, 0xD9, 0x04, 0xDC, 0x1D, 0x98, 
	0x02, 0x79, 0x9F, 0xE6, 0xEE, 0xD3, 0xE7, 0x93, 0xBE, 0x31, 
	0x1E, 0x3A, 0x98, 0x0C, 0xD1, 0x83, 0x83, 0x25, 0x7E, 0x3F, 
	0x6D, 0x51, 0x7F, 0xBE, 0x79, 0x8F, 0x94, 0xBD, 0x1A, 0xE3, 
	0xB9, 0x75, 0x7E, 0x5A, 0x33, 0xA5, 0x2B, 0x38, 0x3C, 0x28, 
	0x86, 0xAB, 0x38, 0x0A, 0xB2, 0x38, 0xD9, 0x49, 0xC4, 0x94, 
	0xFB, 0xD3, 0xD7, 0x9F, 0x90, 0x44, 0xB0, 0x4F, 0x2E, 0x1A, 
	0x24, 0xFC, 0x2C, 0xCE, 0x20, 0x02, 0xC8, 0x18, 0x96, 0x31, 
	0x05, 0x91, 0xDF, 0xA3, 0x27, 0x42, 0xFB, 0x27, 0xFC, 0xFB, 
	0x0F, 0x65, 0xCC, 0xCF, 0x16, 0x28, 0x34, 0xC2, 0x27, 0x60, 
	0xDB, 0x41, 0x65, 0xD3, 0x41, 0xB1, 0xE5, 0xA0, 0xD8, 0x70, 
	0xC0, 0x97, 0x53, 0x71, 0x41, 0x5E, 0x4A, 0x4D, 0x1D, 0x5A, 
	0x83, 0xB7, 0x26, 0x6F, 0x7B, 0xBC, 0xB5, 0x78, 0xDB, 0xE7, 
	0xED, 0x80, 0xB7, 0x43, 0xDE, 0x1E, 0xF2, 0x56, 0xD7, 0x76, 
	0x62, 0x17, 0xE9, 0x40, 0x19, 0xFE, 0x4E, 0x43, 0xBC, 0xA8, 
	0xB3, 0x37, 0xF1, 0x1D, 0xD8, 0x46, 0x4E, 0x31, 0x3B, 0x12, 
	0xD2, 0xE0, 0xFF, 0x48, 0xCA, 0x2C, 0x91, 0x1F, 0x09, 0x3F, 
	0xC6, 0xF0, 0x11, 0x65, 0x57, 0xB9, 0xB1, 0x61, 0x8E, 0x91, 
	0x12, 0xC6, 0xF2, 0x75, 0xE0, 0xC1, 0x71, 0x8E, 0x63, 0x9F, 
	0x21, 0xDD, 0x98, 0x43, 0xBE, 0x05, 0x8F, 0x9F, 0x20, 0xEC, 
	0x41, 0x3C, 0xA3, 0x89, 0x30, 0x7F, 0x66, 0x69, 0xF0, 0xFB, 
	0xDF, 0xCF, 0x68, 0xCA, 0xEE, 0xE3, 0x86, 0xFF, 0x7C, 0xFC, 
	0x54, 0x76, 0x2E, 0xE0, 0x10, 0xC9, 0x93, 0x29, 0x96, 0x31, 
	0xBD, 0x9C, 0xCD, 0x53, 0xA1, 0xB3, 0x5E, 0xC9, 0xE5, 0x75, 
	0xC7, 0xF9, 0xC7, 0x7C, 0x15, 0xD1, 0xC0, 0x2D, 0xDD, 0xBC, 
	0x3A, 0xBB, 0x6C, 0x11, 0xE5, 0x31, 0x21, 0x40, 0x47, 0x24, 
	0xF9, 0x90, 0xFC, 0xDF, 0x92, 0x28, 0xEB, 0xDE, 0x90, 0xEC, 
	0x55, 0x48, 0xF0, 0xF1, 0xEC, 0xE1, 0xD2, 0x87, 0x15, 0x4F, 
	0xC5, 0x16, 0xA0, 0xFD, 0xB4, 0x45, 0xD4, 0x4C, 0x79, 0x04, 
	0x7A, 0x5B, 0x18, 0x31, 0x23, 0x29, 0x88, 0xA4, 0x4C, 0x21, 
	0x5D, 0x9C, 0xCA, 0xB2, 0x24, 0x98, 0xAD, 0x32, 0xD2, 0x8A, 
	0xD4, 0x6C, 0x12, 0x4D, 0x15, 0x87, 0x83, 0x26, 0x15, 0x08, 
	0x6F, 0x18, 0x04, 0x3E, 0xC7, 0x41, 0x3E, 0xC6, 0x91, 0x17, 
	0x06, 0xDE, 0x37, 0x7B, 0x9F, 0x92, 0x25, 0xCF, 0xA3, 0xFD, 
	0x76, 0xD6, 0xDE, 0x97, 0x95, 0x6E, 0x0A, 0xF7, 0xD8, 0x30, 
	0x84, 0x1B, 0x64, 0xFC, 0x09, 0xF2, 0xC4, 0x96, 0xE2, 0xEC, 
	0xAB, 0xDE, 0x2A, 0x81, 0x8B, 0x88, 0x2D, 0x2F, 0xE3, 0x00, 
	0x2F, 0x96, 0xF2, 0x93, 0x40, 0xE2, 0x12, 0xD2, 0xDF, 0xEC, 
	0x4A, 0xE0, 0x2B, 0x47, 0x30, 0x0F, 0xC2, 0xD0, 0x96, 0x5F, 
	0xF8, 0xF4, 0x8F, 0xAC, 0xC2, 0x65, 0x28, 0xFE, 0x46, 0x60, 
	0x80, 0xDD, 0x12, 0x58, 0xB7, 0x73, 0x47, 0x2D, 0xD9, 0x96, 
	0x8D, 0x4D, 0x98, 0xE3, 0xED, 0x30, 0x3D, 0xFA, 0x47, 0x80, 
	0xD9, 0xEF, 0xF7, 0x37, 0x61, 0xEA, 0x15, 0x98, 0x5E, 0xF2, 
	0x6A, 0x53, 0x0E, 0x85, 0x0E, 0x3C, 0xB8, 0xA9, 0x65, 0x84, 
	0xAB, 0x01, 0x10, 0xC3, 0x42, 0x71, 0xEB, 0x78, 0xE7, 0xBD, 
	0x6F, 0xC7, 0x2D, 0x79, 0x91, 0x65, 0x4B, 0xFB, 0xE0, 0xE0, 
	0xEE, 0xEE, 0xAE, 0x7B, 0x67, 0x76, 0xE3, 0xE4, 0x86, 0x5E, 
	0x84, 0x0E, 0xD2, 0x35, 0x1C, 0x02, 0x35, 0xD0, 0x2E, 0x42, 
	0x56, 0x1E, 0xDD, 0xF3, 0x16, 0x53, 0x83, 0x97, 0x25, 0x61, 
	0x70, 0x7B, 0x23, 0x2B, 0xAA, 0x68, 0x06, 0x30, 0x4D, 0xD1, 
	0x93, 0xAE, 0xBB, 0x5C, 0x92, 0xC8, 0x3F, 0x5F, 0x04, 0xA1, 
	0xDF, 0x12, 0xE1, 0xA4, 0xD9, 0x5B, 0xF7, 0xF6, 0x75, 0xE8, 
	0xA7, 0xA5, 0xB5, 0x90, 0x6E, 0x00, 0xA7, 0x7A, 0x72, 0xF1, 
	0xE1, 0xEA, 0xCD, 0x08, 0x92, 0x96, 0xAF, 0x23, 0xCD, 0xF9, 
	0x7A, 0xA4, 0xC3, 0x4F, 0xBB, 0xAD, 0x64, 0xC7, 0x5F, 0xF7, 
	0xF6, 0x5A, 0x14, 0x2C, 0xCA, 0x45, 0x0E, 0xA2, 0x25, 0xD6, 
	0x5E, 0x1E, 0x03, 0xDF, 0x96, 0x29, 0xA8, 0x2F, 0x72, 0xFB, 
	0xAB, 0x1A, 0xC1, 0xCD, 0x57, 0xEC, 0xA7, 0x58, 0x69, 0xB1, 
	0x65, 0x2A, 0x5F, 0x1B, 0x58, 0x5A, 0xDE, 0x3B, 0xB2, 0x0A, 
	0x47, 0xF8, 0x8A, 0xD8, 0x29, 0xA6, 0xAA, 0xE9, 0xE4, 0xEB, 
	0xF4, 0xA4, 0x78, 0xB2, 0x65, 0x90, 0x3F, 0xF0, 0x51, 0x92, 
	0xD1, 0x1E, 0xC9, 0x47, 0xB3, 0xE4, 0xE0, 0x58, 0x16, 0x08, 
	0x4F, 0xDE, 0xCC, 0x42, 0x41, 0xD1, 0xA4, 0x9B, 0x90, 0x25, 
	0x9C, 0xFB, 0xA4, 0x25, 0x7F, 0x07, 0x8D, 0xC2, 0xF2, 0xCA, 
	0xEA, 0xBB, 0x64, 0x7C, 0xC6, 0x38, 0xF4, 0x46, 0x4C, 0x60, 
	0xE9, 0xD9, 0x42, 0x6E, 0x93, 0xB6, 0x0C, 0x04, 0x66, 0x8A, 
	0xEA, 0x55, 0x79, 0xF6, 0xBA, 0x94, 0xE4, 0x2E, 0xA5, 0x78, 
	0x74, 0xE5, 0x66, 0x8B, 0xEE, 0x3C, 0x8C, 0x41, 0x36, 0x3A, 
	0xAA, 0x83, 0x12, 0xDA, 0x0D, 0x49, 0x74, 0x93, 0x2D, 0x3A, 
	0xBA, 0xD2, 0x96, 0xFF, 0x29, 0x3B, 0xD4, 0xC5, 0x46, 0x54, 
	0x26, 0x8B, 0x9E, 0xAC, 0x38, 0x95, 0x45, 0xC7, 0x3A, 0x08, 
	0x2D, 0x12, 0x50, 0x54, 0x67, 0xB5, 0x9C, 0xF7, 0x6C, 0x5A, 
	0x3E, 0xD9, 0xDA, 0x68, 0x94, 0x9D, 0xE4, 0xD7, 0x3B, 0x9B, 
	0xE5, 0xF4, 0x12, 0x10, 0x0B, 0xE2, 0x51, 0x54, 0xD0, 0x80, 
	0xA7, 0x46, 0xB4, 0x8D, 0xAA, 0x9A, 0xC8, 0xDD, 0x53, 0xF6, 
	0x43, 0x60, 0x99, 0xB2, 0xA8, 0xC2, 0xAE, 0x36, 0xD0, 0x24, 
	0xAB, 0xD9, 0xC3, 0x12, 0xF4, 0x00, 0x9E, 0x9F, 0xE1, 0xD5, 
	0x84, 0x69, 0x40, 0xEE, 0xC0, 0x78, 0x90, 0xA1, 0x82, 0x5E, 
	0x92, 0x90, 0x60, 0x0E, 0x28, 0x7B, 0xA1, 0x0B, 0x77, 0x1D, 
	0x5B, 0x26, 0x7E, 0x46, 0x75, 0xF1, 0x0C, 0x1A, 0x6F, 0xF9, 
	0xB0, 0x23, 0x9E, 0xF3, 0xEB, 0x02, 0xD1, 0x79, 0xBC, 0x7C, 
	0xF8, 0x39, 0x34, 0x41, 0x94, 0xEE, 0x88, 0xE6, 0xF2, 0xED, 
	0xB8, 0xC0, 0x73, 0x19, 0xA5, 0x24, 0xC9, 0x04, 0x4C, 0x00, 
	0x46, 0xE2, 0xD8, 0x9C, 0x3C, 0x32, 0x26, 0x23, 0x4D, 0x0D, 
	0xC0, 0xC8, 0x83, 0xA3, 0xF1, 0x1F, 0x5F, 0xAE, 0x4E, 0xFF, 
	0x3C, 0x3D, 0xFF, 0x70, 0xF9, 0xEE, 0xED, 0xD8, 0x09, 0xC0, 
	0xDE, 0x83, 0x79, 0x8B, 0x8A, 0x9A, 0x12, 0x95, 0x2E, 0xDD, 
	0x88, 0xDB, 0xFA, 0x3C, 0xF2, 0x28, 0x2D, 0x1D, 0x4A, 0x0B, 
	0xFC, 0x06, 0x9C, 0xFE, 0xCD, 0xA5, 0x58, 0x4D, 0xDB, 0x5C, 
	0x0A, 0xDA, 0x0D, 0xF6, 0xF6, 0x50, 0xC7, 0xDF, 0xBF, 0x5F, 
	0x7C, 0x5E, 0x4F, 0xC8, 0x74, 0x6F, 0x8F, 0xB5, 0xA0, 0x7B, 
	0xE1, 0x71, 0x12, 0x40, 0x4F, 0xFB, 0x6D, 0xD4, 0xD2, 0xAD, 
	0xCA, 0xE0, 0x44, 0x9B, 0x2A, 0x8A, 0x9F, 0xBC, 0x8E, 0xC6, 
	0x68, 0xD6, 0x6A, 0xA0, 0x38, 0x24, 0x4C, 0x89, 0x04, 0xF4, 
	0xFE, 0x96, 0x80, 0x53, 0x8C, 0x74, 0x6A, 0x91, 0xEE, 0x28, 
	0x0F, 0xD2, 0x75, 0x72, 0x15, 0x07, 0x88, 0x75, 0xB7, 0x99, 
	0x0E, 0x85, 0x2B, 0x08, 0x1B, 0x7E, 0x83, 0x67, 0x44, 0xDE, 
	0x46, 0x79, 0x3E, 0x09, 0x71, 0x8F, 0xDA, 0x44, 0xF5, 0xF8, 
	0x19, 0x15, 0x61, 0xEF, 0x7F, 0x57, 0x24, 0x79, 0x18, 0x83, 
	0xA9, 0xE1, 0xA9, 0x79, 0x1A, 0x86, 0x2D, 0x19, 0x3C, 0x23, 
	0x05, 0xA3, 0x06, 0x45, 0x38, 0xC9, 0x51, 0xC4, 0xDD, 0xC2, 
	0x49, 0x40, 0xFE, 0xD1, 0x24, 0x99, 0x72, 0x5F, 0x5C, 0x07, 
	0x69, 0x30, 0x0B, 0xC2, 0x20, 0x7B, 0x18, 0xC9, 0xF4, 0x19, 
	0x8E, 0x49, 0x27, 0x48, 0x13, 0x6F, 0x44, 0xD4, 0xAF, 0xD8, 
	0x64, 0x25, 0x01, 0xCC, 0x5A, 0x28, 0x01, 0x4C, 0x68, 0xDF, 
	0xBF, 0xB7, 0xD8, 0xC3, 0x68, 0x32, 0x55, 0xD4, 0x42, 0x90, 
	0x23, 0x7C, 0x42, 0x18, 0x5C, 0xE4, 0xF4, 0x71, 0x82, 0xD0, 
	0xA6, 0x27, 0xB5, 0xBE, 0x3D, 0x99, 0xAA, 0x45, 0x14, 0x71, 
	0xFE, 0x7F, 0xD8, 0x5A, 0x04, 0xBE, 0x4F, 0x22, 0xB9, 0xE4, 
	0x83, 0xFA, 0xB0, 0xC0, 0x06, 0x84, 0x91, 0x92, 0x76, 0xE4, 
	0xA4, 0xA0, 0x48, 0xE4, 0x3D, 0xC8, 0x5A, 0xCA, 0xE3, 0x5D, 
	0x12, 0x64, 0xE4, 0x7C, 0x3C, 0x6E, 0x95, 0xC4, 0x92, 0xDC, 
	0x1A, 0x60, 0x29, 0xD0, 0x95, 0x01, 0x5D, 0xD9, 0xD1, 0xC5, 
	0x67, 0x2F, 0xA7, 0x2C, 0x03, 0xCA, 0x1E, 0x19, 0x57, 0x8F, 
	0xBA, 0x3D, 0xC1, 0xAA, 0xB0, 0x8E, 0x77, 0x4B, 0x03, 0x9E, 
	0x2D, 0x78, 0xB6, 0xE0, 0xD9, 0x84, 0xE7, 0x01, 0x24, 0xBA, 
	0x83, 0xDE, 0x54, 0xED, 0x09, 0x6B, 0x2C, 0x7B, 0x32, 0xD4, 
	0xD4, 0x21, 0x3C, 0xF5, 0xED, 0x49, 0x1F, 0xEE, 0xAF, 0xF0, 
	0x34, 0x80, 0x79, 0x78, 0xD4, 0x7B, 0xF0, 0xAC, 0x6B, 0xF6, 
	0x04, 0x22, 0x3F, 0x64, 0xC5, 0xD8, 0x41, 0xE8, 0x87, 0x70, 
	0xD3, 0xC6, 0xEB, 0x9E, 0x6E, 0xD1, 0x65, 0xF0, 0x00, 0x3B, 
	0x0D, 0xBA, 0x16, 0x36, 0xF6, 0xE8, 0xD4, 0x21, 0x9F, 0x32, 
	0x70, 0x37, 0xA0, 0xC5, 0x57, 0x60, 0x06, 0x6C, 0x36, 0x61, 
	0x2F, 0x52, 0x60, 0x00, 0x69, 0x16, 0x90, 0x40, 0xC7, 0x4D, 
	0x3A, 0x6E, 0x51, 0x8A, 0x81, 0xB4, 0xFE, 0xC0, 0x62, 0xE3, 
	0x16, 0x1D, 0x87, 0x2E, 0x3C, 0x53, 0xE2, 0x60, 0xD1, 0x10, 
	0x9E, 0x01, 0x8B, 0x35, 0x04, 0x42, 0x71, 0xCD, 0x10, 0xE0, 
	0xD3, 0x8D, 0x80, 0xD1, 0x32, 0x4D, 0xE0, 0x13, 0x31, 0xF6, 
	0x20, 0xCD, 0x87, 0x95, 0x26, 0x60, 0x34, 0x20, 0xCD, 0x1F, 
	0x0C, 0x07, 0xD0, 0x01, 0x94, 0xF0, 0x00, 0x64, 0xE8, 0xD0, 
	0x41, 0x71, 0xF4, 0x20, 0xFB, 0x37, 0x70, 0x0B, 0x20, 0xB5, 
	0x34, 0x48, 0xFC, 0x7B, 0x06, 0x74, 0x86, 0x38, 0x03, 0x94, 
	0x21, 0x43, 0xE6, 0x21, 0x32, 0x0F, 0x02, 0x43, 0xA0, 0x20, 
	0x49, 0x1C, 0xB3, 0xE0, 0xB9, 0x87, 0x7C, 0x20, 0x8D, 0x16, 
	0x62, 0x80, 0x4E, 0x8F, 0x76, 0x00, 0x8E, 0x39, 0x18, 0xC0, 
	0x20, 0x76, 0x80, 0xE2, 0xA1, 0xA5, 0xAB, 0x66, 0x1F, 0xD0, 
	0xF5, 0x61, 0x0F, 0x00, 0x04, 0x0C, 0xC0, 0x7B, 0x5F, 0x67, 
	0x1D, 0xC3, 0x00, 0x74, 0x03, 0x98, 0x39, 0xE4, 0x52, 0xC7, 
	0x71, 0x10, 0x3B, 0x0A, 0x7A, 0x80, 0xAA, 0x33, 0xFA, 0xF4, 
	0x2D, 0xE1, 0x10, 0x11, 0xC2, 0xED, 0xC4, 0x40, 0x5A, 0x87, 
	0xB0, 0x68, 0x38, 0x30, 0xD4, 0xDE, 0xB0, 0x3F, 0x7D, 0x72, 
	0xD2, 0xBB, 0x20, 0xF3, 0x16, 0x60, 0x5A, 0x1E, 0x06, 0x97, 
	0xDE, 0x54, 0x79, 0xF4, 0xC9, 0xDC, 0x5D, 0x85, 0x99, 0x0D, 
	0xF1, 0x24, 0x9A, 0x14, 0xE3, 0xD3, 0x89, 0x3E, 0x55, 0x58, 
	0xC8, 0xA4, 0xA9, 0x8D, 0x9C, 0xE0, 0xE5, 0x5F, 0x7D, 0xBC, 
	0xB7, 0xF9, 0x12, 0x7D, 0xDA, 0xA9, 0x2C, 0xD7, 0xA6, 0x07, 
	0x86, 0xFA, 0x90, 0xCF, 0x1A, 0xB5, 0x59, 0x1D, 0x67, 0x93, 
	0x7B, 0x1B, 0x2E, 0x51, 0xC9, 0x03, 0xFE, 0xB2, 0x04, 0xA1, 
	0x06, 0x41, 0x5D, 0xD0, 0xDB, 0x87, 0x5D, 0xDB, 0xFA, 0xC4, 
	0x23, 0x9E, 0x48, 0x8E, 0x17, 0x24, 0x34, 0x79, 0x7F, 0xF4, 
	0x04, 0x8A, 0x54, 0x4F, 0x20, 0x40, 0x4D, 0xEA, 0xE0, 0x0F, 
	0x0C, 0x48, 0xF6, 0xB8, 0x00, 0x30, 0xA9, 0xA2, 0x79, 0x2F, 
	0xCF, 0x4D, 0x13, 0xCC, 0xB9, 0x30, 0x5C, 0x14, 0x72, 0xF1, 
	0x5C, 0x40, 0x09, 0xB6, 0x5C, 0x5D, 0x39, 0x6E, 0x6D, 0x15, 
	0x47, 0xAB, 0x86, 0xAE, 0x63, 0x6A, 0x4A, 0x4D, 0x26, 0x75, 
	0x09, 0x77, 0x2C, 0xBA, 0xE4, 0x87, 0x82, 0x01, 0x50, 0x5B, 
	0x64, 0x03, 0x10, 0xF0, 0x8C, 0x01, 0xDA, 0x9D, 0x19, 0xE4, 
	0x98, 0xDF, 0x1C, 0x4A, 0x36, 0x38, 0x11, 0x6B, 0x0D, 0xDE, 
	0xF6, 0x76, 0x67, 0xA3, 0x2E, 0x34, 0xB3, 0xC2, 0x41, 0xDF, 
	0xE8, 0x5A, 0x9C, 0x46, 0x48, 0x90, 0x72, 0xA2, 0x74, 0xC3, 
	0x6A, 0xA2, 0x42, 0xE7, 0xD8, 0x4D, 0xDE, 0x5A, 0xBB, 0x53, 
	0x41, 0xF1, 0x08, 0x88, 0xDB, 0x75, 0x73, 0x32, 0x81, 0xF3, 
	0x9C, 0x10, 0xC3, 0x2A, 0x08, 0xD1, 0x1A, 0xC5, 0x31, 0xD8, 
	0x1D, 0xB1, 0x01, 0x3A, 0x78, 0x0E, 0x6F, 0xAF, 0x33, 0x18, 
	0x16, 0x22, 0xE8, 0x19, 0xA5, 0x08, 0xAC, 0x41, 0x13, 0xE6, 
	0xC3, 0x2D, 0x98, 0x77, 0xB2, 0x5F, 0x7D, 0x30, 0xE4, 0x30, 
	0xD5, 0xBF, 0x02, 0x45, 0xEB, 0xFF, 0x0D, 0x50, 0xCC, 0x5E, 
	0x13, 0x7B, 0xC3, 0xBF, 0xC2, 0xDE, 0xE1, 0xB0, 0x01, 0xA4, 
	0xB9, 0x0D, 0x64, 0x83, 0xAE, 0xAC, 0x8A, 0xAA, 0x3A, 0x7A, 
	0x61, 0x11, 0xA5, 0xBB, 0x98, 0x85, 0x41, 0x6C, 0x61, 0x7E, 
	0x13, 0x6C, 0xDB, 0xD2, 0xD0, 0xDF, 0x76, 0x87, 0x2C, 0x92, 
	0x6F, 0x6D, 0x0B, 0x18, 0x8D, 0x12, 0x69, 0xEB, 0x60, 0x6D, 
	0x35, 0xA9, 0x0C, 0x7F, 0x9A, 0x60, 0x7C, 0x85, 0x51, 0x21, 
	0xF7, 0xD0, 0x6A, 0x08, 0x29, 0x86, 0xE0, 0xAE, 0x87, 0xBF, 
	0x84, 0xA3, 0xAD, 0x57, 0x5C, 0xB2, 0x33, 0xD0, 0x1A, 0xD0, 
	0xE8, 0x83, 0x12, 0x4D, 0xAF, 0x51, 0x42, 0xFA, 0x2F, 0xDB, 
	0x0C, 0x15, 0xD7, 0x2F, 0x49, 0x48, 0xAF, 0x49, 0x08, 0x85, 
	0xF1, 0xB7, 0x8B, 0x68, 0x58, 0x8D, 0x58, 0x86, 0xB5, 0x05, 
	0xCD, 0x8F, 0x45, 0xF4, 0x13, 0xE1, 0x5A, 0xAF, 0x3B, 0xC1, 
	0x21, 0x3D, 0x4F, 0x2C, 0xC4, 0x68, 0x15, 0x46, 0x5B, 0x5A, 
	0xED, 0xB0, 0xF7, 0xF3, 0xC2, 0xAB, 0x86, 0xC4, 0xCE, 0xA0, 
	0xDF, 0xB5, 0x36, 0x70, 0x18, 0x62, 0x28, 0x34, 0x9B, 0x98, 
	0xEA, 0xEF, 0xCE, 0x54, 0xAF, 0xA6, 0xAE, 0x81, 0xBE, 0x81, 
	0x0F, 0xD3, 0xAF, 0x42, 0x88, 0xC6, 0x2F, 0x04, 0xB8, 0xB6, 
	0x69, 0x54, 0x7D, 0xAF, 0x33, 0x34, 0x76, 0x30, 0xAE, 0xDD, 
	0x60, 0xB5, 0xAB, 0xB0, 0x9E, 0xF2, 0xBC, 0xDC, 0x1B, 0xF1, 
	0x25, 0x26, 0x5C, 0x0A, 0x96, 0x70, 0x15, 0xC0, 0x1A, 0x86, 
	0xC2, 0xEF, 0xA4, 0x45, 0x76, 0x1E, 0xE4, 0xD9, 0x79, 0x9E, 
	0xED, 0x64, 0xE4, 0xBE, 0x26, 0xA2, 0x8A, 0xA5, 0xF5, 0xCC, 
	0x76, 0x5F, 0xFB, 0x57, 0xD0, 0x81, 0x9F, 0x1C, 0x06, 0x64, 
	0x15, 0x74, 0x57, 0xC7, 0x8D, 0xBC, 0x45, 0x9C, 0xC0, 0x7D, 
	0xF8, 0x16, 0x6E, 0x1C, 0x48, 0x38, 0xAF, 0x8F, 0xB1, 0x12, 
	0xDB, 0x3C, 0x8E, 0xB2, 0xCE, 0x1D, 0xAB, 0xF9, 0xC2, 0x5D, 
	0x2F, 0x0E, 0xFD, 0x7C, 0x10, 0x8B, 0xAB, 0x30, 0x64, 0x5A, 
	0x70, 0xE1, 0x73, 0x92, 0x2E, 0xC2, 0xC2, 0x57, 0xA0, 0x70, 
	0xFD, 0x19, 0x79, 0x70, 0x29, 0x2D, 0xA5, 0x93, 0x50, 0x06, 
	0x9F, 0xA7, 0x76, 0x33, 0x55, 0x6C, 0xF7, 0x9E, 0x4D, 0x8C, 
	0x4E, 0x6A, 0xFD, 0x7A, 0x42, 0x04, 0x59, 0x53, 0x1B, 0x44, 
	0xBE, 0xC9, 0x0B, 0x27, 0x1B, 0x3F, 0x4F, 0x28, 0x2A, 0x7F, 
	0x79, 0x79, 0xB1, 0x5E, 0xFC, 0xEB, 0x2F, 0xF1, 0x3D, 0x00, 
	0xD5, 0x6E, 0x27, 0x4E, 0x7C, 0x82, 0x52, 0x62, 0x4B, 0x36, 
	0x79, 0xCE, 0xDA, 0x7A, 0x8D, 0x65, 0x27, 0x67, 0x19, 0x38, 
	0xF6, 0x83, 0x75, 0x51, 0x2D, 0x80, 0x5B, 0xF4, 0x13, 0xBD, 
	0x72, 0x13, 0x35, 0x51, 0xF8, 0xD5, 0x9C, 0x15, 0x8B, 0x4C, 
	0xB8, 0x56, 0x63, 0x95, 0x41, 0xA8, 0x0E, 0xED, 0x1F, 0x61, 
	0xF9, 0x40, 0xA2, 0xF7, 0xC3, 0x51, 0xC9, 0x01, 0xA4, 0x34, 
	0xCB, 0x7B, 0x47, 0x50, 0x8E, 0x1D, 0xD1, 0xE2, 0x90, 0xB3, 
	0x26, 0x49, 0x16, 0x78, 0x6E, 0xD8, 0x71, 0xC3, 0xE0, 0x26, 
	0xB2, 0xB3, 0x78, 0xE9, 0xC8, 0xC7, 0x2F, 0xF6, 0xDB, 0x2D, 
	0xA0, 0x4F, 0x69, 0xEF, 0x4B, 0x7B, 0xD1, 0x2C, 0x5D, 0x3A, 
	0xD2, 0xD1, 0x01, 0x82, 0x3D, 0x96, 0x8E, 0x80, 0x30, 0x29, 
	0xF0, 0x47, 0x72, 0x38, 0x0B, 0xFD, 0x2F, 0xAC, 0x7A, 0x2B, 
	0xD1, 0x02, 0x09, 0x0E, 0xC9, 0xC7, 0xFB, 0x6D, 0x5A, 0x5B, 
	0x2B, 0x6C, 0x52, 0x69, 0xCB, 0x47, 0x07, 0xB0, 0xE7, 0x58, 
	0x56, 0xE3, 0x28, 0x0C, 0x22, 0xC2, 0xCC, 0x30, 0x1D, 0x6D, 
	0x54, 0x00, 0x01, 0x20, 0x96, 0xD3, 0x78, 0xFD, 0x2F, 0xEF, 
	0xB1, 0x92, 0x01, 0xD3, 0x3F, 0x2B, 0x18, 0x14, 0xA0, 0xF3, 
	0xCA, 0xE0, 0x3C, 0x8C, 0xDD, 0xCC, 0xA6, 0xEF, 0x0D, 0xE5, 
	0x27, 0x5E, 0x9A, 0x48, 0x15, 0x35, 0xAD, 0x16, 0xAB, 0xE5, 
	0x38, 0xFA, 0x46, 0x1E, 0x56, 0x58, 0xAC, 0xA7, 0x17, 0xD9, 
	0x7D, 0xCA, 0x00, 0x2D, 0x50, 0xEC, 0x2B, 0x82, 0xFC, 0x28, 
	0xF9, 0xD9, 0x22, 0x48, 0xBB, 0x14, 0x9D, 0xE2, 0xC8, 0xCA, 
	0x13, 0x80, 0x4C, 0x54, 0xB7, 0xBC, 0x0B, 0x87, 0xE0, 0x5C, 
	0xE1, 0x51, 0xA5, 0x0E, 0xE7, 0x84, 0xB9, 0x87, 0xB9, 0xA2, 
	0x02, 0x8B, 0xDA, 0xD1, 0xFC, 0x5C, 0x56, 0x69, 0x9D, 0x13, 
	0x2B, 0x87, 0x19, 0xAD, 0x1C, 0x86, 0x8C, 0x58, 0x84, 0xCC, 
	0xAE, 0xE2, 0x99, 0x1A, 0x72, 0x5C, 0x14, 0xC2, 0x2C, 0x11, 
	0x01, 0x78, 0x61, 0x42, 0x0B, 0x25, 0xE2, 0x5D, 0x9C, 0x52, 
	0x00, 0xCE, 0xEE, 0x33, 0x94, 0x29, 0xAD, 0x1F, 0x94, 0x05, 
	0xD5, 0xD5, 0xAD, 0x5C, 0x56, 0x53, 0xA1, 0xF3, 0xA4, 0xA8, 
	0x71, 0xDD, 0xBA, 0xD2, 0xEC, 0x25, 0x0A, 0x0D, 0x39, 0x43, 
	0xAE, 0x74, 0xED, 0x38, 0xA4, 0xAC, 0x00, 0x19, 0xBE, 0x1A, 
	0x91, 0x3B, 0xE9, 0xDD, 0x12, 0x0B, 0x03, 0x2D, 0x56, 0x42, 
	0x4C, 0x6D, 0x09, 0xE8, 0x56, 0x43, 0x55, 0x53, 0x2B, 0xDC, 
	0x8F, 0x46, 0xE1, 0x89, 0x6E, 0x6B, 0x4A, 0x43, 0xE9, 0xB2, 
	0xAC, 0x11, 0xC7, 0xD5, 0x3D, 0xB4, 0xE2, 0x45, 0x54, 0x9F, 
	0xB7, 0x31, 0xB0, 0xB1, 0xA1, 0x31, 0x6F, 0x81, 0xEF, 0x70, 
	0xA9, 0x9F, 0xE5, 0x50, 0x98, 0xF2, 0x80, 0xEC, 0x7D, 0x88, 
	0x83, 0x15, 0x35, 0x39, 0xA2, 0x68, 0x82, 0x25, 0xBE, 0x81, 
	0x01, 0xD8, 0x85, 0xA7, 0x88, 0xB2, 0xCC, 0x92, 0x30, 0xE7, 
	0x5A, 0xF4, 0x1D, 0x99, 0x7F, 0x21, 0x18, 0x92, 0x44, 0xBA, 
	0xBC, 0x2E, 0xBE, 0x1C, 0x91, 0x19, 0x85, 0xEE, 0x66, 0x59, 
	0xF9, 0xF8, 0xF2, 0xDA, 0x06, 0xD7, 0x98, 0x1D, 0xB3, 0x0A, 
	0xB3, 0x8A, 0x22, 0xEC, 0x95, 0x12, 0x6C, 0xA8, 0x73, 0x23, 
	0xEA, 0xCB, 0x6B, 0xD4, 0x3E, 0x57, 0x8D, 0x30, 0x50, 0xA9, 
	0x74, 0x5B, 0x62, 0xA1, 0x1B, 0x17, 0x9D, 0xCF, 0x6F, 0x20, 
	0x4C, 0x4D, 0xC2, 0xE9, 0x46, 0x7D, 0xDB, 0x3C, 0x0E, 0x4F, 
	0x64, 0xA9, 0x2B, 0x01, 0x67, 0xB2, 0x53, 0x2B, 0xC2, 0xE7, 
	0xD5, 0x6F, 0xFE, 0x73, 0x3C, 0x5E, 0xCD, 0x22, 0xFC, 0x9A, 
	0xC2, 0x4D, 0xBF, 0xD9, 0x3F, 0x45, 0x78, 0x4A, 0x37, 0x0A, 
	0x84, 0x0B, 0x03, 0x3F, 0x26, 0x5C, 0xDF, 0x8D, 0x70, 0xD4, 
	0x20, 0xAB, 0x2C, 0xB1, 0x4F, 0x8F, 0xC5, 0xE2, 0x12, 0xC4, 
	0x39, 0x36, 0x88, 0xDE, 0xAF, 0x4D, 0x8F, 0x47, 0x60, 0x5C, 
	0xE2, 0xC0, 0xD1, 0x48, 0xEF, 0x55, 0x3C, 0x90, 0x46, 0x47, 
	0x51, 0xBD, 0xE5, 0x6A, 0x38, 0xED, 0xB8, 0x4A, 0xC5, 0x70, 
	0x2A, 0xB2, 0x0B, 0x6B, 0x5F, 0x45, 0x42, 0x3C, 0x2A, 0xFB, 
	0x2C, 0x22, 0x79, 0x0B, 0xE2, 0x7D, 0x9B, 0xC5, 0xF7, 0x18, 
	0xD6, 0x78, 0xE1, 0x93, 0x59, 0x26, 0x2C, 0xBC, 0xBC, 0x9E, 
	0x15, 0x81, 0x65, 0xA3, 0x4E, 0xC7, 0x62, 0x0B, 0xDD, 0x4E, 
	0xFC, 0x93, 0x7D, 0x5E, 0x8C, 0xDC, 0xB7, 0xF7, 0x59, 0xFD, 
	0x6E, 0x1F, 0x2C, 0x19, 0xE3, 0x42, 0xBE, 0x02, 0x89, 0x46, 
	0x01, 0x62, 0x5D, 0xB7, 0x78, 0xC4, 0xC2, 0x86, 0x48, 0xFF, 
	0xBA, 0xEE, 0xD5, 0x25, 0x11, 0xB9, 0x6E, 0x7C, 0xF6, 0x21, 
	0xB8, 0x2D, 0x05, 0x34, 0x0A, 0x77, 0x66, 0x61, 0xEC, 0x7D, 
	0x73, 0xA4, 0x92, 0x30, 0xF4, 0xEC, 0xD6, 0x16, 0x64, 0x27, 
	0x72, 0xBA, 0x88, 0xEF, 0x40, 0x4B, 0xBC, 0xC6, 0x08, 0x41, 
	0x9D, 0x52, 0xC9, 0x54, 0xC2, 0x96, 0xA1, 0x7E, 0xF4, 0x91, 
	0x20, 0x63, 0x63, 0xAA, 0x50, 0x95, 0x56, 0x6C, 0x51, 0xDA, 
	0x30, 0xB5, 0xF5, 0xA6, 0xA9, 0x51, 0xEA, 0xBF, 0xE4, 0xD5, 
	0xE6, 0xB0, 0xD4, 0x40, 0x65, 0x74, 0xBB, 0xD1, 0x95, 0xA4, 
	0x87, 0x6D, 0x9D, 0x5A, 0xDD, 0x7A, 0xAB, 0xD5, 0xB1, 0x32, 
	0x50, 0x95, 0xC6, 0xD6, 0x98, 0x24, 0x81, 0x1B, 0x2A, 0x32, 
	0x3B, 0x73, 0xD7, 0x62, 0x75, 0xBA, 0xAC, 0x9A, 0x47, 0x79, 
	0x42, 0xB5, 0xA5, 0x4A, 0x1E, 0x51, 0xF9, 0x24, 0xD5, 0x77, 
	0x43, 0xDA, 0x6F, 0x23, 0xD8, 0x97, 0x54, 0xFD, 0x73, 0x81, 
	0x2E, 0xE8, 0xB0, 0x64, 0xAE, 0x21, 0x90, 0x93, 0x30, 0xBC, 
	0x09, 0xBC, 0x2F, 0xC5, 0x0B, 0x27, 0xFA, 0x1B, 0xE5, 0x5E, 
	0xB8, 0x65, 0x36, 0x8F, 0x9D, 0xB6, 0x8C, 0x35, 0x5F, 0x3A, 
	0x3B, 0x9D, 0xD0, 0x69, 0x6C, 0x22, 0x6C, 0xB4, 0xE9, 0xA8, 
	0xF5, 0xCC, 0xE4, 0x9E, 0x6E, 0x29, 0xDF, 0x85, 0x93, 0xF0, 
	0x58, 0x3B, 0xD1, 0xFB, 0x10, 0xE3, 0x1D, 0x39, 0x3F, 0xB7, 
	0xBC, 0xFC, 0x55, 0x92, 0x70, 0x4C, 0xB8, 0xF8, 0x4D, 0x91, 
	0x06, 0x7F, 0x9F, 0x7D, 0x2F, 0x11, 0x41, 0x4F, 0xEF, 0x57, 
	0x06, 0xD0, 0xCC, 0x34, 0x5B, 0x57, 0x1A, 0x60, 0xC6, 0x89, 
	0xD4, 0x4A, 0xF1, 0xF3, 0x31, 0xFC, 0x8E, 0xE7, 0x17, 0x41, 
	0xD3, 0xD3, 0x89, 0x1E, 0x9E, 0x41, 0xB3, 0x8C, 0x41, 0x7F, 
	0xDB, 0x45, 0xDC, 0x30, 0x99, 0x0B, 0x21, 0x50, 0x1C, 0x0A, 
	0x2F, 0xA6, 0xC4, 0x62, 0x3E, 0xD6, 0x75, 0x7D, 0xBF, 0x25, 
	0xD2, 0x0F, 0xE7, 0x97, 0x2C, 0xBC, 0x32, 0x72, 0x47, 0x13, 
	0x10, 0x10, 0xA4, 0x2F, 0xE0, 0x08, 0x69, 0x2D, 0xD0, 0xA5, 
	0xE0, 0x14, 0xD5, 0x2C, 0x83, 0xFF, 0x3F, 0x8A, 0x49, 0x3A, 
	0x15, 0x33, 0x0D, 0xE6, 0x79, 0x7C, 0x02, 0x42, 0x2B, 0xEA, 
	0x0B, 0x13, 0x23, 0x82, 0x4F, 0xDF, 0xBF, 0x6B, 0xD4, 0x11, 
	0x2B, 0xD3, 0xCC, 0x5A, 0xFD, 0xD1, 0x0F, 0x85, 0x57, 0x7D, 
	0x59, 0x44, 0xA5, 0xA7, 0x14, 0x7E, 0x9D, 0x52, 0x4C, 0xD5, 
	0x79, 0x7D, 0xCA, 0x8F, 0x7F, 0xC7, 0xC7, 0xD7, 0xBB, 0xA3, 
	0x89, 0xB8, 0x56, 0x0D, 0xA7, 0x54, 0xA3, 0x81, 0xA8, 0xD1, 
	0x72, 0x01, 0x5C, 0x74, 0x64, 0x8C, 0x3C, 0x55, 0x6A, 0x21, 
	0x3C, 0x8B, 0x30, 0x58, 0xB6, 0x04, 0x8A, 0xF7, 0x41, 0x85, 
	0x7E, 0xF2, 0x29, 0x1C, 0x7F, 0x66, 0x1E, 0xA8, 0xBA, 0x34, 
	0x12, 0x62, 0x61, 0x59, 0x0D, 0xB6, 0x27, 0x0F, 0x74, 0x4B, 
	0xED, 0x8D, 0x54, 0x44, 0xDF, 0x48, 0x29, 0xA2, 0x63, 0xE3, 
	0xA2, 0x06, 0xC7, 0x6E, 0x56, 0xBF, 0xA2, 0x7A, 0xA3, 0xA4, 
	0xCB, 0x94, 0x9E, 0x4E, 0x92, 0x2E, 0x33, 0x27, 0xE2, 0x5F, 
	0x46, 0x3E, 0xB9, 0x9F, 0x32, 0x8F, 0xC9, 0xEF, 0x63, 0x5F, 
	0x00, 0xD5, 0xB3, 0x6F, 0x92, 0x8A, 0xE1, 0xFC, 0xCD, 0x8C, 
	0x28, 0x5F, 0x71, 0x12, 0xBA, 0x1B, 0xF3, 0xE8, 0xC7, 0xA0, 
	0x32, 0x0F, 0x15, 0xDF, 0x2A, 0x48, 0x6E, 0x0A, 0x0A, 0xCA, 
	0xDE, 0xDE, 0xF3, 0xF3, 0x55, 0x47, 0x57, 0xEB, 0x5A, 0xF6, 
	0xE0, 0xC7, 0x61, 0x2E, 0xB4, 0x25, 0xE6, 0xB5, 0x22, 0xB8, 
	0x34, 0x80, 0x0B, 0xEC, 0xED, 0xFD, 0x16, 0x94, 0x31, 0x6E, 
	0x6F, 0x8F, 0x1A, 0xC0, 0xEE, 0xAF, 0x0B, 0x29, 0x98, 0x1F, 
	0xBD, 0x32, 0x54, 0xCB, 0x17, 0x85, 0x6A, 0xC5, 0x28, 0x50, 
	0x12, 0x2A, 0xD2, 0x5A, 0xD7, 0x2E, 0x5B, 0x00, 0x71, 0x0B, 
	0x9C, 0xF6, 0x51, 0x7C, 0xC3, 0xB9, 0xF1, 0x96, 0x35, 0xA9, 
	0x26, 0x0E, 0x42, 0x76, 0xB2, 0xCD, 0x69, 0xC1, 0x21, 0xBD, 
	0xAA, 0x97, 0xB0, 0xD7, 0x97, 0xD1, 0xC8, 0x70, 0x22, 0xC1, 
	0x89, 0xE1, 0xA2, 0x9B, 0x6F, 0x8B, 0x36, 0xFC, 0x38, 0x40, 
	0x49, 0x33, 0xD2, 0xC2, 0xE6, 0x28, 0x05, 0x94, 0xD6, 0xB4, 
	0x96, 0xD4, 0x63, 0xD5, 0xF6, 0x25, 0xCF, 0x9F, 0x09, 0x49, 
	0x19, 0xFD, 0x47, 0x65, 0xD4, 0x77, 0x9A, 0x5E, 0xD1, 0xE7, 
	0xB7, 0xAC, 0x90, 0xA5, 0x1F, 0xFE, 0xE8, 0x34, 0x49, 0xDC, 
	0x87, 0x6E, 0x90, 0xD2, 0x76, 0x93, 0x23, 0xB8, 0x76, 0xF8, 
	0x27, 0xF5, 0x51, 0x10, 0x91, 0x5D, 0x1F, 0x53, 0xD7, 0xA3, 
	0x4E, 0xDC, 0xD1, 0xF1, 0xE0, 0xC4, 0x7B, 0x33, 0x7E, 0x5C, 
	0x3D, 0x1A, 0xA1, 0x09, 0xC4, 0x73, 0x29, 0x2E, 0x02, 0xE3, 
	0x05, 0xE8, 0xE0, 0xE2, 0xA8, 0xBE, 0x37, 0x17, 0xEB, 0x05, 
	0xCB, 0x2B, 0xC2, 0x5A, 0xC0, 0xA9, 0xE2, 0xBE, 0x98, 0xAA, 
	0x17, 0x3F, 0x3A, 0x49, 0x92, 0x5A, 0x0F, 0x9D, 0x6F, 0x74, 
	0xC1, 0xEF, 0x39, 0x98, 0x37, 0x50, 0x45, 0x7D, 0x1E, 0x41, 
	0xD4, 0xDB, 0x20, 0x76, 0x03, 0xE1, 0x16, 0x6A, 0x3B, 0x3A, 
	0x4B, 0xB5, 0x76, 0x5D, 0xBC, 0x29, 0xC5, 0xED, 0x6B, 0x69, 
	0x64, 0x85, 0x1C, 0x47, 0x5D, 0x62, 0x2D, 0x68, 0xDE, 0xD2, 
	0x8E, 0xE3, 0xBD, 0x3D, 0xFE, 0xED, 0xEB, 0x64, 0x3D, 0xAD, 
	0x89, 0xB3, 0x9C, 0x78, 0x4E, 0x90, 0x9F, 0xDB, 0xE5, 0xBA, 
	0xBF, 0x2C, 0x44, 0x20, 0xEC, 0xA2, 0x4D, 0x95, 0x1D, 0x1F, 
	0x6B, 0xDF, 0xBF, 0xFB, 0x0D, 0x92, 0x80, 0xB4, 0x7E, 0x63, 
	0x4C, 0x17, 0x49, 0x6F, 0xB6, 0x2B, 0x64, 0x68, 0xD4, 0x6A, 
	0x98, 0xD3, 0xA7, 0x76, 0xAC, 0x6C, 0xE1, 0xEC, 0xE2, 0xEF, 
	0xE2, 0xC6, 0x17, 0xE8, 0x8B, 0x8F, 0x47, 0xDA, 0x89, 0x61, 
	0xEB, 0xDB, 0x0D, 0x16, 0xCC, 0x7D, 0x57, 0x93, 0x5D, 0xFE, 
	0x12, 0x7D, 0xCB, 0x9C, 0xBE, 0x76, 0xFB, 0xE9, 0x89, 0x96, 
	0x4F, 0x9F, 0xC4, 0x6F, 0x9B, 0xF2, 0x37, 0xFD, 0x8F, 0x79, 
	0x4D, 0x81, 0x7E, 0x80, 0x24, 0x46, 0xBF, 0x59, 0xEC, 0x3F, 
	0x3C, 0xD2, 0xD2, 0xD1, 0xDC, 0xBD, 0x0D, 0xC2, 0x07, 0xFB, 
	0x14, 0xD3, 0x63, 0xF5, 0x02, 0x62, 0x0D, 0xC1, 0xDA, 0x91, 
	0x9A, 0xBA, 0x51, 0xDA, 0x49, 0x21, 0x69, 0x9E, 0x3B, 0x9D, 
	0x3B, 0x32, 0xFB, 0x16, 0x64, 0x9D, 0x65, 0x82, 0x35, 0x30, 
	0x0F, 0xBF, 0x80, 0xEE, 0xB8, 0xFE, 0xD7, 0x55, 0x9A, 0xD9, 
	0xE4, 0xDE, 0xF5, 0x32, 0xE7, 0x09, 0xCB, 0x68, 0x95, 0xFC, 
	0x77, 0x61, 0x4A, 0x8F, 0xD2, 0x8C, 0x96, 0xCB, 0x6C, 0xE9, 
	0x85, 0x49, 0xFF, 0x48, 0x69, 0x1C, 0x06, 0xBE, 0xA4, 0x43, 
	0x56, 0x2F, 0x2D, 0x21, 0x9F, 0x02, 0xE7, 0xB2, 0x2D, 0xEC, 
	0xDC, 0xBA, 0xC9, 0x4D, 0x10, 0xD9, 0x92, 0x61, 0x49, 0x9A, 
	0x04, 0xFF, 0x1C, 0x09, 0x3F, 0x72, 0xBF, 0x49, 0xE2, 0x55, 
	0xE4, 0x33, 0x74, 0xF6, 0x8B, 0xD9, 0x21, 0xFE, 0x75, 0x38, 
	0xCC, 0x4E, 0xE2, 0xFA, 0xC1, 0x2A, 0x65, 0xDB, 0x37, 0xB1, 
	0x77, 0xC3, 0x99, 0xF4, 0x98, 0x63, 0x07, 0x7C, 0x1C, 0x33, 
	0x7E, 0xDC, 0x07, 0x7F, 0xEA, 0x40, 0x4C, 0x04, 0xB2, 0x81, 
	0x51, 0x7A, 0x41, 0xE8, 0x9F, 0x92, 0x56, 0x20, 0x8D, 0xFE, 
	0x2D, 0x09, 0xCE, 0x07, 0xB6, 0x5C, 0xC4, 0x58, 0x65, 0x95, 
	0x96, 0xE0, 0x3C, 0x82, 0x9F, 0x3B, 0xC2, 0xCE, 0x20, 0x62, 
	0x85, 0x45, 0xD8, 0x8C, 0xD7, 0x9B, 0x06, 0xDA, 0xF1, 0x7A, 
	0x8D, 0xC2, 0xDB, 0x10, 0x81, 0xEB, 0x7B, 0x73, 0x7F, 0xD8, 
	0xC8, 0xEF, 0xFC, 0x1C, 0x76, 0xB0, 0x9A, 0x59, 0x48, 0xE6, 
	0x99, 0x53, 0x8A, 0xFE, 0x90, 0xFE, 0x69, 0x12, 0xBD, 0xD1, 
	0xC8, 0x76, 0xC1, 0x75, 0x83, 0x8C, 0x9A, 0x88, 0x0D, 0x13, 
	0xC0, 0xEC, 0x85, 0xC4, 0x4D, 0x38, 0xE6, 0x27, 0xA9, 0x91, 
	0xBC, 0x45, 0x0F, 0xD6, 0x15, 0x8A, 0xA6, 0xD0, 0x36, 0x17, 
	0xBE, 0x40, 0x13, 0x2E, 0xD6, 0x75, 0xB2, 0x78, 0x69, 0xE3, 
	0x47, 0xB4, 0x28, 0xA7, 0xCD, 0xC5, 0x0B, 0x03, 0x79, 0x2E, 
	0x6A, 0xA1, 0x52, 0x0F, 0xD7, 0x89, 0x32, 0x97, 0x0A, 0xA1, 
	0xE7, 0x68, 0x35, 0xB0, 0x2F, 0x80, 0x87, 0x16, 0x96, 0x4B, 
	0x41, 0xB7, 0x9A, 0xC5, 0xA0, 0x91, 0x9E, 0x3F, 0xEB, 0x39, 
	0x12, 0xEB, 0xDE, 0xE1, 0x7F, 0x39, 0xDB, 0xD5, 0xF8, 0xD2, 
	0xB3, 0x55, 0x26, 0x3D, 0x2E, 0xF9, 0xFF, 0x29, 0xB2, 0xA5, 
	0x79, 0x70, 0x4F, 0x7C, 0xDC, 0x8C, 0x5F, 0x55, 0xDB, 0x12, 
	0x25, 0x93, 0x56, 0x36, 0xF9, 0x73, 0x83, 0xE9, 0xF5, 0xCE, 
	0x4F, 0x5F, 0x5B, 0x5A, 0x8E, 0x5D, 0xE2, 0xE8, 0x0B, 0x43, 
	0xD4, 0x61, 0x9F, 0xC4, 0x28, 0x6F, 0xE2, 0x97, 0x8E, 0xF9, 
	0xF8, 0x9F, 0x49, 0x5D, 0x46, 0x41, 0x14, 0x47, 0xB0, 0x7D, 
	0x8B, 0x95, 0xE6, 0xD2, 0xE9, 0x01, 0x4C, 0xAA, 0x18, 0xFE, 
	0x8D, 0xAE, 0xC4, 0xBF, 0xD1, 0xAD, 0xB3, 0x8D, 0x0B, 0x9B, 
	0xEC, 0x16, 0xBF, 0xA4, 0x7B, 0x14, 0x6A, 0x0F, 0xAC, 0xAE, 
	0x00, 0x9A, 0xEB, 0x12, 0x3F, 0x7B, 0x14, 0x0A, 0xBA, 0x4E, 
	0xC9, 0x30, 0xB0, 0x3A, 0x9F, 0xCF, 0x9D, 0x9C, 0x31, 0x4D, 
	0x32, 0x40, 0x43, 0x86, 0xC3, 0x49, 0xCA, 0xBB, 0x4D, 0xEE, 
	0xCA, 0xEC, 0x5B, 0xF0, 0x6D, 0x66, 0xE8, 0x4D, 0xAA, 0xE4, 
	0x7E, 0xD3, 0xE4, 0x36, 0x4B, 0xE9, 0x31, 0x17, 0x79, 0xBE, 
	0x5F, 0xB0, 0x28, 0xBD, 0xD9, 0x43, 0xFF, 0x7D, 0x4B, 0xFC, 
	0xC0, 0x95, 0x68, 0x34, 0x04, 0x13, 0xE4, 0xFA, 0x2E, 0xA4, 
	0x8B, 0xC2, 0x96, 0x7E, 0x0B, 0x6E, 0x97, 0x71, 0x92, 0xB9, 
	0x11, 0x04, 0xC7, 0x27, 0x99, 0xDD, 0x51, 0xF1, 0x93, 0xB4, 
	0x8E, 0xCE, 0x3E, 0x4D, 0xC3, 0x7C, 0x88, 0x7E, 0x96, 0xE5, 
	0xFC, 0x17, 0x39, 0xBB, 0xA6, 0x56, 0xA1, 0x40, 0x00, 0x00, 
};

	// Default Controller Configuration (len=144)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x79, 0x0B, 0x0A, 0x61, 0x02, 0x00, 0x01, 0x00, 0x71, 
	0x02, 0x00, 0x06, 0x00, 0x0B, 0x0A, 0x61, 0x02, 0x00, 0x02, 
	0x00, 0x71, 0x02, 0x00, 0x07, 0x00, 0x0B, 0x0A, 0x61, 0x02, 
	0x00, 0x03, 0x00, 0x71, 0x02, 0x00, 0x08, 0x00, 0x0B, 0x0A, 
	0x61, 0x02, 0x00, 0x04, 0x00, 0x71, 0x02, 0x00, 0x09, 0x00, 
	0x0B, 0x0A, 0x61, 0x02, 0x00, 0x05, 0x00, 0x71, 0x02, 0x00, 
	0x0A, 0x00, 0x07, 0x06, 0x21, 0x0E, 0x00, 0x31, 0x0F, 0x00, 
	0x0B, 0x0A, 0x61, 0x04, 0x00, 0x00, 0x00, 0x71, 0x04, 0x00, 
	0x01, 0x00, 0x0B, 0x0A, 0x61, 0x01, 0x00, 0x18, 0x00, 0x71, 
	0x01, 0x00, 0x19, 0x00, 0x09, 0x08, 0x41, 0x07, 0x00, 0x04, 
	0x51, 0x07, 0x01, 0x04, 0x05, 0x04, 0x4F, 0x03, 0x01, 0x01, 
	0x03, 0x02, 0x0F, 0x0A, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0xFF, 0xC0, 0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 
	0x00, 0x0A, 0x01, 0xC0, 0xA8, 0x0A, 0xF0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
};

#endif


#define SK_HWEN_STDOLEDDISPLAY 1
SkaarhojBI8 buttons;