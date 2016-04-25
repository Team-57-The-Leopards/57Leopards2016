#include "AutonomousCommand.h"

#include "Intake_Pos.h"
#include "Roller_In.h"
#include "Roller_Stop.h"
#include "AutonomousDrive.h"

AutonomousCommand::AutonomousCommand(){
	LowBar();
}

AutonomousCommand::AutonomousCommand(int choice)
{
	switch(choice){
		case 0:
			LowBar();
			break;
		case 1:
			Moat();
			break;
		case 2:
			RockWall();
			break;
		default:
			break;
	}
}

void AutonomousCommand::LowBar(){
	AddParallel(new Intake_Pos(-125865));//set intake to horizontal position while intaking pre-load ball
	AddSequential(new Roller_In(0.75, 0.5));//Intake preload ball
	AddParallel(new Roller_Stop());
	AddSequential(new AutonomousDrive(-0.75,0,4));//Drive Forward, full speed over defense
	AddSequential(new AutonomousDrive(0,0,0.5));//stop after 4 seconds
	AddSequential(new Intake_Pos(-24661));
}

void AutonomousCommand::RockWall(){
	AddParallel(new Intake_Pos(-125865));//set intake to horizontal position while intaking pre-load ball
	AddSequential(new Roller_In(0.75, 0.5));//Intake preload ball
	AddParallel(new Roller_Stop());
	AddSequential(new AutonomousDrive(-0.5,0,4.5));//Drive Forward, full speed over defense
	AddSequential(new AutonomousDrive(0,0,0.5));//stop after 4.5 seconds
	AddSequential(new Intake_Pos(-24661));
}

void AutonomousCommand::Moat(){
	AddParallel(new Intake_Pos(-125865));//set intake to horizontal position while intaking pre-load ball
	AddSequential(new Roller_In(0.75, 0.5));//Intake preload ball
	AddParallel(new Roller_Stop());
	AddSequential(new AutonomousDrive(-1,0,2.5));//Drive Forward, full speed over defense
	AddSequential(new AutonomousDrive(0,0,0.5));//stop after 2.5 seconds
	AddSequential(new Intake_Pos(-24661));
}
