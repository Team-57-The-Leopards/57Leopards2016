#include "Intake.h"
#include "../RobotMap.h"

Intake::Intake() :
		Subsystem("Intake")
{

}

void Intake::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Intake::RollerIn(){
	intakeWheels ->Set(1);
}

void Intake::RollerOut(){
	intakeWheels ->Set(-1);
}

void Intake::RotateArmDown(){
	intakeArm ->Set(-1);
}

void Intake::RotateArmUp(){
	intakeArm ->Set(1);
}
