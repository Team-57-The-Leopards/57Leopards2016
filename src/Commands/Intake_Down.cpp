#include "Intake_Down.h"

Intake_Down::Intake_Down()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(intake);
}

// Called just before this Command runs the first time
void Intake_Down::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void Intake_Down::Execute()
{
	intake->RotateArmDown();
}

// Make this return true when this Command no longer needs to run execute()
bool Intake_Down::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void Intake_Down::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Intake_Down::Interrupted()
{

}
