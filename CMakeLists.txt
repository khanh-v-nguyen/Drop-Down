cmake_minimum_required(VERSION 3.23)
project(dropDown)

set(CMAKE_CXX_STANDARD 14)

add_executable(dropDown main.cpp Item.cpp Item.h DropDownMenu.cpp DropDownMenu.h Application.cpp Application.h Position.cpp Position.h GUIComponent.h MouseEvents.cpp MouseEvents.h ItemList.cpp ItemList.h InputBox.cpp InputBox.h States.cpp States.h History.cpp History.h Snapshot.h SnapshotInterface.h HistoryNode.h DropDownSnapshot.cpp DropDownSnapshot.h Menu.cpp Menu.h)

target_link_libraries(dropDown sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
