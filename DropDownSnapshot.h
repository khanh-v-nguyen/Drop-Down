//
// Created by Khanh Nguyen on 3/25/23.
//

#ifndef DROPDOWN_DROPDOWNSNAPSHOT_H
#define DROPDOWN_DROPDOWNSNAPSHOT_H

#include "Snapshot.h"
#include <iostream>

class DropDownSnapshot : public Snapshot
{
public:
    void applyInstructions() override;
    void setString(std::string string);
    std::string getString();
private:
    std::string string;

};


#endif //DROPDOWN_DROPDOWNSNAPSHOT_H
