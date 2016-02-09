#include "Roller_Out.h"

Roller_Out::Roller_Out()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(intake);
}

// Called just before this Command runs the first time
void Roller_Out::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Roller_Out::Execute()
{
	intake->RollerOut();
}

// Make this return true when this Command no longer needs to run execute()
bool Roller_Out::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Roller_Out::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Roller_Out::Interrupted()
{

}
