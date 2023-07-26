#include"MyMath.h"
#include"cmath"
//1.行列の加法 
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2) {
	Matrix4x4 result{};
	result.m[0][0] = m1.m[0][0] + m2.m[0][0];
	result.m[0][1] = m1.m[0][1] + m2.m[0][1];
	result.m[0][2] = m1.m[0][2] + m2.m[0][2];
	result.m[0][3] = m1.m[0][3] + m2.m[0][3];

	result.m[1][0] = m1.m[1][0] + m2.m[1][0];
	result.m[1][1] = m1.m[1][1] + m2.m[1][1];
	result.m[1][2] = m1.m[1][2] + m2.m[1][2];
	result.m[1][3] = m1.m[1][3] + m2.m[1][3];

	result.m[2][0] = m1.m[2][0] + m2.m[2][0];
	result.m[2][1] = m1.m[2][1] + m2.m[2][1];
	result.m[2][2] = m1.m[2][2] + m2.m[2][2];
	result.m[2][3] = m1.m[2][3] + m2.m[2][3];

	result.m[3][0] = m1.m[3][0] + m2.m[3][0];
	result.m[3][1] = m1.m[3][1] + m2.m[3][1];
	result.m[3][2] = m1.m[3][2] + m2.m[3][2];
	result.m[3][3] = m1.m[3][3] + m2.m[3][3];

	return result;
}
//2.行列の減法
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2) {
	Matrix4x4 result{};
	result.m[0][0] = m1.m[0][0] - m2.m[0][0];
	result.m[0][1] = m1.m[0][1] - m2.m[0][1];
	result.m[0][2] = m1.m[0][2] - m2.m[0][2];
	result.m[0][3] = m1.m[0][3] - m2.m[0][3];

	result.m[1][0] = m1.m[1][0] - m2.m[1][0];
	result.m[1][1] = m1.m[1][1] - m2.m[1][1];
	result.m[1][2] = m1.m[1][2] - m2.m[1][2];
	result.m[1][3] = m1.m[1][3] - m2.m[1][3];

	result.m[2][0] = m1.m[2][0] - m2.m[2][0];
	result.m[2][1] = m1.m[2][1] - m2.m[2][1];
	result.m[2][2] = m1.m[2][2] - m2.m[2][2];
	result.m[2][3] = m1.m[2][3] - m2.m[2][3];

	result.m[3][0] = m1.m[3][0] - m2.m[3][0];
	result.m[3][1] = m1.m[3][1] - m2.m[3][1];
	result.m[3][2] = m1.m[3][2] - m2.m[3][2];
	result.m[3][3] = m1.m[3][3] - m2.m[3][3];

	return result;
}
//3.行列の積
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2) {
	Matrix4x4 result{};
	result.m[0][0] = m1.m[0][0] * m2.m[0][0] + m1.m[0][1] * m2.m[1][0] + m1.m[0][2] * m2.m[2][0] + m1.m[0][3] * m2.m[3][0];
	result.m[0][1] = m1.m[0][0] * m2.m[0][1] + m1.m[0][1] * m2.m[1][1] + m1.m[0][2] * m2.m[2][1] + m1.m[0][3] * m2.m[3][1];
	result.m[0][2] = m1.m[0][0] * m2.m[0][2] + m1.m[0][1] * m2.m[1][2] + m1.m[0][2] * m2.m[2][2] + m1.m[0][3] * m2.m[3][2];
	result.m[0][3] = m1.m[0][0] * m2.m[0][3] + m1.m[0][1] * m2.m[1][3] + m1.m[0][2] * m2.m[2][3] + m1.m[0][3] * m2.m[3][3];

	result.m[1][0] = m1.m[1][0] * m2.m[0][0] + m1.m[1][1] * m2.m[1][0] + m1.m[1][2] * m2.m[2][0] + m1.m[1][3] * m2.m[3][0];
	result.m[1][1] = m1.m[1][0] * m2.m[0][1] + m1.m[1][1] * m2.m[1][1] + m1.m[1][2] * m2.m[2][1] + m1.m[1][3] * m2.m[3][1];
	result.m[1][2] = m1.m[1][0] * m2.m[0][2] + m1.m[1][1] * m2.m[1][2] + m1.m[1][2] * m2.m[2][2] + m1.m[1][3] * m2.m[3][2];
	result.m[1][3] = m1.m[1][0] * m2.m[0][3] + m1.m[1][1] * m2.m[1][3] + m1.m[1][2] * m2.m[2][3] + m1.m[1][3] * m2.m[3][3];

	result.m[2][0] = m1.m[2][0] * m2.m[0][0] + m1.m[2][1] * m2.m[1][0] + m1.m[2][2] * m2.m[2][0] + m1.m[2][3] * m2.m[3][0];
	result.m[2][1] = m1.m[2][0] * m2.m[0][1] + m1.m[2][1] * m2.m[1][1] + m1.m[2][2] * m2.m[2][1] + m1.m[2][3] * m2.m[3][1];
	result.m[2][2] = m1.m[2][0] * m2.m[0][2] + m1.m[2][1] * m2.m[1][2] + m1.m[2][2] * m2.m[2][2] + m1.m[2][3] * m2.m[3][2];
	result.m[2][3] = m1.m[2][0] * m2.m[0][3] + m1.m[2][1] * m2.m[1][3] + m1.m[2][2] * m2.m[2][3] + m1.m[2][3] * m2.m[3][3];

	result.m[3][0] = m1.m[3][0] * m2.m[0][0] + m1.m[3][1] * m2.m[1][0] + m1.m[3][2] * m2.m[2][0] + m1.m[3][3] * m2.m[3][0];
	result.m[3][1] = m1.m[3][0] * m2.m[0][1] + m1.m[3][1] * m2.m[1][1] + m1.m[3][2] * m2.m[2][1] + m1.m[3][3] * m2.m[3][1];
	result.m[3][2] = m1.m[3][0] * m2.m[0][2] + m1.m[3][1] * m2.m[1][2] + m1.m[3][2] * m2.m[2][2] + m1.m[3][3] * m2.m[3][2];
	result.m[3][3] = m1.m[3][0] * m2.m[0][3] + m1.m[3][1] * m2.m[1][3] + m1.m[3][2] * m2.m[2][3] + m1.m[3][3] * m2.m[3][3];

	return result;
}
////4.逆行列M1
Matrix4x4 InverseM1(const Matrix4x4& m1) {
	Matrix4x4 result{};

	//行列式|A|
	float A = m1.m[0][0] * m1.m[1][1] * m1.m[2][2] * m1.m[3][3] + m1.m[0][0] * m1.m[1][2] * m1.m[2][3] * m1.m[3][1] + m1.m[0][0] * m1.m[1][3] * m1.m[2][1] * m1.m[3][2]
		- m1.m[0][0] * m1.m[1][3] * m1.m[2][2] * m1.m[3][1] - m1.m[0][0] * m1.m[1][2] * m1.m[2][1] * m1.m[3][3] - m1.m[0][0] * m1.m[1][1] * m1.m[2][3] * m1.m[3][2]
		- m1.m[0][1] * m1.m[1][0] * m1.m[2][2] * m1.m[3][3] - m1.m[0][2] * m1.m[1][0] * m1.m[2][3] * m1.m[3][1] - m1.m[0][3] * m1.m[1][0] * m1.m[2][1] * m1.m[3][2]
		+ m1.m[0][3] * m1.m[1][0] * m1.m[2][2] * m1.m[3][1] + m1.m[0][2] * m1.m[1][0] * m1.m[2][1] * m1.m[3][3] + m1.m[0][1] * m1.m[1][0] * m1.m[2][3] * m1.m[3][2]
		+ m1.m[0][1] * m1.m[1][2] * m1.m[2][0] * m1.m[3][3] + m1.m[0][2] * m1.m[1][3] * m1.m[2][0] * m1.m[3][1] + m1.m[0][3] * m1.m[1][1] * m1.m[2][0] * m1.m[3][2]
		- m1.m[0][3] * m1.m[1][2] * m1.m[2][0] * m1.m[3][1] - m1.m[0][2] * m1.m[1][1] * m1.m[2][0] * m1.m[3][3] - m1.m[0][1] * m1.m[1][3] * m1.m[2][0] * m1.m[3][2]
		- m1.m[0][1] * m1.m[1][2] * m1.m[2][3] * m1.m[3][0] - m1.m[0][2] * m1.m[1][3] * m1.m[2][1] * m1.m[3][0] - m1.m[0][3] * m1.m[1][1] * m1.m[2][2] * m1.m[3][0]
		+ m1.m[0][3] * m1.m[1][2] * m1.m[2][1] * m1.m[3][0] + m1.m[0][2] * m1.m[1][1] * m1.m[2][3] * m1.m[3][0] + m1.m[0][1] * m1.m[1][3] * m1.m[2][2] * m1.m[3][0];

	//要素式
	result.m[0][0] = 1 / A * (m1.m[1][1] * m1.m[2][2] * m1.m[3][3] + m1.m[1][2] * m1.m[2][3] * m1.m[3][1] + m1.m[1][3] * m1.m[2][1] * m1.m[3][2]
		- m1.m[1][3] * m1.m[2][2] * m1.m[3][1] - m1.m[1][2] * m1.m[2][1] * m1.m[3][3] - m1.m[1][1] * m1.m[2][3] * m1.m[3][2]);

	result.m[0][1] = 1 / A * (-m1.m[0][1] * m1.m[2][2] * m1.m[3][3] - m1.m[0][2] * m1.m[2][3] * m1.m[3][1] - m1.m[0][3] * m1.m[2][1] * m1.m[3][2]
		+ m1.m[0][3] * m1.m[2][2] * m1.m[3][1] + m1.m[0][2] * m1.m[2][1] * m1.m[3][3] + m1.m[0][1] * m1.m[2][3] * m1.m[3][2]);

	result.m[0][2] = 1 / A * (m1.m[0][1] * m1.m[1][2] * m1.m[3][3] + m1.m[0][2] * m1.m[1][3] * m1.m[3][1] + m1.m[0][3] * m1.m[1][1] * m1.m[3][2]
		- m1.m[0][3] * m1.m[1][2] * m1.m[3][1] - m1.m[0][2] * m1.m[1][1] * m1.m[3][3] - m1.m[0][1] * m1.m[1][3] * m1.m[3][2]);

	result.m[0][3] = 1 / A * (-m1.m[0][1] * m1.m[1][2] * m1.m[2][3] - m1.m[0][2] * m1.m[1][3] * m1.m[2][1] - m1.m[0][3] * m1.m[1][1] * m1.m[2][2]
		+ m1.m[0][3] * m1.m[1][2] * m1.m[2][1] + m1.m[0][2] * m1.m[1][1] * m1.m[2][3] + m1.m[0][1] * m1.m[1][3] * m1.m[2][2]);

	result.m[1][0] = 1 / A * (-m1.m[1][0] * m1.m[2][2] * m1.m[3][3] - m1.m[1][2] * m1.m[2][3] * m1.m[3][0] - m1.m[1][3] * m1.m[2][0] * m1.m[3][2]
		+ m1.m[1][3] * m1.m[2][2] * m1.m[3][0] + m1.m[1][2] * m1.m[2][0] * m1.m[3][3] + m1.m[1][0] * m1.m[2][3] * m1.m[3][2]);

	result.m[1][1] = 1 / A * (m1.m[0][0] * m1.m[2][2] * m1.m[3][3] + m1.m[0][2] * m1.m[2][3] * m1.m[3][0] + m1.m[0][3] * m1.m[2][0] * m1.m[3][2]
		- m1.m[0][3] * m1.m[2][2] * m1.m[3][0] - m1.m[0][2] * m1.m[2][0] * m1.m[3][3] - m1.m[0][0] * m1.m[2][3] * m1.m[3][2]);

	result.m[1][2] = 1 / A * (-m1.m[0][0] * m1.m[1][2] * m1.m[3][3] - m1.m[0][2] * m1.m[1][3] * m1.m[3][0] - m1.m[0][3] * m1.m[1][0] * m1.m[3][2]
		+ m1.m[0][3] * m1.m[1][2] * m1.m[3][0] + m1.m[0][2] * m1.m[1][0] * m1.m[3][3] + m1.m[0][0] * m1.m[1][3] * m1.m[3][2]);

	result.m[1][3] = 1 / A * (m1.m[0][0] * m1.m[1][2] * m1.m[2][3] + m1.m[0][2] * m1.m[1][3] * m1.m[2][0] + m1.m[0][3] * m1.m[1][0] * m1.m[2][2]
		- m1.m[0][3] * m1.m[1][2] * m1.m[2][0] - m1.m[0][2] * m1.m[1][0] * m1.m[2][3] - m1.m[0][0] * m1.m[1][3] * m1.m[2][2]);

	result.m[2][0] = 1 / A * (m1.m[1][0] * m1.m[2][1] * m1.m[3][3] + m1.m[1][1] * m1.m[2][3] * m1.m[3][0] + m1.m[1][3] * m1.m[2][0] * m1.m[3][1]
		- m1.m[1][3] * m1.m[2][1] * m1.m[3][0] - m1.m[1][1] * m1.m[2][0] * m1.m[3][3] - m1.m[1][0] * m1.m[2][3] * m1.m[3][1]);

	result.m[2][1] = 1 / A * (-m1.m[0][0] * m1.m[2][1] * m1.m[3][3] - m1.m[0][1] * m1.m[2][3] * m1.m[3][0] - m1.m[0][3] * m1.m[2][0] * m1.m[3][1]
		+ m1.m[0][3] * m1.m[2][1] * m1.m[3][0] + m1.m[0][1] * m1.m[2][0] * m1.m[3][3] + m1.m[0][0] * m1.m[2][3] * m1.m[3][1]);

	result.m[2][2] = 1 / A * (m1.m[0][0] * m1.m[1][1] * m1.m[3][3] + m1.m[0][1] * m1.m[1][3] * m1.m[3][0] + m1.m[0][3] * m1.m[1][0] * m1.m[3][1]
		- m1.m[0][3] * m1.m[1][1] * m1.m[3][0] - m1.m[0][1] * m1.m[1][0] * m1.m[3][3] - m1.m[0][0] * m1.m[1][3] * m1.m[3][1]);

	result.m[2][3] = 1 / A * (-m1.m[0][0] * m1.m[1][1] * m1.m[2][3] - m1.m[0][1] * m1.m[1][3] * m1.m[2][0] - m1.m[0][3] * m1.m[1][0] * m1.m[2][1]
		+ m1.m[0][3] * m1.m[1][1] * m1.m[2][0] + m1.m[0][1] * m1.m[1][0] * m1.m[2][3] + m1.m[0][0] * m1.m[1][3] * m1.m[2][1]);

	result.m[3][0] = 1 / A * (-m1.m[1][0] * m1.m[2][1] * m1.m[3][2] - m1.m[1][1] * m1.m[2][2] * m1.m[3][0] - m1.m[1][2] * m1.m[2][0] * m1.m[3][1]
		+ m1.m[1][2] * m1.m[2][1] * m1.m[3][0] + m1.m[1][1] * m1.m[2][0] * m1.m[3][2] + m1.m[1][0] * m1.m[2][2] * m1.m[3][1]);

	result.m[3][1] = 1 / A * (m1.m[0][0] * m1.m[2][1] * m1.m[3][2] + m1.m[0][1] * m1.m[2][2] * m1.m[3][0] + m1.m[0][2] * m1.m[2][0] * m1.m[3][1]
		- m1.m[0][2] * m1.m[2][1] * m1.m[3][0] - m1.m[0][1] * m1.m[2][0] * m1.m[3][2] - m1.m[0][0] * m1.m[2][2] * m1.m[3][1]);

	result.m[3][2] = 1 / A * (-m1.m[0][0] * m1.m[1][1] * m1.m[3][2] - m1.m[0][1] * m1.m[1][2] * m1.m[3][0] - m1.m[0][2] * m1.m[1][0] * m1.m[3][1]
		+ m1.m[0][2] * m1.m[1][1] * m1.m[3][0] + m1.m[0][1] * m1.m[1][0] * m1.m[3][2] + m1.m[0][0] * m1.m[1][2] * m1.m[3][1]);

	result.m[3][3] = 1 / A * (m1.m[0][0] * m1.m[1][1] * m1.m[2][2] + m1.m[0][1] * m1.m[1][2] * m1.m[2][0] + m1.m[0][2] * m1.m[1][0] * m1.m[2][1]
		- m1.m[0][2] * m1.m[1][1] * m1.m[2][0] - m1.m[0][1] * m1.m[1][0] * m1.m[2][2] - m1.m[0][0] * m1.m[1][2] * m1.m[2][1]);



	return result;
}

