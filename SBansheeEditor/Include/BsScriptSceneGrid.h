#pragma once

#include "BsScriptEditorPrerequisites.h"
#include "BsScriptObject.h"

namespace BansheeEngine
{
	/** Interop class between C++ & CLR for SceneGrid. */
	class BS_SCR_BED_EXPORT ScriptSceneGrid : public ScriptObject <ScriptSceneGrid>
	{
	public:
		SCRIPT_OBJ(EDITOR_ASSEMBLY, "BansheeEditor", "SceneGrid")

	private:
		ScriptSceneGrid(MonoObject* object, const SPtr<Camera>& camera);
		~ScriptSceneGrid();

		SceneGrid* mSceneGrid;

		/************************************************************************/
		/* 								CLR HOOKS						   		*/
		/************************************************************************/
		static void internal_Create(MonoObject* managedInstance, ScriptCamera* camera);
		static void internal_Draw(ScriptSceneGrid* thisPtr);
		static void internal_SetMode(ScriptSceneGrid* thisPtr, UINT32 mode);
	};
}