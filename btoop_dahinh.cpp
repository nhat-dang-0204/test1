#include <iostream>
#include <string>

using namespace std;

class ConNguoi
{
protected:
	string m_name;
	int m_age;
public:
	ConNguoi(const string& name_, int age_) : m_name(name_), m_age(age_) {};
	void SetConNguoi(const string &name_, int age_)
	{
		m_name = name_;
		m_age = age_;
	}

	string GetName()
	{
		return m_name;
	}

	int GetAge()
	{
		return m_age;
	}

	virtual void GioiThieu()
	{
		cout << "Ten - tuoi: " << m_name << " - " << m_age << endl;
		cout << "Nguoi binh thuong." << endl;
	}
};

class KySu : public ConNguoi
{
public:
	using ConNguoi::ConNguoi;
	void GioiThieu() override
	{
		cout << "Ten - tuoi: " << m_name << " - " << m_age << endl;
		cout << "Ky su." << endl;
	}
};

class CaSi : public ConNguoi
{
public:
	//using ConNguoi::ConNguoi;
	CaSi(const string& name_casi, int age_casi) : ConNguoi(m_name, m_age) {};
	void GioiThieu() override
	{
		cout << "Ten - tuoi: " << m_name << " - " << m_age << endl;
		cout << "Ca si." << endl;
	}
};


int main()
{	
	ConNguoi* kysu = new KySu("Nhat1", 26);
	kysu->GioiThieu();
	ConNguoi* casi = new CaSi("Nhat2", 27);
	casi->GioiThieu();
	delete kysu;
	delete casi;
	return 0;
}
