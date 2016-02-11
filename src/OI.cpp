
#include "OI.h"
#include "Commands/Drive.h"
#include "SmartDashboard/SmartDashboard.h"
#include "RobotMap.h"
#include "Commands/Intake_Down.h"
#include "Commands/Intake_Up.h"
#include "Commands/Roller_In.h"
#include "Commands/Roller_Out.h"

OI::OI()
{
	// Process operator interface input here.
	driveStick = new Joystick(ch_driveStick);
	//driveStick.reset(new Joystick(ch_driveStick));
	intakeRollInButton = new JoystickButton(driveStick, ch_intakeIn);
	intakeRollOutButton = new JoystickButton(driveStick, ch_intakeOut);
	intakeRotateUpButton = new JoystickButton(driveStick, ch_intakeArmRotateUp);
	intakeRotateDownButton = new JoystickButton(driveStick, ch_intakeArmRotateDown);

	//intakeRollInButton.reset(new JoystickButton(driveStick.get(), ch_intakeIn));
	//set the buttons to commands
	intakeRollInButton -> WhileHeld(new Roller_In());
	intakeRollOutButton -> WhileHeld(new Roller_Out());
	intakeRotateUpButton -> WhileHeld(new Intake_Up());
	intakeRotateDownButton -> WhileHeld(new Intake_Down());

	//allow for smartDashbord commands
	SmartDashboard::PutData("Intake Down", new Intake_Down());
	SmartDashboard::PutData("Intake Up", new Intake_Up());
	SmartDashboard::PutData("Roller Out", new Roller_Out());
	SmartDashboard::PutData("Roller In", new Roller_In());

}
Joystick * OI::GetDriveJoystick()
{
	return driveStick;
}
