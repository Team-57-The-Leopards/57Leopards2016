#include "Roller_In.h"

Roller_In::Roller_In()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void Roller_In::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Roller_In::Execute()
{
	if(!intake->RollerIn())intake->RollerIn();
}

// Make this return true when this Command no longer needs to run execute()
bool Roller_In::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Roller_In::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Roller_In::Interrupted()
{

}
