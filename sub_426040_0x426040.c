// 函数名称: sub_426040
// 虚拟地址: 0x426040
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_426040()
{
    // 第一条实际指令: int32_t* eax = data_6cfe4c
    int32_t* eax = data_6cfe4c
    char const* const var_24
    int32_t var_20_1
    char const* const __saved_edi
    char* ecx_1
    
    if (eax == 0)
    label_426121:
        __saved_edi = "GetClient"
        var_20_1 = 0x75
        var_24 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    else
        if (eax[0x20d] == 1)
            eax = sub_425de0()
            void* ecx_2 = data_6cfe4c
            
            if (ecx_2 == 0)
                goto label_426121
            
            int32_t esi = *(ecx_2 + 0xa68)
            void* result = sub_436a20(sub_425de0(), esi)
            
            if (*(result + 0x10) s<= 0)
                return result
            
            void* eax_2 = sub_436a20(eax, esi)
            int32_t ecx_5 = 0
            int32_t edi_1 = 0
            int32_t esi_1 = *(eax_2 + 0x10)
            
            if (esi_1 != 0)
                int32_t eax_4
                int32_t edx_2
                edx_2:eax_4 = sx.q(esi_1)
                int32_t eax_6 = (eax_4 + (edx_2 & 3)) s>> 2
                int32_t var_8_1 = eax_6
                
                while (true)
                    int32_t var_c_1 = edi_1
                    int32_t eax_8
                    int32_t edx_4
                    edx_4:eax_8 = sx.q(ecx_5)
                    edi_1 = ecx_5
                    int32_t eax_9 = sub_44fab0(eax_8, ((edx_4 & 3) + eax_8) s>> 2, *eax_2, eax_6)
                    
                    if (eax_9 == 0xffffffff)
                        edi_1 = var_c_1
                        break
                    
                    ecx_5 = eax_9 << 2
                    
                    if (ecx_5 == esi_1)
                        break
                    
                    eax_6 = var_8_1
            
            *(eax_2 + 0x10) = edi_1
            *(eax_2 + 0x14) = 0
            return sub_45d9c0(eax, 0x5b4f8c)
        
        __saved_edi = "GameUndo"
        var_20_1 = 0xbac
        var_24 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_1 = "GetClient().activeGame.gameType == GAME_LOCAL"
    
    sub_489550(eax, &data_5b2591, ecx_1, var_24, var_20_1, __saved_edi)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
