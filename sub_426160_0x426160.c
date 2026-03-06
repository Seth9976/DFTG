// 函数名称: sub_426160
// 虚拟地址: 0x426160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_426160()
{
    // 第一条实际指令: int32_t eax_7 = data_6cfe4c
    int32_t eax_7 = data_6cfe4c
    char const* const var_14
    int32_t var_10
    char const* const var_c
    char* ecx
    
    if (eax_7 != 0)
        if (*(eax_7 + 0x834) == 1)
            int32_t esi_1 = *(eax_7 + 0xa68)
            void* result = sub_436a20(sub_425de0(), esi_1)
            
            if (*(result + 0xc) s<= *(result + 0x10))
                return result
            
            int32_t* eax_1 = sub_425de0()
            int32_t* eax_2 = sub_436a20(eax_1, esi_1)
            int32_t eax_4
            int32_t edx_3
            edx_3:eax_4 = sx.q(eax_2[4])
            int32_t eax_6 = (eax_4 + (edx_3 & 3)) s>> 2
            eax_7 = sub_44fab0(eax_6, eax_6, *eax_2, eax_6)
            
            if (eax_7 != 0xffffffff)
                eax_2[4] = eax_7 << 2
                eax_2[5] = 0
                return sub_45d9c0(eax_1, 0x5b4f8c) __tailcall
            
            var_c = "GameRedo"
            var_10 = 0xbe6
            ecx = "choice != -1"
        else
            var_c = "GameRedo"
            var_10 = 0xbdc
            ecx = "GetClient().activeGame.gameType == GAME_LOCAL"
        
        var_14 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
    else
        var_c = "GetClient"
        var_10 = 0x75
        var_14 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_489550(eax_7, &data_5b2591, ecx, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
