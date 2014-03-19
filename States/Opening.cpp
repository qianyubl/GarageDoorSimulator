//
//  Opening.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/19/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "Opening.h"



void Opening::onEntry(){
    NOP();
}
void Opening::onReEntry(){
    NOP();
}
void Opening::onExit(){
    NOP();
}

int Closing::transition(int event_id){

	switch( event_id_){

	case EVENT_PUSHBUTTON:
		return 6;
		break;
	case EVENT_IR:
		std::cout << "No transition for IR beam interrupt event in Opening state.\n";
		return -1;
		break;
	case EVENT_DOOROPEN:
		return 3;
		break;
	case EVENT_DOORCLOSED:
		std::cout << "No transition for DoorClosed event in Opening state.\n";
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		return 5;
		break;
	default:
		printf( "ERROR: no event definition for idle code:%d\n", event_id);
		return -1;

	}

	return -1;


}
