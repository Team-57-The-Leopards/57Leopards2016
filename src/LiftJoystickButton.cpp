#include "LiftJoystickButton.h"
#include "Robot.h"

LiftJoystickButton::LiftJoystickButton(GenericHID *joystick, int buttonNumber, bool liftMode )
: m_joystick(joystick), m_buttonNumber(buttonNumber)
{
	m_liftMode = liftMode;
}

bool LiftJoystickButton::Get()
{
	return (m_liftMode == Robot::liftMode) && m_joystick->GetRawButton(m_buttonNumber);
}
