#pragma once 

enum OrbisAppInstUtilDelete {
	ORBIS_APP_INST_UTIL_DELETE_PATCH = (1u << 0),
	ORBIS_APP_INST_UTIL_DELETE_ADDCONT_EXTRA_DATA = (1u << 1),
	ORBIS_APP_INST_UTIL_DELETE_TEMP_DATA = (1u << 2),
	ORBIS_APP_INST_UTIL_DELETE_DOWNLOAD_DATA = (1u << 3),
	ORBIS_APP_INST_UTIL_DELETE_USERS_SAVE_DATA = (1u << 4),
	ORBIS_APP_INST_UTIL_DELETE_ALL_USERS_SAVE_DATA = (1u << 5),
};
