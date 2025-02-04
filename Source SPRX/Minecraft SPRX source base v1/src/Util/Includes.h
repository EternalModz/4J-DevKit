#pragma once

//INCLUDES PS3
#pragma comment(lib, "libhttp_stub.a")
#pragma comment(lib, "libhttp_util_stub.a")
#pragma comment(lib, "libnet_stub.a")
#pragma comment(lib, "netctl_stub")
#pragma comment(lib, "libsysutil_stub.a")
#pragma comment(lib, "libc.a")
#pragma comment(lib, "libstdc++.a")
#pragma comment(lib, "libstdc++_stub.a")
#pragma comment(lib, "libsn.a")
#pragma comment(lib, "libm.a")
#pragma comment(lib, "libio_stub.a")
#pragma comment(lib, "liblv2_stub.a")
#pragma comment(lib, "libfs_stub.a")

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cellstatus.h>
#include <sys/prx.h>
#include <cell/sysmodule.h>
#include <sys/process.h>
#include <sys/ppu_thread.h>
#include <sys/syscall.h>
#include <sys/tty.h>
#include <ppu_intrinsics.h>
#include <ctype.h>
#include <sys/timer.h>
#include <fastmath.h>
#include <cell/pad.h>
#include <sysutil\sysutil_msgdialog.h>
#include <sys\sys_time.h>
#include <time.h>
#include <cell/cell_fs.h>
#include <cell/http.h>
#include <sysutil/sysutil_oskdialog.h>
#include <sys\socket.h>
#include <netinet\in.h>
#include <arpa\inet.h>
#include <sys/sys_time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <netex/net.h>
#include <netex/errno.h>
#include <inttypes.h>  
#include <sys/memory.h>
#include <stdarg.h>
#include <cstdlib>
#include <sys/time_util.h>
#include <assert.h>
#include <sys/return_code.h>
#include <stddef.h>
#include <math.h>
#include <typeinfo>
#include <vector>
#include <locale.h>
#include <cell/error.h>
#include <sys/paths.h>
#include <net\if_dl.h>
#include <cell/fs/cell_fs_errno.h>
#include <cell/fs/cell_fs_file_api.h>
#include <sys/fs.h>
#include <sys/ss_get_open_psid.h>

#include <netinet/in.h>
#include <arpa/inet.h>
#include <np.h>
#include <netex/net.h>
#include <netex/errno.h>

#include <netex\libnetctl.h>
#pragma comment(lib, "net_stub")
#include <cstddef>

//INCLUDES MINECRAFT
#include "Minecraft/gamemode/GameMode.h"
#include "Minecraft/client/Minecraft.h"
#include "Minecraft/entity/player/ServerPlayer.h"
#include "Minecraft/world/entity/DamageSource.h"
#include "Minecraft/util/Direction.h"
#include "Minecraft/world/level/block/BlockPos.h"
#include "Minecraft/client/gui/GuiComponent.h"

//INCLUDES MEMORY / UTIL
#include "Util/NewDeleteOverride.hpp"
#include "Util/TimeHelpers.hpp"
#include "Util/SystemCalls.hpp"

MultiPlayerLevel* g_Level;
MultiplayerLocalPlayer* g_Localplayer;
Minecraft* g_Minecraft;
MultiPlayerGameMode* g_Gamemode;
GuiComponent* g_GuiComponent;
Level* g_Level2;

//INCLUDES SOURCE
#include "Games/Buttons.h"
#include "Util/Variables.h"
#include "Games/Colors.h"
#include "Games/PS3.h"
#include "Games/Dialog.h"
#include "Games/Vector.h"
#include "Games/Struct.h"
#include "Games/IDs.h"
#include "Games/GamesFunctions.h"
#include "Games/Functions.h"
#include "Menu/Huds.h"
#include "Games/Options.h"
#include "Menu/SubMenu.h"
#include "Menu/Menu.h"
#include "Games/Hooking.h"