//5.逆行列M2

Matrix4x4 InverseM2(const Matrix4x4& m2) {
	Matrix4x4 result{};

	//行列式|A|
	float A = m2.m[0][0] * m2.m[1][1] * m2.m[2][2] * m2.m[3][3] + m2.m[0][0] * m2.m[1][2] * m2.m[2][3] * m2.m[3][1] + m2.m[0][0] * m2.m[1][3] * m2.m[2][1] * m2.m[3][2]
		- m2.m[0][0] * m2.m[1][3] * m2.m[2][2] * m2.m[3][1] - m2.m[0][0] * m2.m[1][2] * m2.m[2][1] * m2.m[3][3] - m2.m[0][0] * m2.m[1][1] * m2.m[2][3] * m2.m[3][2]
		- m2.m[0][1] * m2.m[1][0] * m2.m[2][2] * m2.m[3][3] - m2.m[0][2] * m2.m[1][0] * m2.m[2][3] * m2.m[3][1] - m2.m[0][3] * m2.m[1][0] * m2.m[2][1] * m2.m[3][2]
		+ m2.m[0][3] * m2.m[1][0] * m2.m[2][2] * m2.m[3][1] + m2.m[0][2] * m2.m[1][0] * m2.m[2][1] * m2.m[3][3] + m2.m[0][1] * m2.m[1][0] * m2.m[2][3] * m2.m[3][2]
		+ m2.m[0][1] * m2.m[1][2] * m2.m[2][0] * m2.m[3][3] + m2.m[0][2] * m2.m[1][3] * m2.m[2][0] * m2.m[3][1] + m2.m[0][3] * m2.m[1][1] * m2.m[2][0] * m2.m[3][2]
		- m2.m[0][3] * m2.m[1][2] * m2.m[2][0] * m2.m[3][1] - m2.m[0][2] * m2.m[1][1] * m2.m[2][0] * m2.m[3][3] - m2.m[0][1] * m2.m[1][3] * m2.m[2][0] * m2.m[3][2]
		- m2.m[0][1] * m2.m[1][2] * m2.m[2][3] * m2.m[3][0] - m2.m[0][2] * m2.m[1][3] * m2.m[2][1] * m2.m[3][0] - m2.m[0][3] * m2.m[1][1] * m2.m[2][2] * m2.m[3][0]
		+ m2.m[0][3] * m2.m[1][2] * m2.m[2][1] * m2.m[3][0] + m2.m[0][2] * m2.m[1][1] * m2.m[2][3] * m2.m[3][0] + m2.m[0][1] * m2.m[1][3] * m2.m[2][2] * m2.m[3][0];

	//要素式
	result.m[0][0] = 1 / A * (m2.m[1][1] * m2.m[2][2] * m2.m[3][3] + m2.m[1][2] * m2.m[2][3] * m2.m[3][1] + m2.m[1][3] * m2.m[2][1] * m2.m[3][2]
		- m2.m[1][3] * m2.m[2][2] * m2.m[3][1] - m2.m[1][2] * m2.m[2][1] * m2.m[3][3] - m2.m[1][1] * m2.m[2][3] * m2.m[3][2]);

	result.m[0][1] = 1 / A * (-m2.m[0][1] * m2.m[2][2] * m2.m[3][3] - m2.m[0][2] * m2.m[2][3] * m2.m[3][1] - m2.m[0][3] * m2.m[2][1] * m2.m[3][2]
		+ m2.m[0][3] * m2.m[2][2] * m2.m[3][1] + m2.m[0][2] * m2.m[2][1] * m2.m[3][3] + m2.m[0][1] * m2.m[2][3] * m2.m[3][2]);

	result.m[0][2] = 1 / A * (m2.m[0][1] * m2.m[1][2] * m2.m[3][3] + m2.m[0][2] * m2.m[1][3] * m2.m[3][1] + m2.m[0][3] * m2.m[1][1] * m2.m[3][2]
		- m2.m[0][3] * m2.m[1][2] * m2.m[3][1] - m2.m[0][2] * m2.m[1][1] * m2.m[3][3] - m2.m[0][1] * m2.m[1][3] * m2.m[3][2]);

	result.m[0][3] = 1 / A * (-m2.m[0][1] * m2.m[1][2] * m2.m[2][3] - m2.m[0][2] * m2.m[1][3] * m2.m[2][1] - m2.m[0][3] * m2.m[1][1] * m2.m[2][2]
		+ m2.m[0][3] * m2.m[1][2] * m2.m[2][1] + m2.m[0][2] * m2.m[1][1] * m2.m[2][3] + m2.m[0][1] * m2.m[1][3] * m2.m[2][2]);

	result.m[1][0] = 1 / A * (-m2.m[1][0] * m2.m[2][2] * m2.m[3][3] - m2.m[1][2] * m2.m[2][3] * m2.m[3][0] - m2.m[1][3] * m2.m[2][0] * m2.m[3][2]
		+ m2.m[1][3] * m2.m[2][2] * m2.m[3][0] + m2.m[1][2] * m2.m[2][0] * m2.m[3][3] + m2.m[1][0] * m2.m[2][3] * m2.m[3][2]);

	result.m[1][1] = 1 / A * (m2.m[0][0] * m2.m[2][2] * m2.m[3][3] + m2.m[0][2] * m2.m[2][3] * m2.m[3][0] + m2.m[0][3] * m2.m[2][0] * m2.m[3][2]
		- m2.m[0][3] * m2.m[2][2] * m2.m[3][0] - m2.m[0][2] * m2.m[2][0] * m2.m[3][3] - m2.m[0][0] * m2.m[2][3] * m2.m[3][2]);

	result.m[1][2] = 1 / A * (-m2.m[0][0] * m2.m[1][2] * m2.m[3][3] - m2.m[0][2] * m2.m[1][3] * m2.m[3][0] - m2.m[0][3] * m2.m[1][0] * m2.m[3][2]
		+ m2.m[0][3] * m2.m[1][2] * m2.m[3][0] + m2.m[0][2] * m2.m[1][0] * m2.m[3][3] + m2.m[0][0] * m2.m[1][3] * m2.m[3][2]);

	result.m[1][3] = 1 / A * (m2.m[0][0] * m2.m[1][2] * m2.m[2][3] + m2.m[0][2] * m2.m[1][3] * m2.m[2][0] + m2.m[0][3] * m2.m[1][0] * m2.m[2][2]
		- m2.m[0][3] * m2.m[1][2] * m2.m[2][0] - m2.m[0][2] * m2.m[1][0] * m2.m[2][3] - m2.m[0][0] * m2.m[1][3] * m2.m[2][2]);

	result.m[2][0] = 1 / A * (m2.m[1][0] * m2.m[2][1] * m2.m[3][3] + m2.m[1][1] * m2.m[2][3] * m2.m[3][0] + m2.m[1][3] * m2.m[2][0] * m2.m[3][1]
		- m2.m[1][3] * m2.m[2][1] * m2.m[3][0] - m2.m[1][1] * m2.m[2][0] * m2.m[3][3] - m2.m[1][0] * m2.m[2][3] * m2.m[3][1]);

	result.m[2][1] = 1 / A * (-m2.m[0][0] * m2.m[2][1] * m2.m[3][3] - m2.m[0][1] * m2.m[2][3] * m2.m[3][0] - m2.m[0][3] * m2.m[2][0] * m2.m[3][1]
		+ m2.m[0][3] * m2.m[2][1] * m2.m[3][0] + m2.m[0][1] * m2.m[2][0] * m2.m[3][3] + m2.m[0][0] * m2.m[2][3] * m2.m[3][1]);

	result.m[2][2] = 1 / A * (m2.m[0][0] * m2.m[1][1] * m2.m[3][3] + m2.m[0][1] * m2.m[1][3] * m2.m[3][0] + m2.m[0][3] * m2.m[1][0] * m2.m[3][1]
		- m2.m[0][3] * m2.m[1][1] * m2.m[3][0] - m2.m[0][1] * m2.m[1][0] * m2.m[3][3] - m2.m[0][0] * m2.m[1][3] * m2.m[3][1]);

	result.m[2][3] = 1 / A * (-m2.m[0][0] * m2.m[1][1] * m2.m[2][3] - m2.m[0][1] * m2.m[1][3] * m2.m[2][0] - m2.m[0][3] * m2.m[1][0] * m2.m[2][1]
		+ m2.m[0][3] * m2.m[1][1] * m2.m[2][0] + m2.m[0][1] * m2.m[1][0] * m2.m[2][3] + m2.m[0][0] * m2.m[1][3] * m2.m[2][1]);

	result.m[3][0] = 1 / A * (-m2.m[1][0] * m2.m[2][1] * m2.m[3][2] - m2.m[1][1] * m2.m[2][2] * m2.m[3][0] - m2.m[1][2] * m2.m[2][0] * m2.m[3][1]
		+ m2.m[1][2] * m2.m[2][1] * m2.m[3][0] + m2.m[1][1] * m2.m[2][0] * m2.m[3][2] + m2.m[1][0] * m2.m[2][2] * m2.m[3][1]);

	result.m[3][1] = 1 / A * (m2.m[0][0] * m2.m[2][1] * m2.m[3][2] + m2.m[0][1] * m2.m[2][2] * m2.m[3][0] + m2.m[0][2] * m2.m[2][0] * m2.m[3][1]
		- m2.m[0][2] * m2.m[2][1] * m2.m[3][0] - m2.m[0][1] * m2.m[2][0] * m2.m[3][2] - m2.m[0][0] * m2.m[2][2] * m2.m[3][1]);

	result.m[3][2] = 1 / A * (-m2.m[0][0] * m2.m[1][1] * m2.m[3][2] - m2.m[0][1] * m2.m[1][2] * m2.m[3][0] - m2.m[0][2] * m2.m[1][0] * m2.m[3][1]
		+ m2.m[0][2] * m2.m[1][1] * m2.m[3][0] + m2.m[0][1] * m2.m[1][0] * m2.m[3][2] + m2.m[0][0] * m2.m[1][2] * m2.m[3][1]);

	result.m[3][3] = 1 / A * (m2.m[0][0] * m2.m[1][1] * m2.m[2][2] + m2.m[0][1] * m2.m[1][2] * m2.m[2][0] + m2.m[0][2] * m2.m[1][0] * m2.m[2][1]
		- m2.m[0][2] * m2.m[1][1] * m2.m[2][0] - m2.m[0][1] * m2.m[1][0] * m2.m[2][2] - m2.m[0][0] * m2.m[1][2] * m2.m[2][1]);



	return result;
}


