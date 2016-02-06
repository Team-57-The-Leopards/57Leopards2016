#ifndef Roller_Out_H
#define Roller_Out_H

#include "../CommandBase.h"
#include "WPILib.h"

class Roller_Out: public CommandBase
{
public:
	Roller_Out();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
