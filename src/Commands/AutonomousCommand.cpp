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
	LowBar();
	/*switch(choice){
		case 0:
			LowBar();
			break;
		case 1:
			Moat();
			break;
		case 2:
			//RockWall();
			break;
		default:
			break;
	}*/
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}

void AutonomousCommand::LowBar(){
	AddParallel(new Intake_Pos(-125865));//set intake to horizontal position while intaking pre-load ball
	AddSequential(new Roller_In(0.75, 0.5));//Intake preload ball
	AddParallel(new Roller_Stop());
	AddSequential(new AutonomousDrive(-0.75,0,4));//Drive Forward, full speed over defense
	AddSequential(new AutonomousDrive(0,0,0.5));//stop after 3 seconds
	AddSequential(new Intake_Pos(-24661));
}
`
void AutonomousCommand::RockWall(){
	AddParallel(new Intake_Pos(-125865));//set intake to horizontal position while intaking pre-load ball
	AddSequential(new Roller_In(0.75, 0.5));//Intake preload ball
	AddParallel(new Roller_Stop());
	AddSequential(new AutonomousDrive(-0.5,0,4.5));//Drive Forward, full speed over defense
	AddSequential(new AutonomousDrive(0,0,0.5));//stop after 3 seconds
	AddSequential(new Intake_Pos(-24661));
}

void AutonomousCommand::Moat(){
	AddParallel(new Intake_Pos(-125865));//set intake to horizontal position while intaking pre-load ball
	AddSequential(new Roller_In(0.75, 0.5));//Intake preload ball
	AddParallel(new Roller_Stop());
	AddSequential(new AutonomousDrive(-1,0,2.5));//Drive Forward, full speed over defense
	AddSequential(new AutonomousDrive(0,0,0.5));//stop after 3 seconds
	AddSequential(new Intake_Pos(-24661));
}