//6.転置行列M1
Matrix4x4 TransposeM1(const Matrix4x4& m1) {
	Matrix4x4 result{};
	result.m[0][0] = m1.m[0][0];
	result.m[0][1] = m1.m[1][0];
	result.m[0][2] = m1.m[2][0];
	result.m[0][3] = m1.m[3][0];

	result.m[1][0] = m1.m[0][1];
	result.m[1][1] = m1.m[1][1];
	result.m[1][2] = m1.m[2][1];
	result.m[1][3] = m1.m[3][1];

	result.m[2][0] = m1.m[0][2];
	result.m[2][1] = m1.m[1][2];
	result.m[2][2] = m1.m[2][2];
	result.m[2][3] = m1.m[3][2];

	result.m[3][0] = m1.m[0][3];
	result.m[3][1] = m1.m[1][3];
	result.m[3][2] = m1.m[2][3];
	result.m[3][3] = m1.m[3][3];

	return result;
}

// 7.転置行列M2
Matrix4x4 TransposeM2(const Matrix4x4& m2) {
	Matrix4x4 result{};
	result.m[0][0] = m2.m[0][0];
	result.m[0][1] = m2.m[1][0];
	result.m[0][2] = m2.m[2][0];
	result.m[0][3] = m2.m[3][0];

	result.m[1][0] = m2.m[0][1];
	result.m[1][1] = m2.m[1][1];
	result.m[1][2] = m2.m[2][1];
	result.m[1][3] = m2.m[3][1];

	result.m[2][0] = m2.m[0][2];
	result.m[2][1] = m2.m[1][2];
	result.m[2][2] = m2.m[2][2];
	result.m[2][3] = m2.m[3][2];

	result.m[3][0] = m2.m[0][3];
	result.m[3][1] = m2.m[1][3];
	result.m[3][2] = m2.m[2][3];
	result.m[3][3] = m2.m[3][3];

	return result;
}
////8.単位行列の作成
Matrix4x4 MakeIdentity4x4() {
	Matrix4x4 result{};
	result.m[0][0] = 1;
	result.m[0][1] = 0;
	result.m[0][2] = 0;
	result.m[0][3] = 0;

	result.m[1][0] = 0;
	result.m[1][1] = 1;
	result.m[1][2] = 0;
	result.m[1][3] = 0;

	result.m[2][0] = 0;
	result.m[2][1] = 0;
	result.m[2][2] = 1;
	result.m[2][3] = 0;

	result.m[3][0] = 0;
	result.m[3][1] = 0;
	result.m[3][2] = 0;
	result.m[3][3] = 1;

	return result;
}

