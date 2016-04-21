#include "IntakePort.h"

IntakePort::IntakePort(double pos)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::intakeArm.get());
	m_pos = pos;
}

// Called just before this Command runs the first time
void IntakePort::Initialize()
{
	Robot::intakeArm->SetLimits(+12.0, -3.6);
	Robot::intakeArm->GotoPos(m_pos);
}

// Called repeatedly when this Command is scheduled to run
void IntakePort::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool IntakePort::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void IntakePort::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakePort::Interrupted()
{

}
