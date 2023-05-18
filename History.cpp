//
// Created by Khanh Nguyen on 3/25/23.
//

#include "History.h"
std::stack<HistoryNode> History::stack;

void History::push(const HistoryNode &node)
{

}

void History::push(GUIComponent *component, Snapshot * snapshot)
{
    HistoryNode * n = new HistoryNode;
    n->component = component;
    n->snapshot = snapshot;
    stack.push(*n);
    std::cout << size() << std::endl;
}

void History::pop()
{
    if(!stack.empty() && stack.size() != 1) // bc once we popped in this if, then the stack might be empty
    {
        Snapshot * p = stack.top().snapshot;
        stack.pop();
        apply();
        delete p;
    }
}

Snapshot * History::top()
{
    return stack.top().snapshot;
}

void History::apply()
{
    stack.top().component -> applySnapshot(stack.top().snapshot);
}

void History::print()
{

}

int History::size()
{
    return stack.size();
}

