// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "Rollers.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
const int state_Intaking = 0;
const int state_BallPossessed = 1;
const int state_BallHeld = 2;

Rollers::Rollers() : Subsystem("Rollers") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    motor1 = RobotMap::rollersMotor;
    //motor2 = RobotMap::secondIntakeRoller;
    frontRange = RobotMap::intakeRangePrimary;
    backRange = RobotMap::intakeRangeSecondary;
    frontSwitch = RobotMap::intakeSwitchPrimary;
    backSwitch = RobotMap::intakeSwitchSecondary;
    internalState = state_Intaking;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Rollers::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Rollers::RunPrimary(double speed)
{
	motor1->Set(speed);
}

bool Rollers::GetFrontSwitch(){
	return false;
}

bool Rollers::GetBackSwitch(){
	return false;
}
void Rollers::SetIntakeState(int state){
	switch(state){
		case state_BallHeld :
		case state_BallPossessed :
		case state_Intaking:
			internalState = state;
			break;
	}
}
int Rollers::GetIntakeState(){
	return internalState;
}