//平行移動
Matrix4x4 MakeTranslateMatrix(const Vector3& translate) {
	Matrix4x4 result{};
	result.m[0][0] = 1;
	result.m[0][1] = 0;
	result.m[0][2] = 0;
	result.m[0][3] = 0;

	result.m[1][0] = 0;
	result.m[1][1] = 1;
	result.m[1][2] = 0;
	result.m[1][3] = 0;

	result.m[2][0] = 0;
	result.m[2][1] = 0;
	result.m[2][2] = 1;
	result.m[2][3] = 0;

	result.m[3][0] = translate.x;
	result.m[3][1] = translate.y;
	result.m[3][2] = translate.z;
	result.m[3][3] = 1;
	return result;
}

//拡大縮小行列
Matrix4x4 MakeScaleMatrix(const Vector3& scale) {
	Matrix4x4 result{};
	result.m[0][0] = scale.x;
	result.m[0][1] = 0;
	result.m[0][2] = 0;
	result.m[0][3] = 0;

	result.m[1][0] = 0;
	result.m[1][1] = scale.y;
	result.m[1][2] = 0;
	result.m[1][3] = 0;

	result.m[2][0] = 0;
	result.m[2][1] = 0;
	result.m[2][2] = scale.z;
	result.m[2][3] = 0;

	result.m[3][0] = 0;
	result.m[3][1] = 0;
	result.m[3][2] = 0;
	result.m[3][3] = 1;
	return result;
}

