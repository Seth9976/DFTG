// 函数名称: sub_45ea40
// 虚拟地址: 0x45ea40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_45ea40(int32_t* arg1)
{
    // 第一条实际指令: char const* const var_10
    char const* const var_10
    int32_t var_c
    char const* const var_8
    int32_t* eax
    char* ecx
    
    if (*arg1 == 2)
        int32_t ecx_1 = arg1[0x14]
        
        if (ecx_1 != 0)
            uint32_t edx_1 = zx.d(ecx_1.w)
            
            if (edx_1 u< data_62d6c8)
                eax = edx_1 * 0x8ac + data_62d6c4
            
            if (edx_1 u>= data_62d6c8 || eax[0x22a] != ecx_1)
                var_8 = "DataArray<struct RollGfx>::DataArrayGet"
                var_c = 0x6d
                ecx = "DataArrayTryToGet(id) != NULL"
                var_10 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            else
                eax = edx_1 * 0x8ac + data_62d6c4
                
                if (*eax == 1)
                    eax[8].b = 0
                    
                    if (arg1[1] != 0)
                        sub_49a5a0(&arg1[1])
                    
                    uint32_t result = zx.d(arg1[0x22a].w)
                    int32_t ecx_3 = data_62d6d0
                    data_62d6d0 = result
                    arg1[0x22a] = ecx_3
                    data_62d6d4 -= 1
                    return result
                
                var_8 = "QueueDestroyTray"
                var_c = 0x36d0
                var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                ecx = "gfxShip.type == ROLLGFX_DIE"
        else
            var_8 = "DataArray<struct RollGfx>::DataArrayGet"
            var_c = 0x6c
            ecx = "id != DATAID_NULL"
            var_10 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_8 = "QueueDestroyTray"
        var_c = 0x36cd
        var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "tray.type == ROLLGFX_TRAY_SHIPPING"
    
    sub_489550(eax, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
