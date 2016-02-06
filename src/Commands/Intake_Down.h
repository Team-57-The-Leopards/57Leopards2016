#ifndef Intake_Down_H
#define Intake_Down_H

#include "../CommandBase.h"
#include "WPILib.h"

class Intake_Down: public CommandBase
{
public:
	Intake_Down();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
