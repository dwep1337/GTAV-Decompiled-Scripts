#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	Object obScriptParam_3 = 0;
#endregion

void main() // Position - 0x0
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_1();

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_3))
		ENTITY::FREEZE_ENTITY_POSITION(obScriptParam_3, true);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_3))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_3))
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_3))
						{
							STREAMING::REQUEST_ANIM_DICT("map_objects");
						
							if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
							{
								ENTITY::PLAY_ENTITY_ANIM(obScriptParam_3, "airdancer_test", "map_objects", 1f, true, false, false, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
				
					case 1:
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}

	return;
}

void func_1() // Position - 0x9F
{
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\\n");
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_2(char* sParam0) // Position - 0xB2
{
	func_3(sParam0);
	return;
}

void func_3(char* sParam0) // Position - 0xC0
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

