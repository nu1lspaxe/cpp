#ifndef CITIZEN_H
#define CITIZEN_H

#include <iostream>
#include <atomic>

namespace City
{
    class Citizen
    {
    public:
        enum Gender { FEMALE, MALE, OTHER };

        // Constructor
        Citizen(std::string_view name, Gender gender, int age, std::string_view job);

        // Deconstructor
        ~Citizen();

        // Getter & Setter
        void SetName(std::string_view name);
        void SetGender(Gender gender);
        void SetAge(int age);
        void SetJob(std::string_view job);
        std::string_view GetName();
        Gender GetGender();
        int GetAge();
        std::string_view GetJob();


    private:
        static std::atomic_uint64_t curr_id;

        uint64_t* _id;
        std::string_view _name;
        Gender _gender;
        int _age;
        std::string_view _job;
    };
}

#endif