//
// Created by Gegel85 on 04/11/2020.
//

#ifndef SOKULIB_SOKUADDRESSES_HPP
#define SOKULIB_SOKUADDRESSES_HPP


namespace SokuLib
{
	#ifdef SOKU_VER_110a
		#define TEXT_SECTION_OFFSET  0x00401000
		#define TEXT_SECTION_SIZE    0x00456000
		#define RDATA_SECTION_OFFSET 0x00857000
		#define RDATA_SECTION_SIZE   0x0002B000
		#define DATA_SECTION_OFFSET  0x00882000
		#define DATA_SECTION_SIZE    0x00021000
	#else
		#define TEXT_SECTION_OFFSET  0x00401000
		#define TEXT_SECTION_SIZE    0x00445000
		#define RDATA_SECTION_OFFSET 0x00846000
		#define RDATA_SECTION_SIZE   0x00029000
		#define DATA_SECTION_OFFSET  0x0086F000
		#define DATA_SECTION_SIZE    0x00015000
	#endif

	enum Address {
	#ifdef SOKU_VER_110a
		//From swrs.h (SWRSToys)
		ADDR_RENDERER_BEGIN               = 0x00401000,
		ADDR_RENDERER_END                 = 0x00401040,
		ADDR_ALLOCATE_FUNCTION            = 0x004026A0,
		ADDR_DEALLOCATE_FUNCTION          = 0x00402810,
		ADDR_TEXTURE_MANAGER_LOAD_TEXTURE = 0x00405030,
		ADDR_TEXTURE_MANAGER_CREATE_TEXT  = 0x004050A0,
		ADDR_TEXTURE_MANAGER_REMOVE       = 0x00405110,
		ADDR_TEXTURE_MANAGER_SET_TEXTURE  = 0x00405190,
		ADDR_TEXTURE_MANAGER_GET_SIZE     = 0x00405200,
		ADDR_SWR_FONT_CREATE              = 0x004116D0,
		ADDR_SWR_FONT_DESTRUCT            = 0x00411760,
		ADDR_SWR_FONT_SET_INDIRECT        = 0x00411840,
		ADDR_GET_PACKAGED_BGM_CALLER      = 0x00418BE1,
		ADDR_GET_PACKAGED_SFL_CALLER      = 0x00418F41,
		ADDR_SELECT_SV_SIZE               = 0x0041E622,
		ADDR_SELECT_SV_CREATER            = 0x0041E644,
		ADDR_SELECT_CL_SIZE               = 0x0041E6CD,
		ADDR_SELECT_CL_CREATER            = 0x0041E6EF,
		ADDR_INPUT_MANAGER_READ_REPLAY    = 0x0042EAC0,
		ADDR_CHECK_KEY_ONESHOT            = 0x0043DE30,
		ADDR_BATTLE_MANAGER_SIZE          = 0x004396A2,
		ADDR_BATTLE_MANAGER_CREATER       = 0x004396C0,
		ADDR_PLAY_SE_WAVE_BUFFER          = 0x0043E1E0,
		ADDR_SET_BATTLE_MODE              = 0x0043E9A0,
		ADDR_PLAY_NET_BELL                = 0x00446D9A,
		ADDR_PROFILENAME_PRINT_CODE1      = 0x0047D857,
		ADDR_PROFILENAME_PRINT_CODE1_END  = 0x0047D9EE,
		ADDR_PROFILENAME_PRINT_CODE2      = 0x0047D9FE,
		ADDR_PROFILENAME_PRINT_CODE2_END  = 0x0047DB95,
		ADDR_DELETE_FUNCTION              = 0x0081F6FA,
		ADDR_NEW_FUNCTION                 = 0x0081FBDC,
		ADDR_VTBL_BATTLE                  = 0x008574A0,
		ADDR_VTBL_SELECT_SV               = 0x008574DC,
		ADDR_VTBL_BATTLESV                = 0x00857518,
		ADDR_VTBL_BATTLECL                = 0x00857570,
		ADDR_VTBL_SELECT_CL               = 0x00857534,
		ADDR_VTBL_LOGO                    = 0x00857740,
		ADDR_DEFAULT_FONT_NAME            = 0x00858764,
		ADDR_VTBL_BATTLE_MANAGER          = 0x008588EC,
		ADDR_MENU_MODE                    = 0x00882A94,
		ADDR_RENDERER                     = 0x00896B4C,
		ADDR_LOADED_STAGE_ID              = 0x008971CE,
		ADDR_BATTLE_MANAGER               = 0x008985E4,
		ADDR_SUB_MODE                     = 0x00898688,
		ADDR_PLAYER1_PROFILE_STR          = 0x0089891C,
		ADDR_COMM_MODE                    = 0x00898690,
		ADDR_PNETOBJECT                   = 0x008986A0,
		ADDR_INPUT_MANAGER                = 0x00898718,
		ADDR_PLAYER2_PROFILE_STR          = 0x00899108,
		ADDR_LCHARID                      = 0x00899D10,
		ADDR_RCHARID                      = 0x00899D30,
		ADDR_INPUT_MANAGER_CLUSTER        = 0x0089A248,
		ADDR_TEXTURE_MANAGER              = 0x0089F9F8,
		ADDR_SCENE_ID_NEW                 = 0x008A0040,
		ADDR_SCENE_ID                     = 0x008A0044,
		ADDR_D3D9_DEVICE                  = 0x008A0E30,
	#else
		//From swrs.h (SWRSToys)
		ADDR_RENDERER_BEGIN                = 0x00401000,
		ADDR_RENDERER_END                  = 0x00401040,
		ADDR_ALLOCATE_FUNCTION             = 0x00402600,
		ADDR_HANDLE_MANAGER_GET            = 0x00402770,
		ADDR_TEXTURE_MANAGER_LOAD_TEXTURE  = 0x00404CC0,
		ADDR_TEXTURE_MANAGER_CREATE_TEXT   = 0x00404D30,
		ADDR_TEXTURE_MANAGER_REMOVE        = 0x00404DA0,
		ADDR_TEXTURE_MANAGER_SET_TEXTURE   = 0x00404E20,
		ADDR_TEXTURE_MANAGER_GET_SIZE      = 0x00404E90,
		ADDR_LOAD_PACKAGE_PALETTE          = 0x00408B40,
		ADDR_DEGREE_COSINE                 = 0x00409210,
		ADDR_LOAD_PACKAGE_FILE             = 0x0040CD90,
		ADDR_SWR_FONT_CREATE               = 0x00411170,
		ADDR_SWR_FONT_DESTRUCT             = 0x00411200,
		ADDR_SWR_FONT_SET_INDIRECT         = 0x004112E0,
		ADDR_DEALLOCATE_FUNCTION           = 0x004175D0,
		ADDR_GET_PACKAGED_BGM_CALLER       = 0x00418791,
		ADDR_GET_PACKAGED_SFL_CALLER       = 0x00418AF1,
		ADDR_LOGO_CREATER                  = 0x0041DB07,
		ADDR_OPENING_CREATER               = 0x0041DB41,
		ADDR_LOADING_CREATER               = 0x0041DB7B,
		ADDR_TITLE_CREATER                 = 0x0041DBB5,
		ADDR_SELECT_CREATER                = 0x0041DBEF,
		ADDR_SELECT_SCENARIO_CREATER       = 0x0041DC29,
		ADDR_BATTLE_CREATER                = 0x0041DC60,
		ADDR_ENDING_CREATER                = 0x0041DC9A,
		ADDR_SELECT_SV_SIZE                = 0x0041DCB2,
		ADDR_SELECT_SV_CREATER             = 0x0041DCD4,
		ADDR_LOGO_SIZE                     = 0x0041DAE5,
		ADDR_OPENING_SIZE                  = 0x0041DB1F,
		ADDR_LOADING_SIZE                  = 0x0041DB59,
		ADDR_TITLE_SIZE                    = 0x0041DB93,
		ADDR_SELECT_SIZE                   = 0x0041DBCD,
		ADDR_SELECT_SCENARIO_SIZE          = 0x0041DC07,
		ADDR_BATTLE_SIZE                   = 0x0041DC41,
		ADDR_ENDING_SIZE                   = 0x0041DC78,
		ADDR_LOADINGSV_SIZE                = 0x0041DCEC,
		ADDR_LOADINGSV_CREATER             = 0x0041DD0E,
		ADDR_BATTLESV_CREATER              = 0x0041DD45,
		ADDR_SELECT_CL_SIZE                = 0x0041DD5D,
		ADDR_SELECT_CL_CREATER             = 0x0041DD7F,
		ADDR_LOADINGCL_SIZE                = 0x0041DD97,
		ADDR_LOADINGCL_CREATER             = 0x0041DDB9,
		ADDR_BATTLECL_SIZE                 = 0x0041DDD1,
		ADDR_BATTLECL_CREATER              = 0x0041DDF0,
		ADDR_LOADING_WATCH_SIZE            = 0x0041DE08,
		ADDR_LOADING_WATCH_CREATER         = 0x0041DE26,
		ADDR_BATTLE_WATCH_CREATER          = 0x0041DE59,
		ADDR_BATTLE_WATCH_SIZE             = 0x0041DE3E,
		ADDR_SELECT_EFFECT_MANAGER_CREATE  = 0x00420CE0,
		ADDR_SELECT_EFFECT_MANAGER_FREE    = 0x004221F0,
		ADDR_INPUT_MANAGER_READ_REPLAY     = 0x0042E5C0,
		ADDR_PROFILE_REFRESH_STR_TEXTURE   = 0x00433FF0,
		ADDR_BATTLE_MANAGER_SIZE           = 0x00438B12,
		ADDR_BATTLE_MANAGER_CREATER        = 0x00438B30,
		ADDR_CHECK_KEY_ONESHOT             = 0x0043D000,
		ADDR_PLAY_SE_WAVE_BUFFER           = 0x0043D3B0,
		ADDR_SET_BATTLE_MODE               = 0x0043DBC0,
		ADDR_GET_CHARACTER_ABBR            = 0x0043E5E0,
		ADDR_PLAY_NET_BELL                 = 0x0044641A,
		ADDR_NOBJ_CREATE_PROF_STR_TEXTURE  = 0x00453760,
		ADDR_PROFILENAME_PRINT_CODE1       = 0x0047CDC7,
		ADDR_PROFILENAME_PRINT_CODE1_END   = 0x0047CF5E,
		ADDR_PROFILENAME_PRINT_CODE2       = 0x0047CF6E,
		ADDR_PROFILENAME_PRINT_CODE2_END   = 0x0047D105,
		ADDR_DEFAULT_FONT_NAME             = 0x0069F154,
		ADDR_NEW_FUNCTION                  = 0x008116DC,
		ADDR_DELETE_FUNCTION               = 0x008111FA,
		ADDR_VECTOR_CREATE                 = 0x00811B8B,
		ADDR_VECTOR_DESTRUCT               = 0x00811B28,
		ADDR_VTBL_BATTLE                   = 0x00846490,
		ADDR_VTBL_SELECT_SV                = 0x008464CC,
		ADDR_VTBL_LOADINGSV                = 0x008464EC,
		ADDR_VTBL_BATTLESV                 = 0x00846508,
		ADDR_VTBL_SELECT_CL                = 0x00846524,
		ADDR_VTBL_LOADINGCL                = 0x00846544,
		ADDR_VTBL_BATTLECL                 = 0x00846560,
		ADDR_VTBL_BATTLE_WATCH             = 0x0084657C,
		ADDR_VTBL_LOADING                  = 0x0084665C,
		ADDR_VTBL_ENDING                   = 0x0084660C,
		ADDR_VTBL_LOGO                     = 0x00846738,
		ADDR_VTBL_OPENING                  = 0x008467D4,
		ADDR_VTBL_SELECT                   = 0x00846D18,
		ADDR_VTBL_SELECT_SCENARIO          = 0x00846DD0,
		ADDR_VTBL_TITLE                    = 0x00846FA4,
		ADDR_VTBL_LOADING_WATCH            = 0x00847178,
		ADDR_VTBL_BATTLE_MANAGER           = 0x008478EC,
		ADDR_VTBL_BATTLE_MANAGER_STORY     = 0x00847934,
		ADDR_VTBL_BATTLE_MANAGER_ARCADE    = 0x0084799C,
		ADDR_VTBL_INFO_MANAGER             = 0x0084A520,
		ADDR_VTBL_INFO_MANAGER_STORY       = 0x0084A6BC,
		ADDR_MENU_MODE                     = 0x0086FA94,
		ADDR_RENDERER                      = 0x00883B4C,
		ADDR_PALETTER                      = 0x00883B88,
		ADDR_BATTLE_MANAGER                = 0x008855C4,
		ADDR_INFO_MANAGER                  = 0x008855C8,
		ADDR_COMM_MODE                     = 0x00885670,
		ADDR_SUB_MODE                      = 0x00885668,
		ADDR_PNETOBJECT                    = 0x00885680,
		ADDR_INPUT_MANAGER                 = 0x008856F8,
		ADDR_PLAYER1_PROFILE_STR           = 0x00885848,
		ADDR_PLAYER2_PROFILE_STR           = 0x00886034,
		ADDR_LCHARID                       = 0x00886CF0,
		ADDR_RCHARID                       = 0x00886D10,
		ADDR_INPUT_MANAGER_CLUSTER         = 0x00887228,
		ADDR_ARGC                          = 0x00887B38,
		ADDR_ARGV                          = 0x00887B3C,
		ADDR_TEXTURE_MANAGER               = 0x0088CEE8,
		ADDR_SCENE_ID_NEW                  = 0x0088D020,
		ADDR_SCENE_ID                      = 0x0088D024,
		ADDR_USE_CV_X_DATA                 = 0x0088D028,
		ADDR_D3D9_DEVICE                   = 0x0088DE10,
	#endif
	};
}

#endif //SOKULIB_SOKUADDRESSES_HPP