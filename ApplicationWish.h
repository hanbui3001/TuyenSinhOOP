#include<bits/stdc++.h>
using namespace std;

class ApplicationWish{
	string studentID;
    int wishNumber;
    string universityCode;
    string majorCode;
    double priorityScore;
    double admissionScore; 
public:
	
    ApplicationWish(const string& studentID="", int wishNumber=0,const string& universityCode="", const string& majorCode="",
                   double priorityScore = 0.0f)
                   
	// Get
    string getStudentID() const { return studentID; }
    int getWishNumber() const { return wishNumber; }
    string getUniversityCode() const { return universityCode; }
    string getMajorCode() const { return majorCode; }
    float getPriorityScore() const { return priorityScore; }
    float getAdmissionScore() const { return admissionScore; }
    
    // Set
    void setWishNumber(int number) { wishNumber = number; }
    void setUniversityCode(const string& code) { universityCode = code; }
    void setMajorCode(const string& code) { majorCode = code; }
    void setPriorityScore(float score) { priorityScore = score; }
    void setAdmissionScore(float score) { admissionScore = score; }
    
    void update();
    void update(int wishNumber, const string& universityCode,const string& majorCode, float priorityScore);
    float calculateTotalScore(double baseScore);
};
