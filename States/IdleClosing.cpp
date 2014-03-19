//
//  Idle.cpp
//  StateMachine
//
//  Created by Andrew III Lyne on 3/18/14.
//  Copyright (c) 2014 Andrew III Lyne. All rights reserved.
//

#include "IdleClosing.h"
#define noop ((void)0)



void IdleClosing::onEntry(){
    NOP();
}
void IdleClosing::onReEntry(){
    NOP();
}
void IdleClosing::onExit(){
    NOP();
}

int IdleClosing::transition(int event_id){

	switch( event_id ){

	case EVENT_PUSHBUTTON:
		return 4;
		break;
	case EVENT_IR:
		std::printf("No transition for IR beam interrupt event in Idle state.\n");
		return -1;
		break;
	case EVENT_DOOROPEN:
		std::printf( "No transition for DoorOpen event in Idle state.\n");
		return -1;
		break;
	case EVENT_DOORCLOSED:
		std::printf("No transition for DoorClosed event in Idle state.\n");
		return -1;
		break;
	case EVENT_MOTOROVERCURRENT:
		std::printf( "No transition for DoorClosed event in Idle state.\n");
		return -1;
		break;
	default:
		std::printf( "ERROR: no event definition for idle code:%d\n", event_id);
		return -1;

	}

	return -1;


}