//x軸回転行列
Matrix4x4 MakeRotateXMatrix(float radian) {
	Matrix4x4 result{};
	result.m[0][0] = 1;
	result.m[0][1] = 0;
	result.m[0][2] = 0;
	result.m[0][3] = 0;

	result.m[1][0] = 0;
	result.m[1][1] = cosf(radian);
	result.m[1][2] = sinf(radian);
	result.m[1][3] = 0;

	result.m[2][0] = 0;
	result.m[2][1] = -sinf(radian);
	result.m[2][2] = cosf(radian);
	result.m[2][3] = 0;

	result.m[3][0] = 0;
	result.m[3][1] = 0;
	result.m[3][2] = 0;
	result.m[3][3] = 1;
	return result;
}
//y軸回転行列
Matrix4x4 MakeRotateYMatrix(float radian) {
	Matrix4x4 result{};
	result.m[0][0] = cosf(radian);
	result.m[0][1] = 0;
	result.m[0][2] = -sinf(radian);;
	result.m[0][3] = 0;

	result.m[1][0] = 0;
	result.m[1][1] = 1;
	result.m[1][2] = 0;
	result.m[1][3] = 0;

	result.m[2][0] = sinf(radian);;
	result.m[2][1] = 0;
	result.m[2][2] = cosf(radian);
	result.m[2][3] = 0;

	result.m[3][0] = 0;
	result.m[3][1] = 0;
	result.m[3][2] = 0;
	result.m[3][3] = 1;
	return result;
}
//z軸回転行列
Matrix4x4 MakeRotateZMatrix(float radian) {
	Matrix4x4 result{};
	result.m[0][0] = cosf(radian);
	result.m[0][1] = sinf(radian);
	result.m[0][2] = 0;
	result.m[0][3] = 0;

	result.m[1][0] = -sinf(radian);
	result.m[1][1] = cosf(radian);
	result.m[1][2] = 0;
	result.m[1][3] = 0;

	result.m[2][0] = 0;
	result.m[2][1] = 0;
	result.m[2][2] = 1;
	result.m[2][3] = 0;

	result.m[3][0] = 0;
	result.m[3][1] = 0;
	result.m[3][2] = 0;
	result.m[3][3] = 1;
	return result;
}
Matrix4x4 MakeRotateXYZMatrix(Matrix4x4& rotateX, Matrix4x4& rotateY, Matrix4x4& rotateZ) {
	return Multiply(rotateX, Multiply(rotateY, rotateZ));
}


Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rotate, const Vector3& translate) {
	Matrix4x4 result{};
	Matrix4x4 makeRotateXMatrix = MakeRotateXMatrix(rotate.x);
	Matrix4x4 makeRotateYMatrix = MakeRotateYMatrix(rotate.y);
	Matrix4x4 makeRotateZMatrix = MakeRotateZMatrix(rotate.z);
	Matrix4x4 makeRotateXYZMatrix = MakeRotateXYZMatrix(makeRotateXMatrix, makeRotateYMatrix, makeRotateZMatrix);


	result.m[0][0] = scale.x * makeRotateXYZMatrix.m[0][0];
	result.m[0][1] = scale.x * makeRotateXYZMatrix.m[0][1];
	result.m[0][2] = scale.x * makeRotateXYZMatrix.m[0][2];;
	result.m[0][3] = 0;

	result.m[1][0] = scale.y * makeRotateXYZMatrix.m[1][0];
	result.m[1][1] = scale.y * makeRotateXYZMatrix.m[1][1];
	result.m[1][2] = scale.y * makeRotateXYZMatrix.m[1][2];
	result.m[1][3] = 0;

	result.m[2][0] = scale.z * makeRotateXYZMatrix.m[2][0];
	result.m[2][1] = scale.z * makeRotateXYZMatrix.m[2][1];
	result.m[2][2] = scale.z * makeRotateXYZMatrix.m[2][2];
	result.m[2][3] = 0;

	result.m[3][0] = translate.x;
	result.m[3][1] = translate.y;
	result.m[3][2] = translate.z;
	result.m[3][3] = 1;

	return result;
}


