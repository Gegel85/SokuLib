//
// Created by Gegel85 on 04/11/2020.
//

#ifndef SOKULIB_SELECTMANAGER_HPP
#define SOKULIB_SELECTMANAGER_HPP

//From swrs.h (SWRSToys)

#include "SokuAddresses.hpp"
#include "SokuFct.hpp"

namespace SokuLib
{
	// �Z���N�g�G�t�F�N�g�}�l�[�W�����\�b�h
	#ifdef SOKU_VER_110a
	template<typename T = void>
	#endif
	__forceinline void CSelectEffectManager_Create(void *p)
	{
		SokuLib_Ccall(p, ADDR_SELECT_EFFECT_MANAGER_CREATE, void, ())();
	}
}

#endif //SOKULIB_SELECTMANAGER_HPP
