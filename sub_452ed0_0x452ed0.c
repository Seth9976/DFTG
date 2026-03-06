// 函数名称: sub_452ed0
// 虚拟地址: 0x452ed0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_452ed0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* result_1 = arg1
    int32_t* result = nullptr
    int32_t* result_2 = result_1
    int32_t esi = result_1[arg2 + 0xad]
    
    if (esi != 0)
        int32_t edx = data_62d6c4
        
        while (true)
            uint32_t ecx = zx.d(esi.w)
            
            if (ecx u< data_62d6c8)
                result_1 = ecx * 0x8ac
            
            char const* const var_20
            int32_t var_1c
            char const* const var_18
            char* ecx_3
            
            if (ecx u>= data_62d6c8 || *(result_1 + edx + 0x8a8) != esi)
                var_18 = "DataArray<struct RollGfx>::DataArrayGet"
                var_1c = 0x6d
                var_20 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                ecx_3 = "DataArrayTryToGet(id) != NULL"
            else
                int32_t* ecx_2 = ecx * 0x8ac + edx
                
                if (*ecx_2 != 1)
                    var_18 = "CountDiceWhere_NoPrimary"
                    var_1c = 0x286
                    var_20 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                    ecx_3 = "gfx.type == ROLLGFX_DIE"
                else if (ecx_2[4] != arg2)
                    var_18 = "CountDiceWhere_NoPrimary"
                    var_1c = 0x289
                    var_20 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                    ecx_3 = "cur.where == where"
                else
                    result_1 = ecx_2[6]
                    
                    if (result_1 != *result_2)
                        var_18 = "CountDiceWhere_NoPrimary"
                        var_1c = 0x28a
                        var_20 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                        ecx_3 = "cur.owner == pgui.who"
                    else
                        result_1 = result + 1
                        esi = ecx_2[0xa]
                        
                        if (*(ecx_2 + 0x21) != 0)
                            result_1 = result
                        
                        result = result_1
                        
                        if (esi == 0)
                            break
                        
                        continue
            
            sub_489550(result_1, &data_5b2591, ecx_3, var_20, var_1c, var_18)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    return result
}
