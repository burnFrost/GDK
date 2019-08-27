//Physics. Alpha version.

//General.

float pi = 3.14159;

//rotate X.
float rotX(float R){
	return cos(pi/180*R);
}

//rotate Y.
float rotY(float R){
	return sin(pi/180*R);
}

//3D

//Distance.
float distance(vector<float>& A, vector<float>& B){
	return sqrt(pow(A[0]-B[0], 2)+pow(A[1]-B[1], 2)+pow(A[2]-B[2], 2));
}

//Sphere
bool sphere(vector<float>& A, vector<float>& B){
	if(sqrt(pow(A[0]-B[0], 2)+pow(A[1]-B[1], 2)+pow(A[2]-B[2], 2)) < A[3]+B[3]){
		return true;
	}
	else{
		return false;
	}}

//AABB.
bool aabb(vector<float>& A, vector<float>& X, vector<float>& B, vector<float>& Y){
	if(abs(A[0]-B[0]) < X[0]+Y[0] and abs(A[1]-B[1]) < X[1]+Y[1] and abs(A[2]-B[2]) < X[2]+Y[2]){
		return true;
	}
	else{
		return false;
	}}

//float lookAt()

//2D.

//Distance 2d.
float distance2d(vector<float>& A, vector<float>& B){
return sqrt(pow(A[0]-B[0], 2)+pow(A[0]-B[0], 2));
}

//Sphere 2d.
bool sphere2d(vector<float>& A, vector<float>& B){
	if(sqrt(pow(A[0]-B[0], 2)+pow(A[1]-B[1], 2)) < A[3]+B[3]){
		return true;
	}
	else{
		return false;
	}}

//aabb 2d.
bool aabb2d(vector<float>& A, vector<float>& X, vector<float>& B, vector<float>& Y){
	if(abs(A[0]-B[0]) < X[0]+Y[0] and abs(A[1]-B[1]) < X[1]+Y[1]){
		return true;
	}
	else{
		return false;
	}}


//lookAt 2d.
float lookAt2d(vector<float>& A, vector<float>& B){
	return (180/pi)*atan2(A[0]-B[0] ,A[1]-B[1]);
	}
