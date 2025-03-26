#include<bits/stdc++.h>
using namespace std;

struct AdmittedStudent {
    string name;
    float score;
};

class major{
	string name;
	string idMajor;
	string idUni;
	int quota;
	float admissionScore;
	vector<std::string> examGroups;
	map<std::string, AdmittedStudent> admittedStudents;	
private:
	 Major(const std::string& majorCode, const std::string& name, 
          const std::string& universityCode, int quota, 
          const std::vector<std::string>& examGroups);
     // Get
    std::string getMajorCode() const { return majorCode; }
    std::string getName() const { return name; }
    std::string getUniversityCode() const { return universityCode; }
    int getQuota() const { return quota; }
    std::vector<std::string> getExamGroups() const { return examGroups; }
    float getAdmissionScore() const { return admissionScore; }
    std::map<std::string, AdmittedStudent> getAdmittedStudents() const { return admittedStudents; }
    
    // Set
    void setMajorCode(const string& code) { majorCode = code; }
    void setName(const string& newName) { name = newName; }
    void setUniversityCode(const string& code) { universityCode = code; }
    void setQuota(int newQuota) { quota = newQuota; }
    void setAdmissionScore(float score) { admissionScore = score; }
    
    void addExamGroup(const string& examGroup);
    void removeExamGroup(const string& examGroup);
    void updateInfo(const string& name, int quota, const std::vector<std::string>& examGroups);
    float calculateAdmissionScore(const vector<std::pair<std::string, float>>& candidateScores);
    void addAdmittedStudent(const string& studentID, const string& name, float score);
};

