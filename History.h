//
// Created by Khanh Nguyen on 3/25/23.
//

#ifndef DROPDOWN_HISTORY_H
#define DROPDOWN_HISTORY_H

#include "HistoryNode.h"
#include <stack>
#include <iostream>
class History
{
public:
    static void push(const HistoryNode & node);
    static void push(GUIComponent * component, Snapshot * snapshot);

    static void pop();
    static Snapshot * top();
    static void print();
    static int size();
private:
    static std::stack<HistoryNode> stack;
    static void apply();

};



#endif //DROPDOWN_HISTORY_H