//透視投影行列
Matrix4x4 MakePerspectiveForMatrix(float fovY, float aspectRatio, float nearClip, float farClip) {
	Matrix4x4 result{};
	result.m[0][0] = 1 / aspectRatio * (1 / tan(fovY / 2));
	result.m[0][1] = 0;
	result.m[0][2] = 0;
	result.m[0][3] = 0;

	result.m[1][0] = 0;
	result.m[1][1] = 1 / tan(fovY / 2);
	result.m[1][2] = 0;
	result.m[1][3] = 0;

	result.m[2][0] = 0;
	result.m[2][1] = 0;
	result.m[2][2] = farClip / (farClip - nearClip);
	result.m[2][3] = 1;

	result.m[3][0] = 0;
	result.m[3][1] = 0;
	result.m[3][2] = -nearClip * farClip / (farClip - nearClip);
	result.m[3][3] = 0;
	return result;
}
//正射影行列
Matrix4x4 MakeOrthographicMatrix(float left, float top, float right, float bottom, float nearClip, float farClip) {
	Matrix4x4 result{};
	result.m[0][0] = 2 / (right - left);
	result.m[0][1] = 0;
	result.m[0][2] = 0;
	result.m[0][3] = 0;

	result.m[1][0] = 0;
	result.m[1][1] = 2 / (top - bottom);
	result.m[1][2] = 0;
	result.m[1][3] = 0;

	result.m[2][0] = 0;
	result.m[2][1] = 0;
	result.m[2][2] = 1 / (farClip - nearClip);
	result.m[2][3] = 0;

	result.m[3][0] = (left + right) / (left - right);
	result.m[3][1] = (top + bottom) / (bottom - top);
	result.m[3][2] = -nearClip * farClip / (farClip - nearClip);
	result.m[3][3] = 1;
	return result;
}

//ビューポート変換行列
Matrix4x4 MakeViewportMatrix(float left, float top, float width, float height, float minDepth, float maxDepth) {
	Matrix4x4 result{};
	result.m[0][0] = width / 2;
	result.m[0][1] = 0;
	result.m[0][2] = 0;
	result.m[0][3] = 0;

	result.m[1][0] = 0;
	result.m[1][1] = -(height / 2);
	result.m[1][2] = 0;
	result.m[1][3] = 0;

	result.m[2][0] = 0;
	result.m[2][1] = 0;
	result.m[2][2] = maxDepth - minDepth;
	result.m[2][3] = 0;

	result.m[3][0] = left + width / 2;
	result.m[3][1] = top + height / 2;
	result.m[3][2] = minDepth;
	result.m[3][3] = 1;
	return result;
}