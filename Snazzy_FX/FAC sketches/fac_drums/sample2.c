#include "sample2.h"

prog_uchar sample2_data[sample2_size] = {
	129, 128, 124, 126, 124, 124, 124, 123, 114, 104, 98, 108, 86, 91, 92, 68, 
	67, 27, 39, 87, 115, 79, 49, 49, 90, 96, 79, 84, 108, 75, 112, 110, 
	101, 132, 123, 129, 147, 155, 138, 171, 179, 157, 187, 192, 200, 193, 207, 231, 
	213, 250, 232, 246, 252, 245, 251, 248, 252, 251, 252, 252, 253, 252, 253, 252, 
	254, 253, 255, 253, 255, 254, 255, 254, 249, 250, 249, 232, 230, 234, 208, 220, 
	198, 203, 181, 182, 167, 156, 161, 129, 134, 119, 118, 90, 98, 94, 59, 54, 
	65, 51, 26, 32, 27, 18, 18, 21, 19, 19, 18, 17, 17, 17, 16, 16, 
	16, 15, 15, 16, 14, 15, 14, 14, 13, 13, 12, 14, 11, 12, 11, 12, 
	10, 10, 10, 10, 9, 9, 8, 9, 8, 7, 8, 7, 8, 14, 17, 36, 
	39, 39, 71, 58, 70, 99, 81, 128, 97, 135, 151, 134, 161, 172, 174, 183, 
	201, 197, 214, 214, 234, 226, 236, 239, 235, 237, 236, 238, 237, 239, 237, 239, 
	239, 239, 239, 239, 240, 241, 240, 241, 240, 242, 241, 241, 243, 243, 242, 244, 
	242, 245, 243, 245, 244, 246, 245, 245, 247, 246, 247, 245, 241, 239, 231, 218, 
	211, 215, 191, 193, 183, 171, 170, 144, 159, 145, 125, 122, 124, 109, 97, 100, 
	91, 76, 79, 57, 72, 55, 38, 58, 32, 33, 38, 20, 34, 21, 21, 23, 
	23, 20, 23, 20, 22, 20, 21, 20, 20, 19, 20, 19, 18, 19, 19, 17, 
	18, 18, 17, 17, 17, 15, 17, 15, 15, 16, 15, 14, 15, 13, 15, 12, 
	16, 26, 22, 26, 37, 31, 41, 50, 35, 60, 51, 66, 63, 70, 76, 82, 
	82, 89, 106, 95, 101, 126, 118, 128, 133, 133, 155, 142, 165, 158, 178, 173, 
	180, 190, 194, 198, 204, 210, 211, 221, 225, 225, 223, 226, 226, 227, 225, 228, 
	227, 227, 228, 229, 228, 228, 230, 228, 230, 230, 230, 231, 231, 230, 233, 231, 
	232, 232, 233, 233, 233, 233, 234, 234, 234, 235, 235, 236, 235, 236, 236, 237, 
	237, 236, 239, 236, 239, 238, 239, 239, 239, 239, 241, 232, 237, 232, 221, 230, 
	220, 213, 213, 212, 203, 200, 191, 194, 190, 178, 176, 178, 160, 166, 160, 148, 
	149, 145, 129, 135, 132, 122, 121, 120, 117, 113, 109, 105, 101, 94, 90, 85, 
	80, 74, 71, 64, 62, 55, 52, 48, 46, 42, 42, 40, 40, 39, 39, 39, 
	38, 39, 39, 38, 37, 38, 38, 36, 37, 36, 36, 35, 36, 35, 34, 35, 
	34, 33, 34, 33, 32, 33, 31, 31, 33, 29, 31, 30, 30, 29, 30, 28, 
	29, 28, 28, 27, 28, 26, 28, 37, 48, 46, 48, 46, 46, 46, 47, 47, 
	46, 49, 49, 51, 55, 56, 58, 61, 64, 66, 68, 70, 74, 75, 78, 80, 
	83, 85, 89, 89, 94, 94, 98, 101, 103, 105, 108, 111, 113, 115, 118, 121, 
	123, 126, 128, 130, 132, 136, 137, 139, 144, 144, 148, 149, 154, 154, 158, 159, 
	162, 165, 166, 168, 172, 173, 176, 178, 180, 182, 185, 186, 189, 190, 193, 195, 
	195, 199, 199, 200, 202, 200, 203, 202, 202, 203, 203, 204, 203, 204, 204, 205, 
	204, 205, 206, 206, 205, 208, 206, 207, 208, 208, 207, 209, 209, 209, 210, 209, 
	210, 210, 211, 211, 211, 213, 211, 212, 213, 213, 213, 214, 213, 214, 215, 214, 
	215, 215, 216, 216, 216, 216, 216, 217, 216, 218, 215, 217, 214, 213, 212, 211, 
	208, 206, 205, 203, 201, 198, 197, 193, 192, 190, 187, 185, 181, 181, 176, 175, 
	172, 170, 166, 165, 161, 159, 156, 155, 149, 149, 145, 143, 140, 138, 135, 131, 
	131, 127, 126, 121, 120, 118, 114, 113, 110, 108, 106, 102, 102, 97, 97, 95, 
	92, 89, 88, 86, 84, 81, 80, 78, 75, 75, 71, 70, 69, 66, 65, 65, 
	61, 61, 61, 59, 59, 59, 58, 59, 57, 57, 58, 56, 57, 56, 55, 55, 
	55, 54, 54, 54, 53, 53, 53, 52, 52, 51, 51, 51, 50, 51, 49, 50, 
	49, 49, 48, 48, 48, 48, 46, 47, 46, 47, 46, 45, 46, 44, 45, 44, 
	44, 44, 44, 42, 44, 42, 43, 41, 43, 41, 43, 41, 43, 42, 43, 42, 
	44, 43, 43, 45, 44, 47, 48, 50, 50, 53, 54, 56, 58, 59, 62, 64, 
	65, 67, 70, 71, 74, 75, 78, 79, 83, 84, 86, 90, 91, 93, 97, 98, 
	100, 104, 105, 108, 111, 113, 116, 119, 120, 124, 126, 128, 130, 132, 135, 136, 
	141, 141, 145, 148, 149, 152, 154, 158, 158, 161, 165, 166, 168, 172, 172, 176, 
	177, 180, 182, 185, 186, 188, 191, 192, 194, 197, 196, 198, 198, 199, 200, 199, 
	201, 199, 202, 201, 201, 203, 202, 203, 203, 204, 204, 204, 205, 205, 205, 207, 
	206, 207, 207, 207, 208, 208, 209, 209, 209, 210, 209, 211, 210, 211, 212, 212, 
	212, 212, 214, 212, 214, 214, 213, 215, 215, 215, 216, 216, 215, 217, 217, 216, 
	217, 218, 218, 218, 217, 219, 217, 218, 217, 218, 217, 218, 216, 218, 216, 216, 
	217, 215, 215, 215, 213, 213, 213, 211, 211, 210, 208, 208, 208, 205, 204, 204, 
	202, 201, 199, 198, 197, 194, 195, 191, 192, 189, 188, 187, 185, 183, 183, 181, 
	180, 177, 177, 174, 174, 172, 170, 170, 167, 166, 165, 163, 162, 160, 158, 158, 
	155, 154, 153, 151, 149, 148, 146, 144, 144, 140, 141, 137, 137, 135, 133, 132, 
	130, 128, 128, 125, 125, 123, 120, 120, 116, 116, 113, 113, 110, 109, 106, 106, 
	103, 102, 100, 97, 96, 94, 92, 91, 89, 87, 84, 84, 82, 79, 78, 76, 
	75, 72, 71, 69, 67, 66, 64, 63, 60, 59, 58, 57, 55, 54, 55, 53, 
	54, 52, 53, 52, 52, 51, 51, 50, 50, 50, 49, 50, 47, 49, 48, 46, 
	48, 46, 46, 46, 45, 46, 45, 44, 44, 44, 43, 44, 42, 43, 42, 41, 
	42, 41, 41, 41, 39, 41, 40, 39, 40, 40, 39, 40, 40, 40, 40, 41, 
	40, 41, 41, 41, 41, 42, 40, 42, 42, 42, 42, 43, 43, 42, 43, 43, 
	43, 44, 43, 44, 45, 43, 45, 46, 45, 46, 48, 48, 49, 50, 52, 53, 
	53, 56, 56, 59, 58, 61, 61, 62, 64, 65, 66, 68, 68, 70, 71, 73, 
	73, 76, 75, 78, 78, 80, 82, 81, 85, 85, 86, 89, 89, 91, 92, 94, 
	94, 97, 97, 100, 101, 101, 104, 105, 107, 108, 109, 111, 112, 115, 114, 117, 
	119, 119, 121, 123, 124, 126, 128, 128, 130, 131, 133, 134, 136, 138, 138, 141, 
	141, 144, 145, 147, 148, 150, 151, 153, 155, 155, 157, 158, 161, 161, 163, 165, 
	165, 168, 168, 170, 172, 173, 174, 176, 177, 179, 179, 182, 182, 184, 186, 187, 
	187, 189, 191, 192, 192, 194, 195, 197, 197, 200, 200, 201, 203, 204, 204, 207, 
	207, 209, 208, 211, 210, 212, 212, 212, 212, 214, 213, 214, 214, 215, 215, 216, 
	215, 216, 216, 217, 217, 218, 217, 218, 219, 219, 218, 221, 219, 220, 221, 220, 
	221, 220, 220, 221, 219, 221, 219, 220, 220, 219, 219, 219, 218, 220, 218, 218, 
	219, 217, 218, 218, 217, 217, 218, 217, 216, 218, 216, 216, 217, 216, 216, 216, 
	215, 215, 216, 215, 215, 215, 214, 216, 214, 215, 214, 214, 215, 212, 214, 213, 
	211, 212, 208, 209, 207, 206, 204, 202, 202, 200, 199, 197, 195, 195, 193, 191, 
	190, 188, 187, 186, 183, 182, 180, 179, 177, 176, 174, 173, 171, 170, 167, 168, 
	164, 163, 162, 160, 159, 156, 156, 153, 153, 151, 149, 148, 146, 145, 144, 141, 
	141, 139, 136, 137, 134, 133, 132, 130, 129, 128, 127, 125, 125, 122, 122, 119, 
	119, 118, 115, 115, 113, 112, 110, 109, 108, 107, 105, 104, 103, 101, 101, 99, 
	98, 97, 96, 95, 93, 92, 92, 90, 90, 87, 88, 86, 84, 85, 83, 82, 
	82, 80, 79, 79, 77, 77, 76, 75, 73, 74, 72, 72, 71, 70, 69, 69, 
	67, 67, 67, 65, 64, 66, 63, 63, 62, 62, 60, 61, 59, 59, 59, 57, 
	58, 55, 57, 55, 55, 54, 54, 52, 53, 52, 51, 50, 51, 49, 50, 48, 
	49, 47, 48, 46, 47, 45, 46, 44, 45, 43, 44, 42, 44, 42, 42, 42, 
	42, 41, 42, 40, 41, 41, 40, 41, 41, 41, 41, 42, 41, 42, 41, 42, 
	42, 42, 43, 41, 44, 42, 44, 43, 43, 44, 44, 44, 43, 45, 43, 45, 
	45, 45, 46, 46, 46, 47, 46, 47, 47, 48, 48, 49, 49, 51, 49, 52, 
	52, 54, 53, 55, 57, 57, 59, 61, 62, 64, 65, 67, 68, 71, 72, 74, 
	77, 79, 79, 82, 85, 86, 89, 90, 93, 94, 97, 99, 100, 102, 104, 106, 
	108, 109, 110, 112, 114, 115, 116, 118, 119, 120, 120, 122, 122, 123, 124, 124, 
	125, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 128, 127, 127
};

