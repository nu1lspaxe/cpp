#include <bits/stdc++.h>
#include "citizen.h"

City::Citizen::Citizen(std::string_view name, Gender gender, int age, std::string_view job)
    : _name(name), _gender(gender), _age(age), _job(job)
{
    auto tmp_id = curr_id.load();
    this->_id = &(++tmp_id);
    curr_id.store(tmp_id);
}
City::Citizen::~Citizen()
{
    delete this->_id;
}
void City::Citizen::SetName(std::string_view name)
{
    this->_name = name;
}
void City::Citizen::SetGender(Gender gender)
{
    this->_gender = gender;
}
void City::Citizen::SetAge(int age)
{
    this->_age = age;
}
void City::Citizen::SetJob(std::string_view job)
{
    this->_job = job;
}
std::string_view City::Citizen::GetName()
{
    return this->_name;
}
City::Citizen::Gender City::Citizen::GetGender()
{
    return this->_gender;
}
int City::Citizen::GetAge()
{
    return this->_age;
}
std::string_view City::Citizen::GetJob()
{
    return this->_job;
}