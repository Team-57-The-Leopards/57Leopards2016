
#include "OI.h"
#include "Commands/Drive.h"
#include "RobotMap.h"
#include "Commands/Intake_Down.h"
#include "Commands/Intake_Up.h"
#include "Commands/Roller_In.h"
#include "Commands/Roller_Out.h"

OI::OI()
{
	// Process operator interface input here.
	driveStick = new Joystick(ch_driveStick);
	intakeRollInButton = new JoystickButton(driveStick, ch_intakeIn);
	intakeRollOutButton = new JoystickButton(driveStick, ch_intakeOut);
	intakeRotateUpButton = new JoystickButton(driveStick, ch_intakeArmRotateUp);
	intakeRotateDownButton = new JoystickButton(driveStick, ch_intakeArmRotateDown);

	//set the buttons to commands
	intakeRollInButton -> WhenPressed(new Roller_In());
	intakeRollOutButton && intakeRollInButton -> WhenPressed(new Roller_Out());
	intakeRotateUpButton -> WhenPressed(new Intake_Up());
	intakeRotateDownButton -> WhenPressed(new Intake_Down());

}
Joystick * OI::GetDriveJoystick()
{
	return driveStick;
}
