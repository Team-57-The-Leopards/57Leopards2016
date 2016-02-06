#include "Chassis.h"
#include "../RobotMap.h"
#include "Joystick.h"
#include "Commands/Drive.h"

Chassis::Chassis() :Subsystem("Chassis"){
frontleftm = new CANTalon(ch_FrontLeftM);
frontrightm = new CANTalon(ch_FrontRightM);
backleftm = new CANTalon(ch_BackLeftM);
backrightm = new CANTalon(ch_BackRightM);
//drive = new RobotDrive(frontleftm, backleftm, frontrightm, backrightm);
//drive->SetSafetyEnabled(kMotorSafety);

}

void Chassis::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new Drive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Chassis::DriveWithJoystick(Joystick *drivestick)
{
	double x=drivestick->GetY();
	double y=drivestick->GetX();

	frontrightm->Set(-(y+x));
	frontleftm->Set(-(y-x));
	backrightm->Set(-(y+x));
	backleftm->Set(-(y-x));

	//SmartDashboard::PutNumber("Encoder Velocity (FR)", frontrightm->GetEncVel());
	//SmartDashboard::PutNumber("Encoder Velocity (BR)", backrightm->GetEncVel());
	//SmartDashboard::PutNumber("Encoder Velocity (BL)", backleftm->GetEncVel());
	//SmartDashboard::PutNumber("Encoder Velocity (FL)", frontleftm->GetEncVel());
}
