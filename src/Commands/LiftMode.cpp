#include "LiftMode.h"

LiftMode::LiftMode(bool mode)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	m_mode = mode;
}

// Called just before this Command runs the first time
void LiftMode::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void LiftMode::Execute()
{
	Robot::liftMode = m_mode;
	Robot::CameraSel = m_mode;
}

// Make this return true when this Command no longer needs to run execute()
bool LiftMode::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void LiftMode::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftMode::Interrupted()
{

}
