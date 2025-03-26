#include<bits/stdc++.h>
using namespace std;

class person{
	string fullName;
    string dateOfBirth;
    string id;
    string address;
    string gender;
    string phone;
    string email;
public:
	person(string hoTen="",string ngaySinh="",string CCCD="",string diaChi="",string gioiTinh="",string soDienThoai="",string email="");
	//get
	string getFullName() const { return fullName;}
	string getDateOfBirth() const { return dateOfBirth;}
	string getId() const { return id;}
	string getAddress() const { return address;}
	string getGender() const { return gender;}
	string getPhone() const { return phone;}
	string getEmail() const { return email;}
	// set
	string getFullName(string fullName){ this->fullName = fullName;}
	string getDateOfBirth(string dateOfBirth){ this->dateOfBirth = dateOfBirth;}
	string getId(string id){ this->id = id;}
	string getAddress(string address){ this>address = address;}
	string getGender(string gender){ this->gender = gender;}
	string getPhone(string phone){ this->phone = phone;}
	string setEmail(string email){ this->email = email;}
	void printInfor();
	void updateInfor();
};
