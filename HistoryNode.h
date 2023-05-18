//
// Created by Khanh Nguyen on 3/25/23.
//

#ifndef DROPDOWN_HISTORYNODE_H
#define DROPDOWN_HISTORYNODE_H
#include "GUIComponent.h"
#include "Snapshot.h"

struct HistoryNode
{
    GUIComponent * component;
    Snapshot * snapshot;
};
#endif //DROPDOWN_HISTORYNODE_H
