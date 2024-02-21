#include <bits/stdc++.h>
#include "citizen.h"

namespace City
{
    Citizen::Citizen(std::string_view name, Gender gender, int age, std::string_view job)
        : _name(name), _gender(gender), _age(age), _job(job)
    {
        auto tmp_id = curr_id.load();
        this->_id = &(++tmp_id);
        curr_id.store(tmp_id);
    }
    Citizen::~Citizen()
    {
        delete this->_id;
    }
    void Citizen::SetName(std::string_view name)
    {
        this->_name = name;
    }
    void Citizen::SetGender(Gender gender)
    {
        this->_gender = gender;
    }
    void Citizen::SetAge(int age)
    {
        this->_age = age;
    }
    void Citizen::SetJob(std::string_view job)
    {
        this->_job = job;
    }
    std::string_view Citizen::GetName()
    {
        return this->_name;
    }
    Citizen::Gender Citizen::GetGender()
    {
        return this->_gender;
    }
    int Citizen::GetAge()
    {
        return this->_age;
    }
    std::string_view Citizen::GetJob()
    {
        return this->_job;
    }
}
