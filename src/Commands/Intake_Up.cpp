#include "Intake_Up.h"

Intake_Up::Intake_Up()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(intake);
}

// Called just before this Command runs the first time
void Intake_Up::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Intake_Up::Execute()
{
	intake->RotateArmUp();
}

// Make this return true when this Command no longer needs to run execute()
bool Intake_Up::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Intake_Up::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Intake_Up::Interrupted()
{

}
