// 函数名称: sub_458970
// 虚拟地址: 0x458970
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __convention("regparm")sub_458970(int32_t arg1, int32_t arg2, void* arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x14)
    int32_t edx = *(arg3 + 0x14)
    int32_t* eax = *(arg3 + 8)
    int32_t* var_c = eax
    char const* const var_84_2
    int32_t var_80
    char const* const var_7c
    char* ecx
    
    if (edx != 0)
        uint32_t ecx_1 = zx.d(edx.w)
        
        if (ecx_1 u< data_62d6c8)
            eax = ecx_1 * 0x8ac + data_62d6c4
        
        if (ecx_1 u>= data_62d6c8 || eax[0x22a] != edx)
            var_7c = "DataArray<struct RollGfx>::DataArrayGet"
            var_80 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_84_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            int32_t* esi_2 = ecx_1 * 0x8ac + data_62d6c4
            eax = sub_4543d0(esi_2)
            
            if (eax == 6)
            label_4589db:
                int32_t eax_2 = esi_2[1]
                int128_t var_70
                
                if (eax_2 == 0)
                    _memset(&var_70, eax_2.b, 0x60)
                    *arg4 = var_70
                    int128_t var_60
                    arg4[1] = var_60
                    int128_t var_50
                    arg4[2] = var_50
                    int128_t var_40
                    arg4[3] = var_40
                    int128_t var_30
                    arg4[4] = var_30
                    int128_t var_20
                    arg4[5] = var_20
                    return arg4
                
                int32_t eax_4
                int32_t edx_1
                eax_4, edx_1 = sub_426ed0(arg3 + 0x7c, eax_2, "tbl_GainDice", var_c)
                int128_t* eax_5 = sub_4babb0(eax_4, edx_1, eax_4, &var_70)
                *arg4 = *eax_5
                arg4[1] = eax_5[1]
                arg4[2] = eax_5[2]
                arg4[3] = eax_5[3]
                arg4[4] = eax_5[4]
                arg4[5] = eax_5[5]
                return arg4
            
            if (esi_2[0xe] != 3)
                eax = esi_2[0xc]
            
            if (esi_2[0xe] != 3 && *eax != 1)
                goto label_4589db
            
            var_7c = "CalcTransformOpponentDisplayDie"
            var_80 = 0x1c56
            var_84_2 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
            ecx = "Halt"
    else
        var_7c = "DataArray<struct RollGfx>::DataArrayGet"
        var_80 = 0x6c
        ecx = "id != DATAID_NULL"
        var_84_2 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    
    sub_489550(eax, &data_5b2591, ecx, var_84_2, var_80, var_7c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
