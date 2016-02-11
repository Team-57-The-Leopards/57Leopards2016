#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	/*std::shared_ptr<Joystick> driveStick;
	std::shared_ptr<JoystickButton> intakeRollInButton;
	std::shared_ptr<JoystickButton> intakeRollOutButton;
	std::shared_ptr<JoystickButton> intakeRotateUpButton;
	std::shared_ptr<JoystickButton> intakeRotateDownButton;
	*/
public:
	OI();
	Joystick *driveStick;
	Joystick *GetDriveJoystick();
	JoystickButton *intakeRollInButton;
	JoystickButton *intakeRollOutButton;
	JoystickButton *intakeRotateUpButton;
	JoystickButton *intakeRotateDownButton;

	//std::shared_ptr<Joystick> getDriveJoystick();

};

#endif
